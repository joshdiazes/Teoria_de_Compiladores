#include "HTMLGenerator.h"
#include "json.hpp"
#include <fstream>
#include <iostream>

using json = nlohmann::json;
using namespace std;

std::string componentToHtml(const json &comp)
{
    std::string type = comp["type"];
    std::string html;

    if (type == "Panel")
    {
        html += "<div";

        if (comp.contains("props"))
        {
            auto props = comp["props"];
            if (props.contains("id"))
                html += " id='" + props["id"].get<std::string>() + "'";
            html += " style='";

            if (props.contains("width"))
                html += "width:" + std::to_string(props["width"].get<int>()) + "px;";
            if (props.contains("height"))
                html += "height:" + std::to_string(props["height"].get<int>()) + "px;";
            html += "border:1px solid #ccc;padding:10px;margin:10px;'";
        }

        html += ">\n";

        if (comp.contains("children"))
        {
            for (auto &child : comp["children"])
            {
                html += componentToHtml(child);
            }
        }

        html += "</div>\n";
        return html;
    }
    else if (type == "Button")
    {
        html += "<button";
        if (comp.contains("props"))
        {
            for (auto &[key, value] : comp["props"].items())
            {
                std::string val = value.is_string() ? value.get<std::string>() : value.dump();
                if (key != "text")
                    html += " " + key + "='" + val + "'";
            }
        }

        html += ">";
        if (comp["props"].contains("text"))
            html += comp["props"]["text"].get<std::string>();
        else
            html += "Button";
        html += "</button>\n";
    }
    else if (type == "Label")
    {
        html += "<label";
        if (comp.contains("props"))
        {
            for (auto &[key, value] : comp["props"].items())
            {
                std::string val = value.is_string() ? value.get<std::string>() : value.dump();
                if (key != "text")
                    html += " " + key + "='" + val + "'";
            }
        }

        html += ">";
        if (comp["props"].contains("text"))
            html += comp["props"]["text"].get<std::string>();
        else
            html += "Label";
        html += "</label>\n";
    }
    else if (type == "TextField")
    {
        html += "<input type='text'";
        if (comp.contains("props"))
        {
            for (auto &[key, value] : comp["props"].items())
            {
                std::string val = value.is_string() ? value.get<std::string>() : value.dump();
                html += " " + key + "='" + val + "'";
            }
        }
        html += " />\n";
    }
    else if (type == "Image")
    {
        html += "<img";
        if (comp.contains("props"))
        {
            for (auto &[key, value] : comp["props"].items())
            {
                std::string val = value.is_string() ? value.get<std::string>() : value.dump();
                html += " " + key + "='" + val + "'";
            }
        }
        html += " />\n";
    }

    return html;
}

std::string generateHTMLFromJson(const std::string &jsonStr)
{
    json root = json::parse(jsonStr);
    std::string html = "<!DOCTYPE html>\n<html>\n<body>\n";

    for (auto &comp : root)
    {
        html += componentToHtml(comp);
    }

    html += "</body>\n</html>\n";

    std::ofstream out("output.html");
    out << html;
    out.close();

    return html;
}
