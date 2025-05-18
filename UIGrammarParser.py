# Generated from UIGrammar.g4 by ANTLR 4.13.2
# encoding: utf-8
from antlr4 import *
from io import StringIO
import sys
if sys.version_info[1] > 5:
	from typing import TextIO
else:
	from typing.io import TextIO

def serializedATN():
    return [
        4,1,12,56,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
        6,1,0,4,0,16,8,0,11,0,12,0,17,1,1,1,1,1,1,3,1,23,8,1,1,2,1,2,1,2,
        1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,5,1,5,1,5,5,5,
        43,8,5,10,5,12,5,46,9,5,1,6,1,6,1,6,1,6,1,6,1,6,3,6,54,8,6,1,6,0,
        0,7,0,2,4,6,8,10,12,0,0,53,0,15,1,0,0,0,2,22,1,0,0,0,4,24,1,0,0,
        0,6,29,1,0,0,0,8,34,1,0,0,0,10,39,1,0,0,0,12,53,1,0,0,0,14,16,3,
        2,1,0,15,14,1,0,0,0,16,17,1,0,0,0,17,15,1,0,0,0,17,18,1,0,0,0,18,
        1,1,0,0,0,19,23,3,4,2,0,20,23,3,6,3,0,21,23,3,8,4,0,22,19,1,0,0,
        0,22,20,1,0,0,0,22,21,1,0,0,0,23,3,1,0,0,0,24,25,5,1,0,0,25,26,5,
        7,0,0,26,27,3,10,5,0,27,28,5,8,0,0,28,5,1,0,0,0,29,30,5,2,0,0,30,
        31,5,7,0,0,31,32,3,10,5,0,32,33,5,8,0,0,33,7,1,0,0,0,34,35,5,3,0,
        0,35,36,5,7,0,0,36,37,3,10,5,0,37,38,5,8,0,0,38,9,1,0,0,0,39,44,
        3,12,6,0,40,41,5,9,0,0,41,43,3,12,6,0,42,40,1,0,0,0,43,46,1,0,0,
        0,44,42,1,0,0,0,44,45,1,0,0,0,45,11,1,0,0,0,46,44,1,0,0,0,47,48,
        5,4,0,0,48,49,5,6,0,0,49,54,5,10,0,0,50,51,5,5,0,0,51,52,5,6,0,0,
        52,54,5,10,0,0,53,47,1,0,0,0,53,50,1,0,0,0,54,13,1,0,0,0,4,17,22,
        44,53
    ]

class UIGrammarParser ( Parser ):

    grammarFileName = "UIGrammar.g4"

    atn = ATNDeserializer().deserialize(serializedATN())

    decisionsToDFA = [ DFA(ds, i) for i, ds in enumerate(atn.decisionToState) ]

    sharedContextCache = PredictionContextCache()

    literalNames = [ "<INVALID>", "'Button'", "'Menu'", "'Panel'", "'text'", 
                     "'onClick'", "':'", "'{'", "'}'", "','" ]

    symbolicNames = [ "<INVALID>", "BUTTON", "MENU", "PANEL", "TEXT", "ONCLICK", 
                      "COLON", "LBRACE", "RBRACE", "COMMA", "STRING", "ID", 
                      "WS" ]

    RULE_ui = 0
    RULE_component = 1
    RULE_button = 2
    RULE_menu = 3
    RULE_panel = 4
    RULE_props = 5
    RULE_prop = 6

    ruleNames =  [ "ui", "component", "button", "menu", "panel", "props", 
                   "prop" ]

    EOF = Token.EOF
    BUTTON=1
    MENU=2
    PANEL=3
    TEXT=4
    ONCLICK=5
    COLON=6
    LBRACE=7
    RBRACE=8
    COMMA=9
    STRING=10
    ID=11
    WS=12

    def __init__(self, input:TokenStream, output:TextIO = sys.stdout):
        super().__init__(input, output)
        self.checkVersion("4.13.2")
        self._interp = ParserATNSimulator(self, self.atn, self.decisionsToDFA, self.sharedContextCache)
        self._predicates = None




    class UiContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def component(self, i:int=None):
            if i is None:
                return self.getTypedRuleContexts(UIGrammarParser.ComponentContext)
            else:
                return self.getTypedRuleContext(UIGrammarParser.ComponentContext,i)


        def getRuleIndex(self):
            return UIGrammarParser.RULE_ui

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterUi" ):
                listener.enterUi(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitUi" ):
                listener.exitUi(self)




    def ui(self):

        localctx = UIGrammarParser.UiContext(self, self._ctx, self.state)
        self.enterRule(localctx, 0, self.RULE_ui)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 15 
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while True:
                self.state = 14
                self.component()
                self.state = 17 
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                if not ((((_la) & ~0x3f) == 0 and ((1 << _la) & 14) != 0)):
                    break

        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class ComponentContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def button(self):
            return self.getTypedRuleContext(UIGrammarParser.ButtonContext,0)


        def menu(self):
            return self.getTypedRuleContext(UIGrammarParser.MenuContext,0)


        def panel(self):
            return self.getTypedRuleContext(UIGrammarParser.PanelContext,0)


        def getRuleIndex(self):
            return UIGrammarParser.RULE_component

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterComponent" ):
                listener.enterComponent(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitComponent" ):
                listener.exitComponent(self)




    def component(self):

        localctx = UIGrammarParser.ComponentContext(self, self._ctx, self.state)
        self.enterRule(localctx, 2, self.RULE_component)
        try:
            self.state = 22
            self._errHandler.sync(self)
            token = self._input.LA(1)
            if token in [1]:
                self.enterOuterAlt(localctx, 1)
                self.state = 19
                self.button()
                pass
            elif token in [2]:
                self.enterOuterAlt(localctx, 2)
                self.state = 20
                self.menu()
                pass
            elif token in [3]:
                self.enterOuterAlt(localctx, 3)
                self.state = 21
                self.panel()
                pass
            else:
                raise NoViableAltException(self)

        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class ButtonContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def BUTTON(self):
            return self.getToken(UIGrammarParser.BUTTON, 0)

        def LBRACE(self):
            return self.getToken(UIGrammarParser.LBRACE, 0)

        def props(self):
            return self.getTypedRuleContext(UIGrammarParser.PropsContext,0)


        def RBRACE(self):
            return self.getToken(UIGrammarParser.RBRACE, 0)

        def getRuleIndex(self):
            return UIGrammarParser.RULE_button

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterButton" ):
                listener.enterButton(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitButton" ):
                listener.exitButton(self)




    def button(self):

        localctx = UIGrammarParser.ButtonContext(self, self._ctx, self.state)
        self.enterRule(localctx, 4, self.RULE_button)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 24
            self.match(UIGrammarParser.BUTTON)
            self.state = 25
            self.match(UIGrammarParser.LBRACE)
            self.state = 26
            self.props()
            self.state = 27
            self.match(UIGrammarParser.RBRACE)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class MenuContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def MENU(self):
            return self.getToken(UIGrammarParser.MENU, 0)

        def LBRACE(self):
            return self.getToken(UIGrammarParser.LBRACE, 0)

        def props(self):
            return self.getTypedRuleContext(UIGrammarParser.PropsContext,0)


        def RBRACE(self):
            return self.getToken(UIGrammarParser.RBRACE, 0)

        def getRuleIndex(self):
            return UIGrammarParser.RULE_menu

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterMenu" ):
                listener.enterMenu(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitMenu" ):
                listener.exitMenu(self)




    def menu(self):

        localctx = UIGrammarParser.MenuContext(self, self._ctx, self.state)
        self.enterRule(localctx, 6, self.RULE_menu)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 29
            self.match(UIGrammarParser.MENU)
            self.state = 30
            self.match(UIGrammarParser.LBRACE)
            self.state = 31
            self.props()
            self.state = 32
            self.match(UIGrammarParser.RBRACE)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class PanelContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def PANEL(self):
            return self.getToken(UIGrammarParser.PANEL, 0)

        def LBRACE(self):
            return self.getToken(UIGrammarParser.LBRACE, 0)

        def props(self):
            return self.getTypedRuleContext(UIGrammarParser.PropsContext,0)


        def RBRACE(self):
            return self.getToken(UIGrammarParser.RBRACE, 0)

        def getRuleIndex(self):
            return UIGrammarParser.RULE_panel

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterPanel" ):
                listener.enterPanel(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitPanel" ):
                listener.exitPanel(self)




    def panel(self):

        localctx = UIGrammarParser.PanelContext(self, self._ctx, self.state)
        self.enterRule(localctx, 8, self.RULE_panel)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 34
            self.match(UIGrammarParser.PANEL)
            self.state = 35
            self.match(UIGrammarParser.LBRACE)
            self.state = 36
            self.props()
            self.state = 37
            self.match(UIGrammarParser.RBRACE)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class PropsContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def prop(self, i:int=None):
            if i is None:
                return self.getTypedRuleContexts(UIGrammarParser.PropContext)
            else:
                return self.getTypedRuleContext(UIGrammarParser.PropContext,i)


        def COMMA(self, i:int=None):
            if i is None:
                return self.getTokens(UIGrammarParser.COMMA)
            else:
                return self.getToken(UIGrammarParser.COMMA, i)

        def getRuleIndex(self):
            return UIGrammarParser.RULE_props

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterProps" ):
                listener.enterProps(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitProps" ):
                listener.exitProps(self)




    def props(self):

        localctx = UIGrammarParser.PropsContext(self, self._ctx, self.state)
        self.enterRule(localctx, 10, self.RULE_props)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 39
            self.prop()
            self.state = 44
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while _la==9:
                self.state = 40
                self.match(UIGrammarParser.COMMA)
                self.state = 41
                self.prop()
                self.state = 46
                self._errHandler.sync(self)
                _la = self._input.LA(1)

        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class PropContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def TEXT(self):
            return self.getToken(UIGrammarParser.TEXT, 0)

        def COLON(self):
            return self.getToken(UIGrammarParser.COLON, 0)

        def STRING(self):
            return self.getToken(UIGrammarParser.STRING, 0)

        def ONCLICK(self):
            return self.getToken(UIGrammarParser.ONCLICK, 0)

        def getRuleIndex(self):
            return UIGrammarParser.RULE_prop

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterProp" ):
                listener.enterProp(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitProp" ):
                listener.exitProp(self)




    def prop(self):

        localctx = UIGrammarParser.PropContext(self, self._ctx, self.state)
        self.enterRule(localctx, 12, self.RULE_prop)
        try:
            self.state = 53
            self._errHandler.sync(self)
            token = self._input.LA(1)
            if token in [4]:
                self.enterOuterAlt(localctx, 1)
                self.state = 47
                self.match(UIGrammarParser.TEXT)
                self.state = 48
                self.match(UIGrammarParser.COLON)
                self.state = 49
                self.match(UIGrammarParser.STRING)
                pass
            elif token in [5]:
                self.enterOuterAlt(localctx, 2)
                self.state = 50
                self.match(UIGrammarParser.ONCLICK)
                self.state = 51
                self.match(UIGrammarParser.COLON)
                self.state = 52
                self.match(UIGrammarParser.STRING)
                pass
            else:
                raise NoViableAltException(self)

        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx





