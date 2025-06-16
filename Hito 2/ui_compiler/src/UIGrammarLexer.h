
// Generated from UIGrammar.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  UIGrammarLexer : public antlr4::Lexer {
public:
  enum {
    BUTTON = 1, MENU = 2, PANEL = 3, TEXT = 4, ONCLICK = 5, COLON = 6, LBRACE = 7, 
    RBRACE = 8, COMMA = 9, STRING = 10, ID = 11, WS = 12
  };

  explicit UIGrammarLexer(antlr4::CharStream *input);

  ~UIGrammarLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

