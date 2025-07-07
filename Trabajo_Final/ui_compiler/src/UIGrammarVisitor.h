
// Generated from UIGrammar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "UIGrammarParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by UIGrammarParser.
 */
class  UIGrammarVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by UIGrammarParser.
   */
    virtual std::any visitUi(UIGrammarParser::UiContext *context) = 0;

    virtual std::any visitButton(UIGrammarParser::ButtonContext *context) = 0;

    virtual std::any visitMenu(UIGrammarParser::MenuContext *context) = 0;

    virtual std::any visitPanel(UIGrammarParser::PanelContext *context) = 0;

    virtual std::any visitLabel(UIGrammarParser::LabelContext *context) = 0;

    virtual std::any visitTextfield(UIGrammarParser::TextfieldContext *context) = 0;

    virtual std::any visitImage(UIGrammarParser::ImageContext *context) = 0;

    virtual std::any visitButtonComponent(UIGrammarParser::ButtonComponentContext *context) = 0;

    virtual std::any visitMenuComponent(UIGrammarParser::MenuComponentContext *context) = 0;

    virtual std::any visitPanelComponent(UIGrammarParser::PanelComponentContext *context) = 0;

    virtual std::any visitLabelComponent(UIGrammarParser::LabelComponentContext *context) = 0;

    virtual std::any visitTextfieldComponent(UIGrammarParser::TextfieldComponentContext *context) = 0;

    virtual std::any visitImageComponent(UIGrammarParser::ImageComponentContext *context) = 0;

    virtual std::any visitProps(UIGrammarParser::PropsContext *context) = 0;

    virtual std::any visitProp(UIGrammarParser::PropContext *context) = 0;

    virtual std::any visitValue(UIGrammarParser::ValueContext *context) = 0;


};

