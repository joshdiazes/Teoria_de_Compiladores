grammar UIGrammar;

// Entrada principal
ui: component+;

// Definición de componentes con etiquetas para el Visitor
component:
	buttonComponent			# button
	| menuComponent			# menu
	| panelComponent		# panel
	| labelComponent		# label
	| textfieldComponent	# textfield
	| imageComponent		# image;

// Subreglas de componentes
buttonComponent: BUTTON LBRACE props RBRACE;
menuComponent: MENU LBRACE props RBRACE;
panelComponent: PANEL LBRACE props component* RBRACE;
labelComponent: LABEL LBRACE props RBRACE;
textfieldComponent: TEXTFIELD LBRACE props RBRACE;
imageComponent: IMAGE LBRACE props RBRACE;

// Lista de propiedades
props: prop (COMMA prop)*;
prop: ID COLON value;

// Valores permitidos
value: STRING | NUMBER | BOOL;

// Tokens de componentes
BUTTON: 'Button';
MENU: 'Menu';
PANEL: 'Panel';
LABEL: 'Label';
TEXTFIELD: 'TextField';
IMAGE: 'Image';

// Tipos de valor
BOOL: 'true' | 'false';

// Delimitadores y símbolos
COLON: ':';
COMMA: ',';
LBRACE: '{';
RBRACE: '}';

// Valores literales
STRING: '"' (~["\\] | '\\' .)* '"';
NUMBER: [0-9]+ ('.' [0-9]+)?;
ID: [a-zA-Z_][a-zA-Z_0-9]*;

// Ignorar espacios y saltos de línea
WS: [ \t\r\n]+ -> skip;