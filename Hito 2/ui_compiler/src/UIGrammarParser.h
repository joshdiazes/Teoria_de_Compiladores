
// Generated from UIGrammar.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  UIGrammarParser : public antlr4::Parser {
public:
  enum {
    BUTTON = 1, MENU = 2, PANEL = 3, TEXT = 4, ONCLICK = 5, COLON = 6, LBRACE = 7, 
    RBRACE = 8, COMMA = 9, STRING = 10, ID = 11, WS = 12
  };

  enum {
    RuleUi = 0, RuleComponent = 1, RuleButton = 2, RuleMenu = 3, RulePanel = 4, 
    RuleProps = 5, RuleProp = 6
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
  class ButtonContext;
  class MenuContext;
  class PanelContext;
  class PropsContext;
  class PropContext; 

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
    virtual size_t getRuleIndex() const override;
    ButtonContext *button();
    MenuContext *menu();
    PanelContext *panel();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ComponentContext* component();

  class  ButtonContext : public antlr4::ParserRuleContext {
  public:
    ButtonContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BUTTON();
    antlr4::tree::TerminalNode *LBRACE();
    PropsContext *props();
    antlr4::tree::TerminalNode *RBRACE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ButtonContext* button();

  class  MenuContext : public antlr4::ParserRuleContext {
  public:
    MenuContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MENU();
    antlr4::tree::TerminalNode *LBRACE();
    PropsContext *props();
    antlr4::tree::TerminalNode *RBRACE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MenuContext* menu();

  class  PanelContext : public antlr4::ParserRuleContext {
  public:
    PanelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PANEL();
    antlr4::tree::TerminalNode *LBRACE();
    PropsContext *props();
    antlr4::tree::TerminalNode *RBRACE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PanelContext* panel();

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
    antlr4::tree::TerminalNode *TEXT();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *ONCLICK();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PropContext* prop();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

