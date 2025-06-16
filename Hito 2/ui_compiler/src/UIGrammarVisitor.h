
// Generated from UIGrammar.g4 by ANTLR 4.13.1

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

    virtual std::any visitComponent(UIGrammarParser::ComponentContext *context) = 0;

    virtual std::any visitButton(UIGrammarParser::ButtonContext *context) = 0;

    virtual std::any visitMenu(UIGrammarParser::MenuContext *context) = 0;

    virtual std::any visitPanel(UIGrammarParser::PanelContext *context) = 0;

    virtual std::any visitProps(UIGrammarParser::PropsContext *context) = 0;

    virtual std::any visitProp(UIGrammarParser::PropContext *context) = 0;


};

