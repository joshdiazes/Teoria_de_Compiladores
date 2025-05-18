# Generated from UIGrammar.g4 by ANTLR 4.13.2
from antlr4 import *
if "." in __name__:
    from .UIGrammarParser import UIGrammarParser
else:
    from UIGrammarParser import UIGrammarParser

# This class defines a complete listener for a parse tree produced by UIGrammarParser.
class UIGrammarListener(ParseTreeListener):

    # Enter a parse tree produced by UIGrammarParser#ui.
    def enterUi(self, ctx:UIGrammarParser.UiContext):
        pass

    # Exit a parse tree produced by UIGrammarParser#ui.
    def exitUi(self, ctx:UIGrammarParser.UiContext):
        pass


    # Enter a parse tree produced by UIGrammarParser#component.
    def enterComponent(self, ctx:UIGrammarParser.ComponentContext):
        pass

    # Exit a parse tree produced by UIGrammarParser#component.
    def exitComponent(self, ctx:UIGrammarParser.ComponentContext):
        pass


    # Enter a parse tree produced by UIGrammarParser#button.
    def enterButton(self, ctx:UIGrammarParser.ButtonContext):
        pass

    # Exit a parse tree produced by UIGrammarParser#button.
    def exitButton(self, ctx:UIGrammarParser.ButtonContext):
        pass


    # Enter a parse tree produced by UIGrammarParser#menu.
    def enterMenu(self, ctx:UIGrammarParser.MenuContext):
        pass

    # Exit a parse tree produced by UIGrammarParser#menu.
    def exitMenu(self, ctx:UIGrammarParser.MenuContext):
        pass


    # Enter a parse tree produced by UIGrammarParser#panel.
    def enterPanel(self, ctx:UIGrammarParser.PanelContext):
        pass

    # Exit a parse tree produced by UIGrammarParser#panel.
    def exitPanel(self, ctx:UIGrammarParser.PanelContext):
        pass


    # Enter a parse tree produced by UIGrammarParser#props.
    def enterProps(self, ctx:UIGrammarParser.PropsContext):
        pass

    # Exit a parse tree produced by UIGrammarParser#props.
    def exitProps(self, ctx:UIGrammarParser.PropsContext):
        pass


    # Enter a parse tree produced by UIGrammarParser#prop.
    def enterProp(self, ctx:UIGrammarParser.PropContext):
        pass

    # Exit a parse tree produced by UIGrammarParser#prop.
    def exitProp(self, ctx:UIGrammarParser.PropContext):
        pass



del UIGrammarParser