//
// Created by Kenny on 4/27/2019.
//

#include <iostream>
#include <fstream>
#include <map>
#include <vector>
#include "LexicalAnalyzer.h"

using namespace std;

int main() {
    ifstream inFile;
    inFile.open("../testinput.txt");
    if (!inFile) {
        cout << "Error opening file";
        exit(0);
    }
    LexicalAnalyzer lex(inFile);
    string lexeme;
    Token t;

    while (lex.next(t, lexeme)){
        cout << "Found token: " << t << endl;
        cout << "Lexeme: " << lexeme << endl;
    }




    inFile.close();
    return 0;
}




