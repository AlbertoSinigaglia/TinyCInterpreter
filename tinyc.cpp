#include <iostream>
#include <fstream>
#include <string>
#include <exception>
#include "/usr/include/antlr4-runtime/antlr4-runtime.h"
#include "tinycLexer.h"
#include "tinycParser.h"
#include "runtimeVisitor.h"

using namespace std;
using namespace antlr4;

int main(int argc, char* argv[]) {
    if(argc != 2) {
        cout << "Usage: tinyc filename.tc" << endl;
        return 1;
    }
    ifstream tinycFile(argv[1]);
    if(tinycFile.fail()){
        // File open error
        cout << "Error while reading file " << argv[1] << endl;
        return 1;
    }
    ANTLRInputStream input(tinycFile);
    tinycLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    tinycParser parser(&tokens);
    tinycParser::StartContext *tree = parser.start();
    int errors = parser.getNumberOfSyntaxErrors();
    if(errors > 0) {
        cout << errors << " syntax errors found." << endl;
        return 1;
    } 

    cout << "Running program " << argv[1] << endl;
    runtimeVisitor visitor;
    visitor.visitStart(tree);    
    return 0;
}
