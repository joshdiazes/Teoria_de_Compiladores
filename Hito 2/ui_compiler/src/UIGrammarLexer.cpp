
// Generated from UIGrammar.g4 by ANTLR 4.13.1


#include "UIGrammarLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct UIGrammarLexerStaticData final {
  UIGrammarLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  UIGrammarLexerStaticData(const UIGrammarLexerStaticData&) = delete;
  UIGrammarLexerStaticData(UIGrammarLexerStaticData&&) = delete;
  UIGrammarLexerStaticData& operator=(const UIGrammarLexerStaticData&) = delete;
  UIGrammarLexerStaticData& operator=(UIGrammarLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag uigrammarlexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
UIGrammarLexerStaticData *uigrammarlexerLexerStaticData = nullptr;

void uigrammarlexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (uigrammarlexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(uigrammarlexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<UIGrammarLexerStaticData>(
    std::vector<std::string>{
      "BUTTON", "MENU", "PANEL", "TEXT", "ONCLICK", "COLON", "LBRACE", "RBRACE", 
      "COMMA", "STRING", "ID", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,12,87,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,1,0,1,0,1,0,1,0,1,0,1,0,
  	1,0,1,1,1,1,1,1,1,1,1,1,1,2,1,2,1,2,1,2,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,
  	4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,5,1,5,1,6,1,6,1,7,1,7,1,8,1,8,1,9,1,9,
  	5,9,67,8,9,10,9,12,9,70,9,9,1,9,1,9,1,10,1,10,5,10,76,8,10,10,10,12,10,
  	79,9,10,1,11,4,11,82,8,11,11,11,12,11,83,1,11,1,11,0,0,12,1,1,3,2,5,3,
  	7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,1,0,4,1,0,34,34,3,0,65,
  	90,95,95,97,122,4,0,48,57,65,90,95,95,97,122,3,0,9,10,13,13,32,32,89,
  	0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,
  	0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,
  	0,23,1,0,0,0,1,25,1,0,0,0,3,32,1,0,0,0,5,37,1,0,0,0,7,43,1,0,0,0,9,48,
  	1,0,0,0,11,56,1,0,0,0,13,58,1,0,0,0,15,60,1,0,0,0,17,62,1,0,0,0,19,64,
  	1,0,0,0,21,73,1,0,0,0,23,81,1,0,0,0,25,26,5,66,0,0,26,27,5,117,0,0,27,
  	28,5,116,0,0,28,29,5,116,0,0,29,30,5,111,0,0,30,31,5,110,0,0,31,2,1,0,
  	0,0,32,33,5,77,0,0,33,34,5,101,0,0,34,35,5,110,0,0,35,36,5,117,0,0,36,
  	4,1,0,0,0,37,38,5,80,0,0,38,39,5,97,0,0,39,40,5,110,0,0,40,41,5,101,0,
  	0,41,42,5,108,0,0,42,6,1,0,0,0,43,44,5,116,0,0,44,45,5,101,0,0,45,46,
  	5,120,0,0,46,47,5,116,0,0,47,8,1,0,0,0,48,49,5,111,0,0,49,50,5,110,0,
  	0,50,51,5,67,0,0,51,52,5,108,0,0,52,53,5,105,0,0,53,54,5,99,0,0,54,55,
  	5,107,0,0,55,10,1,0,0,0,56,57,5,58,0,0,57,12,1,0,0,0,58,59,5,123,0,0,
  	59,14,1,0,0,0,60,61,5,125,0,0,61,16,1,0,0,0,62,63,5,44,0,0,63,18,1,0,
  	0,0,64,68,5,34,0,0,65,67,8,0,0,0,66,65,1,0,0,0,67,70,1,0,0,0,68,66,1,
  	0,0,0,68,69,1,0,0,0,69,71,1,0,0,0,70,68,1,0,0,0,71,72,5,34,0,0,72,20,
  	1,0,0,0,73,77,7,1,0,0,74,76,7,2,0,0,75,74,1,0,0,0,76,79,1,0,0,0,77,75,
  	1,0,0,0,77,78,1,0,0,0,78,22,1,0,0,0,79,77,1,0,0,0,80,82,7,3,0,0,81,80,
  	1,0,0,0,82,83,1,0,0,0,83,81,1,0,0,0,83,84,1,0,0,0,84,85,1,0,0,0,85,86,
  	6,11,0,0,86,24,1,0,0,0,4,0,68,77,83,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  uigrammarlexerLexerStaticData = staticData.release();
}

}

UIGrammarLexer::UIGrammarLexer(CharStream *input) : Lexer(input) {
  UIGrammarLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *uigrammarlexerLexerStaticData->atn, uigrammarlexerLexerStaticData->decisionToDFA, uigrammarlexerLexerStaticData->sharedContextCache);
}

UIGrammarLexer::~UIGrammarLexer() {
  delete _interpreter;
}

std::string UIGrammarLexer::getGrammarFileName() const {
  return "UIGrammar.g4";
}

const std::vector<std::string>& UIGrammarLexer::getRuleNames() const {
  return uigrammarlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& UIGrammarLexer::getChannelNames() const {
  return uigrammarlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& UIGrammarLexer::getModeNames() const {
  return uigrammarlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& UIGrammarLexer::getVocabulary() const {
  return uigrammarlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView UIGrammarLexer::getSerializedATN() const {
  return uigrammarlexerLexerStaticData->serializedATN;
}

const atn::ATN& UIGrammarLexer::getATN() const {
  return *uigrammarlexerLexerStaticData->atn;
}




void UIGrammarLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  uigrammarlexerLexerInitialize();
#else
  ::antlr4::internal::call_once(uigrammarlexerLexerOnceFlag, uigrammarlexerLexerInitialize);
#endif
}
