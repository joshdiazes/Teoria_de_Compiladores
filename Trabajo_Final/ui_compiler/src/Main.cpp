#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <json.hpp>

#include "antlr4-runtime.h"
#include "UIGrammarLexer.h"
#include "UIGrammarParser.h"
#include "UIToJsonVisitor.h"
#include "HTMLGenerator.h"

using json = nlohmann::json;
using namespace antlr4;
using namespace std;

int main()
{
    ifstream stream("../ejemplo.ui");
    if (!stream.is_open())
    {
        cerr << "No se pudo abrir el archivo ejemplo.ui" << endl;
        return 1;
    }

    ANTLRInputStream input(stream);
    UIGrammarLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    UIGrammarParser parser(&tokens);

    tree::ParseTree *tree = parser.ui(); // punto de entrada

    UIToJsonVisitor visitor;
    string jsonOutput = std::any_cast<std::string>(visitor.visit(tree)); // visitar el árbol

    cout << "JSON generado:\n"
         << jsonOutput << endl;

    string html = generateHTMLFromJson(jsonOutput);
    cout << "Archivo HTML generado como output.html\n";

    return 0;
}
