import sys
from antlr4 import *
from UIGrammarLexer import UIGrammarLexer
from UIGrammarParser import UIGrammarParser

def main():
    input_stream = FileStream("input.ui", encoding='utf-8')  # o InputStream(texto)
    
    lexer = UIGrammarLexer(input_stream)
    stream = CommonTokenStream(lexer)
    parser = UIGrammarParser(stream)
    
    tree = parser.ui()  # Regla de inicio
    
    print(tree.toStringTree(recog=parser))  # Mostrar el árbol en consola

if __name__ == '__main__':
    main()
