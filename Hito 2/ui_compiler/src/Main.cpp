#include <iostream>
#include <fstream>
#include "antlr4-runtime.h"
#include "UIGrammarLexer.h"
#include "UIGrammarParser.h"
#include "UIGrammarBaseVisitor.h"

using namespace antlr4;
using namespace std;

int main(int argc, const char* argv[]) {
    ifstream stream;
    stream.open("../ejemplo.ui");
    ANTLRInputStream input(stream);

    UIGrammarLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    UIGrammarParser parser(&tokens);

    tree::ParseTree *tree = parser.ui();
    cout << tree->toStringTree(&parser) << endl;

    return 0;
}
