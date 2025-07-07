
// Generated from UIGrammar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  UIGrammarParser : public antlr4::Parser {
public:
  enum {
    BUTTON = 1, MENU = 2, PANEL = 3, LABEL = 4, TEXTFIELD = 5, IMAGE = 6, 
    BOOL = 7, COLON = 8, COMMA = 9, LBRACE = 10, RBRACE = 11, STRING = 12, 
    NUMBER = 13, ID = 14, WS = 15
  };

  enum {
    RuleUi = 0, RuleComponent = 1, RuleButtonComponent = 2, RuleMenuComponent = 3, 
    RulePanelComponent = 4, RuleLabelComponent = 5, RuleTextfieldComponent = 6, 
    RuleImageComponent = 7, RuleProps = 8, RuleProp = 9, RuleValue = 10
  };

  explicit UIGrammarParser(antlr4::TokenStream *input);

  UIGrammarParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~UIGrammarParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class UiContext;
  class ComponentContext;
  class ButtonComponentContext;
  class MenuComponentContext;
  class PanelComponentContext;
  class LabelComponentContext;
  class TextfieldComponentContext;
  class ImageComponentContext;
  class PropsContext;
  class PropContext;
  class ValueContext; 

  class  UiContext : public antlr4::ParserRuleContext {
  public:
    UiContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ComponentContext *> component();
    ComponentContext* component(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UiContext* ui();

  class  ComponentContext : public antlr4::ParserRuleContext {
  public:
    ComponentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ComponentContext() = default;
    void copyFrom(ComponentContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ButtonContext : public ComponentContext {
  public:
    ButtonContext(ComponentContext *ctx);

    ButtonComponentContext *buttonComponent();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ImageContext : public ComponentContext {
  public:
    ImageContext(ComponentContext *ctx);

    ImageComponentContext *imageComponent();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TextfieldContext : public ComponentContext {
  public:
    TextfieldContext(ComponentContext *ctx);

    TextfieldComponentContext *textfieldComponent();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LabelContext : public ComponentContext {
  public:
    LabelContext(ComponentContext *ctx);

    LabelComponentContext *labelComponent();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MenuContext : public ComponentContext {
  public:
    MenuContext(ComponentContext *ctx);

    MenuComponentContext *menuComponent();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PanelContext : public ComponentContext {
  public:
    PanelContext(ComponentContext *ctx);

    PanelComponentContext *panelComponent();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ComponentContext* component();

  class  ButtonComponentContext : public antlr4::ParserRuleContext {
  public:
    ButtonComponentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BUTTON();
    antlr4::tree::TerminalNode *LBRACE();
    PropsContext *props();
    antlr4::tree::TerminalNode *RBRACE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ButtonComponentContext* buttonComponent();

  class  MenuComponentContext : public antlr4::ParserRuleContext {
  public:
    MenuComponentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MENU();
    antlr4::tree::TerminalNode *LBRACE();
    PropsContext *props();
    antlr4::tree::TerminalNode *RBRACE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MenuComponentContext* menuComponent();

  class  PanelComponentContext : public antlr4::ParserRuleContext {
  public:
    PanelComponentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PANEL();
    antlr4::tree::TerminalNode *LBRACE();
    PropsContext *props();
    antlr4::tree::TerminalNode *RBRACE();
    std::vector<ComponentContext *> component();
    ComponentContext* component(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PanelComponentContext* panelComponent();

  class  LabelComponentContext : public antlr4::ParserRuleContext {
  public:
    LabelComponentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LABEL();
    antlr4::tree::TerminalNode *LBRACE();
    PropsContext *props();
    antlr4::tree::TerminalNode *RBRACE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LabelComponentContext* labelComponent();

  class  TextfieldComponentContext : public antlr4::ParserRuleContext {
  public:
    TextfieldComponentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TEXTFIELD();
    antlr4::tree::TerminalNode *LBRACE();
    PropsContext *props();
    antlr4::tree::TerminalNode *RBRACE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TextfieldComponentContext* textfieldComponent();

  class  ImageComponentContext : public antlr4::ParserRuleContext {
  public:
    ImageComponentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IMAGE();
    antlr4::tree::TerminalNode *LBRACE();
    PropsContext *props();
    antlr4::tree::TerminalNode *RBRACE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ImageComponentContext* imageComponent();

  class  PropsContext : public antlr4::ParserRuleContext {
  public:
    PropsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PropContext *> prop();
    PropContext* prop(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PropsContext* props();

  class  PropContext : public antlr4::ParserRuleContext {
  public:
    PropContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *COLON();
    ValueContext *value();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PropContext* prop();

  class  ValueContext : public antlr4::ParserRuleContext {
  public:
    ValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *NUMBER();
    antlr4::tree::TerminalNode *BOOL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValueContext* value();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

