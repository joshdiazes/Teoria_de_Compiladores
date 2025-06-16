
// Generated from UIGrammar.g4 by ANTLR 4.13.1


#include "UIGrammarVisitor.h"

#include "UIGrammarParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct UIGrammarParserStaticData final {
  UIGrammarParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  UIGrammarParserStaticData(const UIGrammarParserStaticData&) = delete;
  UIGrammarParserStaticData(UIGrammarParserStaticData&&) = delete;
  UIGrammarParserStaticData& operator=(const UIGrammarParserStaticData&) = delete;
  UIGrammarParserStaticData& operator=(UIGrammarParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag uigrammarParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
UIGrammarParserStaticData *uigrammarParserStaticData = nullptr;

void uigrammarParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (uigrammarParserStaticData != nullptr) {
    return;
  }
#else
  assert(uigrammarParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<UIGrammarParserStaticData>(
    std::vector<std::string>{
      "ui", "component", "button", "menu", "panel", "props", "prop"
    },
    std::vector<std::string>{
      "", "'Button'", "'Menu'", "'Panel'", "'text'", "'onClick'", "':'", 
      "'{'", "'}'", "','"
    },
    std::vector<std::string>{
      "", "BUTTON", "MENU", "PANEL", "TEXT", "ONCLICK", "COLON", "LBRACE", 
      "RBRACE", "COMMA", "STRING", "ID", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,12,56,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,1,0,
  	4,0,16,8,0,11,0,12,0,17,1,1,1,1,1,1,3,1,23,8,1,1,2,1,2,1,2,1,2,1,2,1,
  	3,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,5,1,5,1,5,5,5,43,8,5,10,5,12,
  	5,46,9,5,1,6,1,6,1,6,1,6,1,6,1,6,3,6,54,8,6,1,6,0,0,7,0,2,4,6,8,10,12,
  	0,0,53,0,15,1,0,0,0,2,22,1,0,0,0,4,24,1,0,0,0,6,29,1,0,0,0,8,34,1,0,0,
  	0,10,39,1,0,0,0,12,53,1,0,0,0,14,16,3,2,1,0,15,14,1,0,0,0,16,17,1,0,0,
  	0,17,15,1,0,0,0,17,18,1,0,0,0,18,1,1,0,0,0,19,23,3,4,2,0,20,23,3,6,3,
  	0,21,23,3,8,4,0,22,19,1,0,0,0,22,20,1,0,0,0,22,21,1,0,0,0,23,3,1,0,0,
  	0,24,25,5,1,0,0,25,26,5,7,0,0,26,27,3,10,5,0,27,28,5,8,0,0,28,5,1,0,0,
  	0,29,30,5,2,0,0,30,31,5,7,0,0,31,32,3,10,5,0,32,33,5,8,0,0,33,7,1,0,0,
  	0,34,35,5,3,0,0,35,36,5,7,0,0,36,37,3,10,5,0,37,38,5,8,0,0,38,9,1,0,0,
  	0,39,44,3,12,6,0,40,41,5,9,0,0,41,43,3,12,6,0,42,40,1,0,0,0,43,46,1,0,
  	0,0,44,42,1,0,0,0,44,45,1,0,0,0,45,11,1,0,0,0,46,44,1,0,0,0,47,48,5,4,
  	0,0,48,49,5,6,0,0,49,54,5,10,0,0,50,51,5,5,0,0,51,52,5,6,0,0,52,54,5,
  	10,0,0,53,47,1,0,0,0,53,50,1,0,0,0,54,13,1,0,0,0,4,17,22,44,53
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  uigrammarParserStaticData = staticData.release();
}

}

UIGrammarParser::UIGrammarParser(TokenStream *input) : UIGrammarParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

UIGrammarParser::UIGrammarParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  UIGrammarParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *uigrammarParserStaticData->atn, uigrammarParserStaticData->decisionToDFA, uigrammarParserStaticData->sharedContextCache, options);
}

UIGrammarParser::~UIGrammarParser() {
  delete _interpreter;
}

const atn::ATN& UIGrammarParser::getATN() const {
  return *uigrammarParserStaticData->atn;
}

std::string UIGrammarParser::getGrammarFileName() const {
  return "UIGrammar.g4";
}

const std::vector<std::string>& UIGrammarParser::getRuleNames() const {
  return uigrammarParserStaticData->ruleNames;
}

const dfa::Vocabulary& UIGrammarParser::getVocabulary() const {
  return uigrammarParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView UIGrammarParser::getSerializedATN() const {
  return uigrammarParserStaticData->serializedATN;
}


//----------------- UiContext ------------------------------------------------------------------

UIGrammarParser::UiContext::UiContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<UIGrammarParser::ComponentContext *> UIGrammarParser::UiContext::component() {
  return getRuleContexts<UIGrammarParser::ComponentContext>();
}

UIGrammarParser::ComponentContext* UIGrammarParser::UiContext::component(size_t i) {
  return getRuleContext<UIGrammarParser::ComponentContext>(i);
}


size_t UIGrammarParser::UiContext::getRuleIndex() const {
  return UIGrammarParser::RuleUi;
}


std::any UIGrammarParser::UiContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<UIGrammarVisitor*>(visitor))
    return parserVisitor->visitUi(this);
  else
    return visitor->visitChildren(this);
}

UIGrammarParser::UiContext* UIGrammarParser::ui() {
  UiContext *_localctx = _tracker.createInstance<UiContext>(_ctx, getState());
  enterRule(_localctx, 0, UIGrammarParser::RuleUi);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(15); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(14);
      component();
      setState(17); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 14) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComponentContext ------------------------------------------------------------------

UIGrammarParser::ComponentContext::ComponentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

UIGrammarParser::ButtonContext* UIGrammarParser::ComponentContext::button() {
  return getRuleContext<UIGrammarParser::ButtonContext>(0);
}

UIGrammarParser::MenuContext* UIGrammarParser::ComponentContext::menu() {
  return getRuleContext<UIGrammarParser::MenuContext>(0);
}

UIGrammarParser::PanelContext* UIGrammarParser::ComponentContext::panel() {
  return getRuleContext<UIGrammarParser::PanelContext>(0);
}


size_t UIGrammarParser::ComponentContext::getRuleIndex() const {
  return UIGrammarParser::RuleComponent;
}


std::any UIGrammarParser::ComponentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<UIGrammarVisitor*>(visitor))
    return parserVisitor->visitComponent(this);
  else
    return visitor->visitChildren(this);
}

UIGrammarParser::ComponentContext* UIGrammarParser::component() {
  ComponentContext *_localctx = _tracker.createInstance<ComponentContext>(_ctx, getState());
  enterRule(_localctx, 2, UIGrammarParser::RuleComponent);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(22);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case UIGrammarParser::BUTTON: {
        enterOuterAlt(_localctx, 1);
        setState(19);
        button();
        break;
      }

      case UIGrammarParser::MENU: {
        enterOuterAlt(_localctx, 2);
        setState(20);
        menu();
        break;
      }

      case UIGrammarParser::PANEL: {
        enterOuterAlt(_localctx, 3);
        setState(21);
        panel();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ButtonContext ------------------------------------------------------------------

UIGrammarParser::ButtonContext::ButtonContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* UIGrammarParser::ButtonContext::BUTTON() {
  return getToken(UIGrammarParser::BUTTON, 0);
}

tree::TerminalNode* UIGrammarParser::ButtonContext::LBRACE() {
  return getToken(UIGrammarParser::LBRACE, 0);
}

UIGrammarParser::PropsContext* UIGrammarParser::ButtonContext::props() {
  return getRuleContext<UIGrammarParser::PropsContext>(0);
}

tree::TerminalNode* UIGrammarParser::ButtonContext::RBRACE() {
  return getToken(UIGrammarParser::RBRACE, 0);
}


size_t UIGrammarParser::ButtonContext::getRuleIndex() const {
  return UIGrammarParser::RuleButton;
}


std::any UIGrammarParser::ButtonContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<UIGrammarVisitor*>(visitor))
    return parserVisitor->visitButton(this);
  else
    return visitor->visitChildren(this);
}

UIGrammarParser::ButtonContext* UIGrammarParser::button() {
  ButtonContext *_localctx = _tracker.createInstance<ButtonContext>(_ctx, getState());
  enterRule(_localctx, 4, UIGrammarParser::RuleButton);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(24);
    match(UIGrammarParser::BUTTON);
    setState(25);
    match(UIGrammarParser::LBRACE);
    setState(26);
    props();
    setState(27);
    match(UIGrammarParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MenuContext ------------------------------------------------------------------

UIGrammarParser::MenuContext::MenuContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* UIGrammarParser::MenuContext::MENU() {
  return getToken(UIGrammarParser::MENU, 0);
}

tree::TerminalNode* UIGrammarParser::MenuContext::LBRACE() {
  return getToken(UIGrammarParser::LBRACE, 0);
}

UIGrammarParser::PropsContext* UIGrammarParser::MenuContext::props() {
  return getRuleContext<UIGrammarParser::PropsContext>(0);
}

tree::TerminalNode* UIGrammarParser::MenuContext::RBRACE() {
  return getToken(UIGrammarParser::RBRACE, 0);
}


size_t UIGrammarParser::MenuContext::getRuleIndex() const {
  return UIGrammarParser::RuleMenu;
}


std::any UIGrammarParser::MenuContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<UIGrammarVisitor*>(visitor))
    return parserVisitor->visitMenu(this);
  else
    return visitor->visitChildren(this);
}

UIGrammarParser::MenuContext* UIGrammarParser::menu() {
  MenuContext *_localctx = _tracker.createInstance<MenuContext>(_ctx, getState());
  enterRule(_localctx, 6, UIGrammarParser::RuleMenu);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(29);
    match(UIGrammarParser::MENU);
    setState(30);
    match(UIGrammarParser::LBRACE);
    setState(31);
    props();
    setState(32);
    match(UIGrammarParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PanelContext ------------------------------------------------------------------

UIGrammarParser::PanelContext::PanelContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* UIGrammarParser::PanelContext::PANEL() {
  return getToken(UIGrammarParser::PANEL, 0);
}

tree::TerminalNode* UIGrammarParser::PanelContext::LBRACE() {
  return getToken(UIGrammarParser::LBRACE, 0);
}

UIGrammarParser::PropsContext* UIGrammarParser::PanelContext::props() {
  return getRuleContext<UIGrammarParser::PropsContext>(0);
}

tree::TerminalNode* UIGrammarParser::PanelContext::RBRACE() {
  return getToken(UIGrammarParser::RBRACE, 0);
}


size_t UIGrammarParser::PanelContext::getRuleIndex() const {
  return UIGrammarParser::RulePanel;
}


std::any UIGrammarParser::PanelContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<UIGrammarVisitor*>(visitor))
    return parserVisitor->visitPanel(this);
  else
    return visitor->visitChildren(this);
}

UIGrammarParser::PanelContext* UIGrammarParser::panel() {
  PanelContext *_localctx = _tracker.createInstance<PanelContext>(_ctx, getState());
  enterRule(_localctx, 8, UIGrammarParser::RulePanel);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(34);
    match(UIGrammarParser::PANEL);
    setState(35);
    match(UIGrammarParser::LBRACE);
    setState(36);
    props();
    setState(37);
    match(UIGrammarParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PropsContext ------------------------------------------------------------------

UIGrammarParser::PropsContext::PropsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<UIGrammarParser::PropContext *> UIGrammarParser::PropsContext::prop() {
  return getRuleContexts<UIGrammarParser::PropContext>();
}

UIGrammarParser::PropContext* UIGrammarParser::PropsContext::prop(size_t i) {
  return getRuleContext<UIGrammarParser::PropContext>(i);
}

std::vector<tree::TerminalNode *> UIGrammarParser::PropsContext::COMMA() {
  return getTokens(UIGrammarParser::COMMA);
}

tree::TerminalNode* UIGrammarParser::PropsContext::COMMA(size_t i) {
  return getToken(UIGrammarParser::COMMA, i);
}


size_t UIGrammarParser::PropsContext::getRuleIndex() const {
  return UIGrammarParser::RuleProps;
}


std::any UIGrammarParser::PropsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<UIGrammarVisitor*>(visitor))
    return parserVisitor->visitProps(this);
  else
    return visitor->visitChildren(this);
}

UIGrammarParser::PropsContext* UIGrammarParser::props() {
  PropsContext *_localctx = _tracker.createInstance<PropsContext>(_ctx, getState());
  enterRule(_localctx, 10, UIGrammarParser::RuleProps);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(39);
    prop();
    setState(44);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == UIGrammarParser::COMMA) {
      setState(40);
      match(UIGrammarParser::COMMA);
      setState(41);
      prop();
      setState(46);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PropContext ------------------------------------------------------------------

UIGrammarParser::PropContext::PropContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* UIGrammarParser::PropContext::TEXT() {
  return getToken(UIGrammarParser::TEXT, 0);
}

tree::TerminalNode* UIGrammarParser::PropContext::COLON() {
  return getToken(UIGrammarParser::COLON, 0);
}

tree::TerminalNode* UIGrammarParser::PropContext::STRING() {
  return getToken(UIGrammarParser::STRING, 0);
}

tree::TerminalNode* UIGrammarParser::PropContext::ONCLICK() {
  return getToken(UIGrammarParser::ONCLICK, 0);
}


size_t UIGrammarParser::PropContext::getRuleIndex() const {
  return UIGrammarParser::RuleProp;
}


std::any UIGrammarParser::PropContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<UIGrammarVisitor*>(visitor))
    return parserVisitor->visitProp(this);
  else
    return visitor->visitChildren(this);
}

UIGrammarParser::PropContext* UIGrammarParser::prop() {
  PropContext *_localctx = _tracker.createInstance<PropContext>(_ctx, getState());
  enterRule(_localctx, 12, UIGrammarParser::RuleProp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(53);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case UIGrammarParser::TEXT: {
        enterOuterAlt(_localctx, 1);
        setState(47);
        match(UIGrammarParser::TEXT);
        setState(48);
        match(UIGrammarParser::COLON);
        setState(49);
        match(UIGrammarParser::STRING);
        break;
      }

      case UIGrammarParser::ONCLICK: {
        enterOuterAlt(_localctx, 2);
        setState(50);
        match(UIGrammarParser::ONCLICK);
        setState(51);
        match(UIGrammarParser::COLON);
        setState(52);
        match(UIGrammarParser::STRING);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void UIGrammarParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  uigrammarParserInitialize();
#else
  ::antlr4::internal::call_once(uigrammarParserOnceFlag, uigrammarParserInitialize);
#endif
}
