#ifndef UI_TO_JSON_VISITOR_H
#define UI_TO_JSON_VISITOR_H

#include "UIGrammarBaseVisitor.h"
#include <string>
#include <sstream>
#include <vector>

class UIToJsonVisitor : public UIGrammarBaseVisitor
{
public:
    std::any visitUi(UIGrammarParser::UiContext *ctx) override;
    std::any visitButtonComponent(UIGrammarParser::ButtonComponentContext *ctx) override;
    std::any visitMenuComponent(UIGrammarParser::MenuComponentContext *ctx) override;
    std::any visitPanelComponent(UIGrammarParser::PanelComponentContext *ctx) override;
    std::any visitLabelComponent(UIGrammarParser::LabelComponentContext *ctx) override;
    std::any visitTextfieldComponent(UIGrammarParser::TextfieldComponentContext *ctx) override;
    std::any visitImageComponent(UIGrammarParser::ImageComponentContext *ctx) override;
    std::any visitProp(UIGrammarParser::PropContext *ctx) override;

private:
    std::string indent(int level);
    std::string escape(const std::string &str);
};

#endif
