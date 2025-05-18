// Generated from UIGrammar.g4 by ANTLR 4.13.2
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast", "CheckReturnValue", "this-escape"})
public class UIGrammarParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.13.2", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		BUTTON=1, MENU=2, PANEL=3, TEXT=4, ONCLICK=5, COLON=6, LBRACE=7, RBRACE=8, 
		COMMA=9, STRING=10, ID=11, WS=12;
	public static final int
		RULE_ui = 0, RULE_component = 1, RULE_button = 2, RULE_menu = 3, RULE_panel = 4, 
		RULE_props = 5, RULE_prop = 6;
	private static String[] makeRuleNames() {
		return new String[] {
			"ui", "component", "button", "menu", "panel", "props", "prop"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'Button'", "'Menu'", "'Panel'", "'text'", "'onClick'", "':'", 
			"'{'", "'}'", "','"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "BUTTON", "MENU", "PANEL", "TEXT", "ONCLICK", "COLON", "LBRACE", 
			"RBRACE", "COMMA", "STRING", "ID", "WS"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "UIGrammar.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public UIGrammarParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@SuppressWarnings("CheckReturnValue")
	public static class UiContext extends ParserRuleContext {
		public List<ComponentContext> component() {
			return getRuleContexts(ComponentContext.class);
		}
		public ComponentContext component(int i) {
			return getRuleContext(ComponentContext.class,i);
		}
		public UiContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ui; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof UIGrammarListener ) ((UIGrammarListener)listener).enterUi(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof UIGrammarListener ) ((UIGrammarListener)listener).exitUi(this);
		}
	}

	public final UiContext ui() throws RecognitionException {
		UiContext _localctx = new UiContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_ui);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(15); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(14);
				component();
				}
				}
				setState(17); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & 14L) != 0) );
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ComponentContext extends ParserRuleContext {
		public ButtonContext button() {
			return getRuleContext(ButtonContext.class,0);
		}
		public MenuContext menu() {
			return getRuleContext(MenuContext.class,0);
		}
		public PanelContext panel() {
			return getRuleContext(PanelContext.class,0);
		}
		public ComponentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_component; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof UIGrammarListener ) ((UIGrammarListener)listener).enterComponent(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof UIGrammarListener ) ((UIGrammarListener)listener).exitComponent(this);
		}
	}

	public final ComponentContext component() throws RecognitionException {
		ComponentContext _localctx = new ComponentContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_component);
		try {
			setState(22);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case BUTTON:
				enterOuterAlt(_localctx, 1);
				{
				setState(19);
				button();
				}
				break;
			case MENU:
				enterOuterAlt(_localctx, 2);
				{
				setState(20);
				menu();
				}
				break;
			case PANEL:
				enterOuterAlt(_localctx, 3);
				{
				setState(21);
				panel();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ButtonContext extends ParserRuleContext {
		public TerminalNode BUTTON() { return getToken(UIGrammarParser.BUTTON, 0); }
		public TerminalNode LBRACE() { return getToken(UIGrammarParser.LBRACE, 0); }
		public PropsContext props() {
			return getRuleContext(PropsContext.class,0);
		}
		public TerminalNode RBRACE() { return getToken(UIGrammarParser.RBRACE, 0); }
		public ButtonContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_button; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof UIGrammarListener ) ((UIGrammarListener)listener).enterButton(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof UIGrammarListener ) ((UIGrammarListener)listener).exitButton(this);
		}
	}

	public final ButtonContext button() throws RecognitionException {
		ButtonContext _localctx = new ButtonContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_button);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(24);
			match(BUTTON);
			setState(25);
			match(LBRACE);
			setState(26);
			props();
			setState(27);
			match(RBRACE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class MenuContext extends ParserRuleContext {
		public TerminalNode MENU() { return getToken(UIGrammarParser.MENU, 0); }
		public TerminalNode LBRACE() { return getToken(UIGrammarParser.LBRACE, 0); }
		public PropsContext props() {
			return getRuleContext(PropsContext.class,0);
		}
		public TerminalNode RBRACE() { return getToken(UIGrammarParser.RBRACE, 0); }
		public MenuContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_menu; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof UIGrammarListener ) ((UIGrammarListener)listener).enterMenu(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof UIGrammarListener ) ((UIGrammarListener)listener).exitMenu(this);
		}
	}

	public final MenuContext menu() throws RecognitionException {
		MenuContext _localctx = new MenuContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_menu);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(29);
			match(MENU);
			setState(30);
			match(LBRACE);
			setState(31);
			props();
			setState(32);
			match(RBRACE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class PanelContext extends ParserRuleContext {
		public TerminalNode PANEL() { return getToken(UIGrammarParser.PANEL, 0); }
		public TerminalNode LBRACE() { return getToken(UIGrammarParser.LBRACE, 0); }
		public PropsContext props() {
			return getRuleContext(PropsContext.class,0);
		}
		public TerminalNode RBRACE() { return getToken(UIGrammarParser.RBRACE, 0); }
		public PanelContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_panel; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof UIGrammarListener ) ((UIGrammarListener)listener).enterPanel(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof UIGrammarListener ) ((UIGrammarListener)listener).exitPanel(this);
		}
	}

	public final PanelContext panel() throws RecognitionException {
		PanelContext _localctx = new PanelContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_panel);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(34);
			match(PANEL);
			setState(35);
			match(LBRACE);
			setState(36);
			props();
			setState(37);
			match(RBRACE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class PropsContext extends ParserRuleContext {
		public List<PropContext> prop() {
			return getRuleContexts(PropContext.class);
		}
		public PropContext prop(int i) {
			return getRuleContext(PropContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(UIGrammarParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(UIGrammarParser.COMMA, i);
		}
		public PropsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_props; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof UIGrammarListener ) ((UIGrammarListener)listener).enterProps(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof UIGrammarListener ) ((UIGrammarListener)listener).exitProps(this);
		}
	}

	public final PropsContext props() throws RecognitionException {
		PropsContext _localctx = new PropsContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_props);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(39);
			prop();
			setState(44);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(40);
				match(COMMA);
				setState(41);
				prop();
				}
				}
				setState(46);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class PropContext extends ParserRuleContext {
		public TerminalNode TEXT() { return getToken(UIGrammarParser.TEXT, 0); }
		public TerminalNode COLON() { return getToken(UIGrammarParser.COLON, 0); }
		public TerminalNode STRING() { return getToken(UIGrammarParser.STRING, 0); }
		public TerminalNode ONCLICK() { return getToken(UIGrammarParser.ONCLICK, 0); }
		public PropContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_prop; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof UIGrammarListener ) ((UIGrammarListener)listener).enterProp(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof UIGrammarListener ) ((UIGrammarListener)listener).exitProp(this);
		}
	}

	public final PropContext prop() throws RecognitionException {
		PropContext _localctx = new PropContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_prop);
		try {
			setState(53);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case TEXT:
				enterOuterAlt(_localctx, 1);
				{
				setState(47);
				match(TEXT);
				setState(48);
				match(COLON);
				setState(49);
				match(STRING);
				}
				break;
			case ONCLICK:
				enterOuterAlt(_localctx, 2);
				{
				setState(50);
				match(ONCLICK);
				setState(51);
				match(COLON);
				setState(52);
				match(STRING);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static final String _serializedATN =
		"\u0004\u0001\f8\u0002\u0000\u0007\u0000\u0002\u0001\u0007\u0001\u0002"+
		"\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004\u0007\u0004\u0002"+
		"\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0001\u0000\u0004\u0000\u0010"+
		"\b\u0000\u000b\u0000\f\u0000\u0011\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0003\u0001\u0017\b\u0001\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002"+
		"\u0001\u0002\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003"+
		"\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0005"+
		"\u0001\u0005\u0001\u0005\u0005\u0005+\b\u0005\n\u0005\f\u0005.\t\u0005"+
		"\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006"+
		"\u0003\u00066\b\u0006\u0001\u0006\u0000\u0000\u0007\u0000\u0002\u0004"+
		"\u0006\b\n\f\u0000\u00005\u0000\u000f\u0001\u0000\u0000\u0000\u0002\u0016"+
		"\u0001\u0000\u0000\u0000\u0004\u0018\u0001\u0000\u0000\u0000\u0006\u001d"+
		"\u0001\u0000\u0000\u0000\b\"\u0001\u0000\u0000\u0000\n\'\u0001\u0000\u0000"+
		"\u0000\f5\u0001\u0000\u0000\u0000\u000e\u0010\u0003\u0002\u0001\u0000"+
		"\u000f\u000e\u0001\u0000\u0000\u0000\u0010\u0011\u0001\u0000\u0000\u0000"+
		"\u0011\u000f\u0001\u0000\u0000\u0000\u0011\u0012\u0001\u0000\u0000\u0000"+
		"\u0012\u0001\u0001\u0000\u0000\u0000\u0013\u0017\u0003\u0004\u0002\u0000"+
		"\u0014\u0017\u0003\u0006\u0003\u0000\u0015\u0017\u0003\b\u0004\u0000\u0016"+
		"\u0013\u0001\u0000\u0000\u0000\u0016\u0014\u0001\u0000\u0000\u0000\u0016"+
		"\u0015\u0001\u0000\u0000\u0000\u0017\u0003\u0001\u0000\u0000\u0000\u0018"+
		"\u0019\u0005\u0001\u0000\u0000\u0019\u001a\u0005\u0007\u0000\u0000\u001a"+
		"\u001b\u0003\n\u0005\u0000\u001b\u001c\u0005\b\u0000\u0000\u001c\u0005"+
		"\u0001\u0000\u0000\u0000\u001d\u001e\u0005\u0002\u0000\u0000\u001e\u001f"+
		"\u0005\u0007\u0000\u0000\u001f \u0003\n\u0005\u0000 !\u0005\b\u0000\u0000"+
		"!\u0007\u0001\u0000\u0000\u0000\"#\u0005\u0003\u0000\u0000#$\u0005\u0007"+
		"\u0000\u0000$%\u0003\n\u0005\u0000%&\u0005\b\u0000\u0000&\t\u0001\u0000"+
		"\u0000\u0000\',\u0003\f\u0006\u0000()\u0005\t\u0000\u0000)+\u0003\f\u0006"+
		"\u0000*(\u0001\u0000\u0000\u0000+.\u0001\u0000\u0000\u0000,*\u0001\u0000"+
		"\u0000\u0000,-\u0001\u0000\u0000\u0000-\u000b\u0001\u0000\u0000\u0000"+
		".,\u0001\u0000\u0000\u0000/0\u0005\u0004\u0000\u000001\u0005\u0006\u0000"+
		"\u000016\u0005\n\u0000\u000023\u0005\u0005\u0000\u000034\u0005\u0006\u0000"+
		"\u000046\u0005\n\u0000\u00005/\u0001\u0000\u0000\u000052\u0001\u0000\u0000"+
		"\u00006\r\u0001\u0000\u0000\u0000\u0004\u0011\u0016,5";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}