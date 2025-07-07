#include "UIToJsonVisitor.h"
#include <regex>

using namespace std;

string UIToJsonVisitor::indent(int level)
{
    return string(level * 2, ' ');
}

string UIToJsonVisitor::escape(const string &str)
{
    string s = str;
    s = regex_replace(s, regex("\""), "\\\"");
    return s;
}

std::any UIToJsonVisitor::visitUi(UIGrammarParser::UiContext *ctx)
{
    vector<string> components;
    for (auto *comp : ctx->component())
    {
        components.push_back(any_cast<string>(visit(comp)));
    }

    stringstream ss;
    ss << "[\n";
    for (size_t i = 0; i < components.size(); ++i)
    {
        ss << indent(1) << components[i];
        if (i < components.size() - 1)
            ss << ",";
        ss << "\n";
    }
    ss << "]";
    return ss.str();
}

std::any UIToJsonVisitor::visitButtonComponent(UIGrammarParser::ButtonComponentContext *ctx)
{
    stringstream ss;
    ss << "{ \"type\": \"Button\"";
    vector<string> props;
    for (auto *p : ctx->props()->prop())
    {
        props.push_back(any_cast<string>(visit(p)));
    }
    if (!props.empty())
    {
        ss << ", \"props\": { ";
        for (size_t i = 0; i < props.size(); ++i)
        {
            ss << props[i];
            if (i < props.size() - 1)
                ss << ", ";
        }
        ss << " }";
    }
    ss << " }";
    return ss.str();
}

std::any UIToJsonVisitor::visitMenuComponent(UIGrammarParser::MenuComponentContext *ctx)
{
    stringstream ss;
    ss << "{ \"type\": \"Menu\"";
    vector<string> props;
    for (auto *p : ctx->props()->prop())
    {
        props.push_back(any_cast<string>(visit(p)));
    }
    if (!props.empty())
    {
        ss << ", \"props\": { ";
        for (size_t i = 0; i < props.size(); ++i)
        {
            ss << props[i];
            if (i < props.size() - 1)
                ss << ", ";
        }
        ss << " }";
    }
    ss << " }";
    return ss.str();
}

std::any UIToJsonVisitor::visitPanelComponent(UIGrammarParser::PanelComponentContext *ctx)
{
    stringstream ss;
    ss << "{ \"type\": \"Panel\"";

    vector<string> props;
    for (auto *p : ctx->props()->prop())
    {
        props.push_back(any_cast<string>(visit(p)));
    }
    if (!props.empty())
    {
        ss << ", \"props\": { ";
        for (size_t i = 0; i < props.size(); ++i)
        {
            ss << props[i];
            if (i < props.size() - 1)
                ss << ", ";
        }
        ss << " }";
    }

    vector<string> children;
    for (auto *c : ctx->component())
    {
        children.push_back(any_cast<string>(visit(c)));
    }
    if (!children.empty())
    {
        ss << ", \"children\": [ ";
        for (size_t i = 0; i < children.size(); ++i)
        {
            ss << children[i];
            if (i < children.size() - 1)
                ss << ", ";
        }
        ss << " ]";
    }

    ss << " }";
    return ss.str();
}

std::any UIToJsonVisitor::visitLabelComponent(UIGrammarParser::LabelComponentContext *ctx)
{
    stringstream ss;
    ss << "{ \"type\": \"Label\"";
    vector<string> props;
    for (auto *p : ctx->props()->prop())
    {
        props.push_back(any_cast<string>(visit(p)));
    }
    if (!props.empty())
    {
        ss << ", \"props\": { ";
        for (size_t i = 0; i < props.size(); ++i)
        {
            ss << props[i];
            if (i < props.size() - 1)
                ss << ", ";
        }
        ss << " }";
    }
    ss << " }";
    return ss.str();
}

std::any UIToJsonVisitor::visitTextfieldComponent(UIGrammarParser::TextfieldComponentContext *ctx)
{
    stringstream ss;
    ss << "{ \"type\": \"TextField\"";
    vector<string> props;
    for (auto *p : ctx->props()->prop())
    {
        props.push_back(any_cast<string>(visit(p)));
    }
    if (!props.empty())
    {
        ss << ", \"props\": { ";
        for (size_t i = 0; i < props.size(); ++i)
        {
            ss << props[i];
            if (i < props.size() - 1)
                ss << ", ";
        }
        ss << " }";
    }
    ss << " }";
    return ss.str();
}

std::any UIToJsonVisitor::visitImageComponent(UIGrammarParser::ImageComponentContext *ctx)
{
    stringstream ss;
    ss << "{ \"type\": \"Image\"";
    vector<string> props;
    for (auto *p : ctx->props()->prop())
    {
        props.push_back(any_cast<string>(visit(p)));
    }
    if (!props.empty())
    {
        ss << ", \"props\": { ";
        for (size_t i = 0; i < props.size(); ++i)
        {
            ss << props[i];
            if (i < props.size() - 1)
                ss << ", ";
        }
        ss << " }";
    }
    ss << " }";
    return ss.str();
}

std::any UIToJsonVisitor::visitProp(UIGrammarParser::PropContext *ctx)
{
    string key = ctx->ID()->getText();
    string value;

    if (ctx->value()->STRING())
    {
        value = ctx->value()->STRING()->getText();
    }
    else if (ctx->value()->NUMBER())
    {
        value = ctx->value()->NUMBER()->getText();
    }
    else if (ctx->value()->BOOL())
    {
        value = ctx->value()->BOOL()->getText();
    }

    return "\"" + key + "\": " + value;
}
