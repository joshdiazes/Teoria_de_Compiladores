
// Generated from UIGrammar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  UIGrammarLexer : public antlr4::Lexer {
public:
  enum {
    BUTTON = 1, MENU = 2, PANEL = 3, LABEL = 4, TEXTFIELD = 5, IMAGE = 6, 
    BOOL = 7, COLON = 8, COMMA = 9, LBRACE = 10, RBRACE = 11, STRING = 12, 
    NUMBER = 13, ID = 14, WS = 15
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

