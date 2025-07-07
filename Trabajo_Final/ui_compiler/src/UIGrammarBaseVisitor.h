
// Generated from UIGrammar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "UIGrammarVisitor.h"


/**
 * This class provides an empty implementation of UIGrammarVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  UIGrammarBaseVisitor : public UIGrammarVisitor {
public:

  virtual std::any visitUi(UIGrammarParser::UiContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitButton(UIGrammarParser::ButtonContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMenu(UIGrammarParser::MenuContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPanel(UIGrammarParser::PanelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLabel(UIGrammarParser::LabelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTextfield(UIGrammarParser::TextfieldContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitImage(UIGrammarParser::ImageContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitButtonComponent(UIGrammarParser::ButtonComponentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMenuComponent(UIGrammarParser::MenuComponentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPanelComponent(UIGrammarParser::PanelComponentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLabelComponent(UIGrammarParser::LabelComponentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTextfieldComponent(UIGrammarParser::TextfieldComponentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitImageComponent(UIGrammarParser::ImageComponentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProps(UIGrammarParser::PropsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProp(UIGrammarParser::PropContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitValue(UIGrammarParser::ValueContext *ctx) override {
    return visitChildren(ctx);
  }


};

