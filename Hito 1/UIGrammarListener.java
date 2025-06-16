// Generated from UIGrammar.g4 by ANTLR 4.13.2
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link UIGrammarParser}.
 */
public interface UIGrammarListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link UIGrammarParser#ui}.
	 * @param ctx the parse tree
	 */
	void enterUi(UIGrammarParser.UiContext ctx);
	/**
	 * Exit a parse tree produced by {@link UIGrammarParser#ui}.
	 * @param ctx the parse tree
	 */
	void exitUi(UIGrammarParser.UiContext ctx);
	/**
	 * Enter a parse tree produced by {@link UIGrammarParser#component}.
	 * @param ctx the parse tree
	 */
	void enterComponent(UIGrammarParser.ComponentContext ctx);
	/**
	 * Exit a parse tree produced by {@link UIGrammarParser#component}.
	 * @param ctx the parse tree
	 */
	void exitComponent(UIGrammarParser.ComponentContext ctx);
	/**
	 * Enter a parse tree produced by {@link UIGrammarParser#button}.
	 * @param ctx the parse tree
	 */
	void enterButton(UIGrammarParser.ButtonContext ctx);
	/**
	 * Exit a parse tree produced by {@link UIGrammarParser#button}.
	 * @param ctx the parse tree
	 */
	void exitButton(UIGrammarParser.ButtonContext ctx);
	/**
	 * Enter a parse tree produced by {@link UIGrammarParser#menu}.
	 * @param ctx the parse tree
	 */
	void enterMenu(UIGrammarParser.MenuContext ctx);
	/**
	 * Exit a parse tree produced by {@link UIGrammarParser#menu}.
	 * @param ctx the parse tree
	 */
	void exitMenu(UIGrammarParser.MenuContext ctx);
	/**
	 * Enter a parse tree produced by {@link UIGrammarParser#panel}.
	 * @param ctx the parse tree
	 */
	void enterPanel(UIGrammarParser.PanelContext ctx);
	/**
	 * Exit a parse tree produced by {@link UIGrammarParser#panel}.
	 * @param ctx the parse tree
	 */
	void exitPanel(UIGrammarParser.PanelContext ctx);
	/**
	 * Enter a parse tree produced by {@link UIGrammarParser#props}.
	 * @param ctx the parse tree
	 */
	void enterProps(UIGrammarParser.PropsContext ctx);
	/**
	 * Exit a parse tree produced by {@link UIGrammarParser#props}.
	 * @param ctx the parse tree
	 */
	void exitProps(UIGrammarParser.PropsContext ctx);
	/**
	 * Enter a parse tree produced by {@link UIGrammarParser#prop}.
	 * @param ctx the parse tree
	 */
	void enterProp(UIGrammarParser.PropContext ctx);
	/**
	 * Exit a parse tree produced by {@link UIGrammarParser#prop}.
	 * @param ctx the parse tree
	 */
	void exitProp(UIGrammarParser.PropContext ctx);
}