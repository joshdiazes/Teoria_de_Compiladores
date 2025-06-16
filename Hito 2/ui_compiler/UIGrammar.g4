grammar UIGrammar;

// Entrada principal
ui: component+;
component: button | menu | panel;
button: BUTTON LBRACE props RBRACE;
menu: MENU LBRACE props RBRACE;
panel: PANEL LBRACE props RBRACE;

props: prop (COMMA prop)*;
prop:
	TEXT COLON STRING
	| ONCLICK COLON STRING; // Cambiamos ID a STRING para onClick

BUTTON: 'Button';
MENU: 'Menu';
PANEL: 'Panel';

TEXT: 'text'; // Propiedad para texto
ONCLICK: 'onClick'; // Propiedad para el evento de clic
COLON: ':'; // Definición del token COLON
LBRACE: '{'; // Llave izquierda
RBRACE: '}'; // Llave derecha
COMMA: ','; // Coma
STRING: '"' ~["]* '"'; // Cualquier cadena entre comillas
ID: [a-zA-Z_][a-zA-Z0-9_]*; // Identificador válido
WS: [ \t\r\n]+ -> skip; // Espacios en blanco