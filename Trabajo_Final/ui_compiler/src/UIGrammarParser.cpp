
// Generated from UIGrammar.g4 by ANTLR 4.13.2


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
std::unique_ptr<UIGrammarParserStaticData> uigrammarParserStaticData = nullptr;

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
      "ui", "component", "buttonComponent", "menuComponent", "panelComponent", 
      "labelComponent", "textfieldComponent", "imageComponent", "props", 
      "prop", "value"
    },
    std::vector<std::string>{
      "", "'Button'", "'Menu'", "'Panel'", "'Label'", "'TextField'", "'Image'", 
      "", "':'", "','", "'{'", "'}'"
    },
    std::vector<std::string>{
      "", "BUTTON", "MENU", "PANEL", "LABEL", "TEXTFIELD", "IMAGE", "BOOL", 
      "COLON", "COMMA", "LBRACE", "RBRACE", "STRING", "NUMBER", "ID", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,15,86,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,7,
  	7,7,2,8,7,8,2,9,7,9,2,10,7,10,1,0,4,0,24,8,0,11,0,12,0,25,1,1,1,1,1,1,
  	1,1,1,1,1,1,3,1,34,8,1,1,2,1,2,1,2,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,4,1,
  	4,1,4,1,4,5,4,50,8,4,10,4,12,4,53,9,4,1,4,1,4,1,5,1,5,1,5,1,5,1,5,1,6,
  	1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,8,1,8,1,8,5,8,75,8,8,10,8,12,8,
  	78,9,8,1,9,1,9,1,9,1,9,1,10,1,10,1,10,0,0,11,0,2,4,6,8,10,12,14,16,18,
  	20,0,1,2,0,7,7,12,13,82,0,23,1,0,0,0,2,33,1,0,0,0,4,35,1,0,0,0,6,40,1,
  	0,0,0,8,45,1,0,0,0,10,56,1,0,0,0,12,61,1,0,0,0,14,66,1,0,0,0,16,71,1,
  	0,0,0,18,79,1,0,0,0,20,83,1,0,0,0,22,24,3,2,1,0,23,22,1,0,0,0,24,25,1,
  	0,0,0,25,23,1,0,0,0,25,26,1,0,0,0,26,1,1,0,0,0,27,34,3,4,2,0,28,34,3,
  	6,3,0,29,34,3,8,4,0,30,34,3,10,5,0,31,34,3,12,6,0,32,34,3,14,7,0,33,27,
  	1,0,0,0,33,28,1,0,0,0,33,29,1,0,0,0,33,30,1,0,0,0,33,31,1,0,0,0,33,32,
  	1,0,0,0,34,3,1,0,0,0,35,36,5,1,0,0,36,37,5,10,0,0,37,38,3,16,8,0,38,39,
  	5,11,0,0,39,5,1,0,0,0,40,41,5,2,0,0,41,42,5,10,0,0,42,43,3,16,8,0,43,
  	44,5,11,0,0,44,7,1,0,0,0,45,46,5,3,0,0,46,47,5,10,0,0,47,51,3,16,8,0,
  	48,50,3,2,1,0,49,48,1,0,0,0,50,53,1,0,0,0,51,49,1,0,0,0,51,52,1,0,0,0,
  	52,54,1,0,0,0,53,51,1,0,0,0,54,55,5,11,0,0,55,9,1,0,0,0,56,57,5,4,0,0,
  	57,58,5,10,0,0,58,59,3,16,8,0,59,60,5,11,0,0,60,11,1,0,0,0,61,62,5,5,
  	0,0,62,63,5,10,0,0,63,64,3,16,8,0,64,65,5,11,0,0,65,13,1,0,0,0,66,67,
  	5,6,0,0,67,68,5,10,0,0,68,69,3,16,8,0,69,70,5,11,0,0,70,15,1,0,0,0,71,
  	76,3,18,9,0,72,73,5,9,0,0,73,75,3,18,9,0,74,72,1,0,0,0,75,78,1,0,0,0,
  	76,74,1,0,0,0,76,77,1,0,0,0,77,17,1,0,0,0,78,76,1,0,0,0,79,80,5,14,0,
  	0,80,81,5,8,0,0,81,82,3,20,10,0,82,19,1,0,0,0,83,84,7,0,0,0,84,21,1,0,
  	0,0,4,25,33,51,76
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  uigrammarParserStaticData = std::move(staticData);
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
    setState(23); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(22);
      component();
      setState(25); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 126) != 0));
   
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


size_t UIGrammarParser::ComponentContext::getRuleIndex() const {
  return UIGrammarParser::RuleComponent;
}

void UIGrammarParser::ComponentContext::copyFrom(ComponentContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ButtonContext ------------------------------------------------------------------

UIGrammarParser::ButtonComponentContext* UIGrammarParser::ButtonContext::buttonComponent() {
  return getRuleContext<UIGrammarParser::ButtonComponentContext>(0);
}

UIGrammarParser::ButtonContext::ButtonContext(ComponentContext *ctx) { copyFrom(ctx); }


std::any UIGrammarParser::ButtonContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<UIGrammarVisitor*>(visitor))
    return parserVisitor->visitButton(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ImageContext ------------------------------------------------------------------

UIGrammarParser::ImageComponentContext* UIGrammarParser::ImageContext::imageComponent() {
  return getRuleContext<UIGrammarParser::ImageComponentContext>(0);
}

UIGrammarParser::ImageContext::ImageContext(ComponentContext *ctx) { copyFrom(ctx); }


std::any UIGrammarParser::ImageContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<UIGrammarVisitor*>(visitor))
    return parserVisitor->visitImage(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TextfieldContext ------------------------------------------------------------------

UIGrammarParser::TextfieldComponentContext* UIGrammarParser::TextfieldContext::textfieldComponent() {
  return getRuleContext<UIGrammarParser::TextfieldComponentContext>(0);
}

UIGrammarParser::TextfieldContext::TextfieldContext(ComponentContext *ctx) { copyFrom(ctx); }


std::any UIGrammarParser::TextfieldContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<UIGrammarVisitor*>(visitor))
    return parserVisitor->visitTextfield(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LabelContext ------------------------------------------------------------------

UIGrammarParser::LabelComponentContext* UIGrammarParser::LabelContext::labelComponent() {
  return getRuleContext<UIGrammarParser::LabelComponentContext>(0);
}

UIGrammarParser::LabelContext::LabelContext(ComponentContext *ctx) { copyFrom(ctx); }


std::any UIGrammarParser::LabelContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<UIGrammarVisitor*>(visitor))
    return parserVisitor->visitLabel(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MenuContext ------------------------------------------------------------------

UIGrammarParser::MenuComponentContext* UIGrammarParser::MenuContext::menuComponent() {
  return getRuleContext<UIGrammarParser::MenuComponentContext>(0);
}

UIGrammarParser::MenuContext::MenuContext(ComponentContext *ctx) { copyFrom(ctx); }


std::any UIGrammarParser::MenuContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<UIGrammarVisitor*>(visitor))
    return parserVisitor->visitMenu(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PanelContext ------------------------------------------------------------------

UIGrammarParser::PanelComponentContext* UIGrammarParser::PanelContext::panelComponent() {
  return getRuleContext<UIGrammarParser::PanelComponentContext>(0);
}

UIGrammarParser::PanelContext::PanelContext(ComponentContext *ctx) { copyFrom(ctx); }


std::any UIGrammarParser::PanelContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<UIGrammarVisitor*>(visitor))
    return parserVisitor->visitPanel(this);
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
    setState(33);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case UIGrammarParser::BUTTON: {
        _localctx = _tracker.createInstance<UIGrammarParser::ButtonContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(27);
        buttonComponent();
        break;
      }

      case UIGrammarParser::MENU: {
        _localctx = _tracker.createInstance<UIGrammarParser::MenuContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(28);
        menuComponent();
        break;
      }

      case UIGrammarParser::PANEL: {
        _localctx = _tracker.createInstance<UIGrammarParser::PanelContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(29);
        panelComponent();
        break;
      }

      case UIGrammarParser::LABEL: {
        _localctx = _tracker.createInstance<UIGrammarParser::LabelContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(30);
        labelComponent();
        break;
      }

      case UIGrammarParser::TEXTFIELD: {
        _localctx = _tracker.createInstance<UIGrammarParser::TextfieldContext>(_localctx);
        enterOuterAlt(_localctx, 5);
        setState(31);
        textfieldComponent();
        break;
      }

      case UIGrammarParser::IMAGE: {
        _localctx = _tracker.createInstance<UIGrammarParser::ImageContext>(_localctx);
        enterOuterAlt(_localctx, 6);
        setState(32);
        imageComponent();
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

//----------------- ButtonComponentContext ------------------------------------------------------------------

UIGrammarParser::ButtonComponentContext::ButtonComponentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* UIGrammarParser::ButtonComponentContext::BUTTON() {
  return getToken(UIGrammarParser::BUTTON, 0);
}

tree::TerminalNode* UIGrammarParser::ButtonComponentContext::LBRACE() {
  return getToken(UIGrammarParser::LBRACE, 0);
}

UIGrammarParser::PropsContext* UIGrammarParser::ButtonComponentContext::props() {
  return getRuleContext<UIGrammarParser::PropsContext>(0);
}

tree::TerminalNode* UIGrammarParser::ButtonComponentContext::RBRACE() {
  return getToken(UIGrammarParser::RBRACE, 0);
}


size_t UIGrammarParser::ButtonComponentContext::getRuleIndex() const {
  return UIGrammarParser::RuleButtonComponent;
}


std::any UIGrammarParser::ButtonComponentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<UIGrammarVisitor*>(visitor))
    return parserVisitor->visitButtonComponent(this);
  else
    return visitor->visitChildren(this);
}

UIGrammarParser::ButtonComponentContext* UIGrammarParser::buttonComponent() {
  ButtonComponentContext *_localctx = _tracker.createInstance<ButtonComponentContext>(_ctx, getState());
  enterRule(_localctx, 4, UIGrammarParser::RuleButtonComponent);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(35);
    match(UIGrammarParser::BUTTON);
    setState(36);
    match(UIGrammarParser::LBRACE);
    setState(37);
    props();
    setState(38);
    match(UIGrammarParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MenuComponentContext ------------------------------------------------------------------

UIGrammarParser::MenuComponentContext::MenuComponentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* UIGrammarParser::MenuComponentContext::MENU() {
  return getToken(UIGrammarParser::MENU, 0);
}

tree::TerminalNode* UIGrammarParser::MenuComponentContext::LBRACE() {
  return getToken(UIGrammarParser::LBRACE, 0);
}

UIGrammarParser::PropsContext* UIGrammarParser::MenuComponentContext::props() {
  return getRuleContext<UIGrammarParser::PropsContext>(0);
}

tree::TerminalNode* UIGrammarParser::MenuComponentContext::RBRACE() {
  return getToken(UIGrammarParser::RBRACE, 0);
}


size_t UIGrammarParser::MenuComponentContext::getRuleIndex() const {
  return UIGrammarParser::RuleMenuComponent;
}


std::any UIGrammarParser::MenuComponentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<UIGrammarVisitor*>(visitor))
    return parserVisitor->visitMenuComponent(this);
  else
    return visitor->visitChildren(this);
}

UIGrammarParser::MenuComponentContext* UIGrammarParser::menuComponent() {
  MenuComponentContext *_localctx = _tracker.createInstance<MenuComponentContext>(_ctx, getState());
  enterRule(_localctx, 6, UIGrammarParser::RuleMenuComponent);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(40);
    match(UIGrammarParser::MENU);
    setState(41);
    match(UIGrammarParser::LBRACE);
    setState(42);
    props();
    setState(43);
    match(UIGrammarParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PanelComponentContext ------------------------------------------------------------------

UIGrammarParser::PanelComponentContext::PanelComponentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* UIGrammarParser::PanelComponentContext::PANEL() {
  return getToken(UIGrammarParser::PANEL, 0);
}

tree::TerminalNode* UIGrammarParser::PanelComponentContext::LBRACE() {
  return getToken(UIGrammarParser::LBRACE, 0);
}

UIGrammarParser::PropsContext* UIGrammarParser::PanelComponentContext::props() {
  return getRuleContext<UIGrammarParser::PropsContext>(0);
}

tree::TerminalNode* UIGrammarParser::PanelComponentContext::RBRACE() {
  return getToken(UIGrammarParser::RBRACE, 0);
}

std::vector<UIGrammarParser::ComponentContext *> UIGrammarParser::PanelComponentContext::component() {
  return getRuleContexts<UIGrammarParser::ComponentContext>();
}

UIGrammarParser::ComponentContext* UIGrammarParser::PanelComponentContext::component(size_t i) {
  return getRuleContext<UIGrammarParser::ComponentContext>(i);
}


size_t UIGrammarParser::PanelComponentContext::getRuleIndex() const {
  return UIGrammarParser::RulePanelComponent;
}


std::any UIGrammarParser::PanelComponentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<UIGrammarVisitor*>(visitor))
    return parserVisitor->visitPanelComponent(this);
  else
    return visitor->visitChildren(this);
}

UIGrammarParser::PanelComponentContext* UIGrammarParser::panelComponent() {
  PanelComponentContext *_localctx = _tracker.createInstance<PanelComponentContext>(_ctx, getState());
  enterRule(_localctx, 8, UIGrammarParser::RulePanelComponent);
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
    setState(45);
    match(UIGrammarParser::PANEL);
    setState(46);
    match(UIGrammarParser::LBRACE);
    setState(47);
    props();
    setState(51);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 126) != 0)) {
      setState(48);
      component();
      setState(53);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(54);
    match(UIGrammarParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LabelComponentContext ------------------------------------------------------------------

UIGrammarParser::LabelComponentContext::LabelComponentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* UIGrammarParser::LabelComponentContext::LABEL() {
  return getToken(UIGrammarParser::LABEL, 0);
}

tree::TerminalNode* UIGrammarParser::LabelComponentContext::LBRACE() {
  return getToken(UIGrammarParser::LBRACE, 0);
}

UIGrammarParser::PropsContext* UIGrammarParser::LabelComponentContext::props() {
  return getRuleContext<UIGrammarParser::PropsContext>(0);
}

tree::TerminalNode* UIGrammarParser::LabelComponentContext::RBRACE() {
  return getToken(UIGrammarParser::RBRACE, 0);
}


size_t UIGrammarParser::LabelComponentContext::getRuleIndex() const {
  return UIGrammarParser::RuleLabelComponent;
}


std::any UIGrammarParser::LabelComponentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<UIGrammarVisitor*>(visitor))
    return parserVisitor->visitLabelComponent(this);
  else
    return visitor->visitChildren(this);
}

UIGrammarParser::LabelComponentContext* UIGrammarParser::labelComponent() {
  LabelComponentContext *_localctx = _tracker.createInstance<LabelComponentContext>(_ctx, getState());
  enterRule(_localctx, 10, UIGrammarParser::RuleLabelComponent);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(56);
    match(UIGrammarParser::LABEL);
    setState(57);
    match(UIGrammarParser::LBRACE);
    setState(58);
    props();
    setState(59);
    match(UIGrammarParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TextfieldComponentContext ------------------------------------------------------------------

UIGrammarParser::TextfieldComponentContext::TextfieldComponentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* UIGrammarParser::TextfieldComponentContext::TEXTFIELD() {
  return getToken(UIGrammarParser::TEXTFIELD, 0);
}

tree::TerminalNode* UIGrammarParser::TextfieldComponentContext::LBRACE() {
  return getToken(UIGrammarParser::LBRACE, 0);
}

UIGrammarParser::PropsContext* UIGrammarParser::TextfieldComponentContext::props() {
  return getRuleContext<UIGrammarParser::PropsContext>(0);
}

tree::TerminalNode* UIGrammarParser::TextfieldComponentContext::RBRACE() {
  return getToken(UIGrammarParser::RBRACE, 0);
}


size_t UIGrammarParser::TextfieldComponentContext::getRuleIndex() const {
  return UIGrammarParser::RuleTextfieldComponent;
}


std::any UIGrammarParser::TextfieldComponentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<UIGrammarVisitor*>(visitor))
    return parserVisitor->visitTextfieldComponent(this);
  else
    return visitor->visitChildren(this);
}

UIGrammarParser::TextfieldComponentContext* UIGrammarParser::textfieldComponent() {
  TextfieldComponentContext *_localctx = _tracker.createInstance<TextfieldComponentContext>(_ctx, getState());
  enterRule(_localctx, 12, UIGrammarParser::RuleTextfieldComponent);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(61);
    match(UIGrammarParser::TEXTFIELD);
    setState(62);
    match(UIGrammarParser::LBRACE);
    setState(63);
    props();
    setState(64);
    match(UIGrammarParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ImageComponentContext ------------------------------------------------------------------

UIGrammarParser::ImageComponentContext::ImageComponentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* UIGrammarParser::ImageComponentContext::IMAGE() {
  return getToken(UIGrammarParser::IMAGE, 0);
}

tree::TerminalNode* UIGrammarParser::ImageComponentContext::LBRACE() {
  return getToken(UIGrammarParser::LBRACE, 0);
}

UIGrammarParser::PropsContext* UIGrammarParser::ImageComponentContext::props() {
  return getRuleContext<UIGrammarParser::PropsContext>(0);
}

tree::TerminalNode* UIGrammarParser::ImageComponentContext::RBRACE() {
  return getToken(UIGrammarParser::RBRACE, 0);
}


size_t UIGrammarParser::ImageComponentContext::getRuleIndex() const {
  return UIGrammarParser::RuleImageComponent;
}


std::any UIGrammarParser::ImageComponentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<UIGrammarVisitor*>(visitor))
    return parserVisitor->visitImageComponent(this);
  else
    return visitor->visitChildren(this);
}

UIGrammarParser::ImageComponentContext* UIGrammarParser::imageComponent() {
  ImageComponentContext *_localctx = _tracker.createInstance<ImageComponentContext>(_ctx, getState());
  enterRule(_localctx, 14, UIGrammarParser::RuleImageComponent);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(66);
    match(UIGrammarParser::IMAGE);
    setState(67);
    match(UIGrammarParser::LBRACE);
    setState(68);
    props();
    setState(69);
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
  enterRule(_localctx, 16, UIGrammarParser::RuleProps);
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
    setState(71);
    prop();
    setState(76);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == UIGrammarParser::COMMA) {
      setState(72);
      match(UIGrammarParser::COMMA);
      setState(73);
      prop();
      setState(78);
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

tree::TerminalNode* UIGrammarParser::PropContext::ID() {
  return getToken(UIGrammarParser::ID, 0);
}

tree::TerminalNode* UIGrammarParser::PropContext::COLON() {
  return getToken(UIGrammarParser::COLON, 0);
}

UIGrammarParser::ValueContext* UIGrammarParser::PropContext::value() {
  return getRuleContext<UIGrammarParser::ValueContext>(0);
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
  enterRule(_localctx, 18, UIGrammarParser::RuleProp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(79);
    match(UIGrammarParser::ID);
    setState(80);
    match(UIGrammarParser::COLON);
    setState(81);
    value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ValueContext ------------------------------------------------------------------

UIGrammarParser::ValueContext::ValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* UIGrammarParser::ValueContext::STRING() {
  return getToken(UIGrammarParser::STRING, 0);
}

tree::TerminalNode* UIGrammarParser::ValueContext::NUMBER() {
  return getToken(UIGrammarParser::NUMBER, 0);
}

tree::TerminalNode* UIGrammarParser::ValueContext::BOOL() {
  return getToken(UIGrammarParser::BOOL, 0);
}


size_t UIGrammarParser::ValueContext::getRuleIndex() const {
  return UIGrammarParser::RuleValue;
}


std::any UIGrammarParser::ValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<UIGrammarVisitor*>(visitor))
    return parserVisitor->visitValue(this);
  else
    return visitor->visitChildren(this);
}

UIGrammarParser::ValueContext* UIGrammarParser::value() {
  ValueContext *_localctx = _tracker.createInstance<ValueContext>(_ctx, getState());
  enterRule(_localctx, 20, UIGrammarParser::RuleValue);
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
    setState(83);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 12416) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
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
