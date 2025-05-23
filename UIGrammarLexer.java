// Generated from UIGrammar.g4 by ANTLR 4.13.2
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast", "CheckReturnValue", "this-escape"})
public class UIGrammarLexer extends Lexer {
	static { RuntimeMetaData.checkVersion("4.13.2", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		BUTTON=1, MENU=2, PANEL=3, TEXT=4, ONCLICK=5, COLON=6, LBRACE=7, RBRACE=8, 
		COMMA=9, STRING=10, ID=11, WS=12;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"BUTTON", "MENU", "PANEL", "TEXT", "ONCLICK", "COLON", "LBRACE", "RBRACE", 
			"COMMA", "STRING", "ID", "WS"
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


	public UIGrammarLexer(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "UIGrammar.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public String[] getChannelNames() { return channelNames; }

	@Override
	public String[] getModeNames() { return modeNames; }

	@Override
	public ATN getATN() { return _ATN; }

	public static final String _serializedATN =
		"\u0004\u0000\fW\u0006\uffff\uffff\u0002\u0000\u0007\u0000\u0002\u0001"+
		"\u0007\u0001\u0002\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004"+
		"\u0007\u0004\u0002\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002\u0007"+
		"\u0007\u0007\u0002\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002\u000b"+
		"\u0007\u000b\u0001\u0000\u0001\u0000\u0001\u0000\u0001\u0000\u0001\u0000"+
		"\u0001\u0000\u0001\u0000\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002"+
		"\u0001\u0002\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003"+
		"\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004"+
		"\u0001\u0004\u0001\u0004\u0001\u0005\u0001\u0005\u0001\u0006\u0001\u0006"+
		"\u0001\u0007\u0001\u0007\u0001\b\u0001\b\u0001\t\u0001\t\u0005\tC\b\t"+
		"\n\t\f\tF\t\t\u0001\t\u0001\t\u0001\n\u0001\n\u0005\nL\b\n\n\n\f\nO\t"+
		"\n\u0001\u000b\u0004\u000bR\b\u000b\u000b\u000b\f\u000bS\u0001\u000b\u0001"+
		"\u000b\u0000\u0000\f\u0001\u0001\u0003\u0002\u0005\u0003\u0007\u0004\t"+
		"\u0005\u000b\u0006\r\u0007\u000f\b\u0011\t\u0013\n\u0015\u000b\u0017\f"+
		"\u0001\u0000\u0004\u0001\u0000\"\"\u0003\u0000AZ__az\u0004\u000009AZ_"+
		"_az\u0003\u0000\t\n\r\r  Y\u0000\u0001\u0001\u0000\u0000\u0000\u0000\u0003"+
		"\u0001\u0000\u0000\u0000\u0000\u0005\u0001\u0000\u0000\u0000\u0000\u0007"+
		"\u0001\u0000\u0000\u0000\u0000\t\u0001\u0000\u0000\u0000\u0000\u000b\u0001"+
		"\u0000\u0000\u0000\u0000\r\u0001\u0000\u0000\u0000\u0000\u000f\u0001\u0000"+
		"\u0000\u0000\u0000\u0011\u0001\u0000\u0000\u0000\u0000\u0013\u0001\u0000"+
		"\u0000\u0000\u0000\u0015\u0001\u0000\u0000\u0000\u0000\u0017\u0001\u0000"+
		"\u0000\u0000\u0001\u0019\u0001\u0000\u0000\u0000\u0003 \u0001\u0000\u0000"+
		"\u0000\u0005%\u0001\u0000\u0000\u0000\u0007+\u0001\u0000\u0000\u0000\t"+
		"0\u0001\u0000\u0000\u0000\u000b8\u0001\u0000\u0000\u0000\r:\u0001\u0000"+
		"\u0000\u0000\u000f<\u0001\u0000\u0000\u0000\u0011>\u0001\u0000\u0000\u0000"+
		"\u0013@\u0001\u0000\u0000\u0000\u0015I\u0001\u0000\u0000\u0000\u0017Q"+
		"\u0001\u0000\u0000\u0000\u0019\u001a\u0005B\u0000\u0000\u001a\u001b\u0005"+
		"u\u0000\u0000\u001b\u001c\u0005t\u0000\u0000\u001c\u001d\u0005t\u0000"+
		"\u0000\u001d\u001e\u0005o\u0000\u0000\u001e\u001f\u0005n\u0000\u0000\u001f"+
		"\u0002\u0001\u0000\u0000\u0000 !\u0005M\u0000\u0000!\"\u0005e\u0000\u0000"+
		"\"#\u0005n\u0000\u0000#$\u0005u\u0000\u0000$\u0004\u0001\u0000\u0000\u0000"+
		"%&\u0005P\u0000\u0000&\'\u0005a\u0000\u0000\'(\u0005n\u0000\u0000()\u0005"+
		"e\u0000\u0000)*\u0005l\u0000\u0000*\u0006\u0001\u0000\u0000\u0000+,\u0005"+
		"t\u0000\u0000,-\u0005e\u0000\u0000-.\u0005x\u0000\u0000./\u0005t\u0000"+
		"\u0000/\b\u0001\u0000\u0000\u000001\u0005o\u0000\u000012\u0005n\u0000"+
		"\u000023\u0005C\u0000\u000034\u0005l\u0000\u000045\u0005i\u0000\u0000"+
		"56\u0005c\u0000\u000067\u0005k\u0000\u00007\n\u0001\u0000\u0000\u0000"+
		"89\u0005:\u0000\u00009\f\u0001\u0000\u0000\u0000:;\u0005{\u0000\u0000"+
		";\u000e\u0001\u0000\u0000\u0000<=\u0005}\u0000\u0000=\u0010\u0001\u0000"+
		"\u0000\u0000>?\u0005,\u0000\u0000?\u0012\u0001\u0000\u0000\u0000@D\u0005"+
		"\"\u0000\u0000AC\b\u0000\u0000\u0000BA\u0001\u0000\u0000\u0000CF\u0001"+
		"\u0000\u0000\u0000DB\u0001\u0000\u0000\u0000DE\u0001\u0000\u0000\u0000"+
		"EG\u0001\u0000\u0000\u0000FD\u0001\u0000\u0000\u0000GH\u0005\"\u0000\u0000"+
		"H\u0014\u0001\u0000\u0000\u0000IM\u0007\u0001\u0000\u0000JL\u0007\u0002"+
		"\u0000\u0000KJ\u0001\u0000\u0000\u0000LO\u0001\u0000\u0000\u0000MK\u0001"+
		"\u0000\u0000\u0000MN\u0001\u0000\u0000\u0000N\u0016\u0001\u0000\u0000"+
		"\u0000OM\u0001\u0000\u0000\u0000PR\u0007\u0003\u0000\u0000QP\u0001\u0000"+
		"\u0000\u0000RS\u0001\u0000\u0000\u0000SQ\u0001\u0000\u0000\u0000ST\u0001"+
		"\u0000\u0000\u0000TU\u0001\u0000\u0000\u0000UV\u0006\u000b\u0000\u0000"+
		"V\u0018\u0001\u0000\u0000\u0000\u0004\u0000DMS\u0001\u0006\u0000\u0000";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}