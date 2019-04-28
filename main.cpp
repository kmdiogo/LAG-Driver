//
// Created by Kenny on 4/27/2019.
//

#include <iostream>
#include <fstream>
#include <map>
#include <vector>
#include "test.h"

using namespace std;

int main() {
    ifstream inFile;
    inFile.open("../testinput.txt");
    if (!inFile) {
        cout << "Fuck";
        exit(0);
    }
    LexicalAnalyzer lex(inFile);
    string lexeme;
    Token t;

    for (int i=0; i < lex.dfa.size();i++) {
        cout << "State " << i << ": ";
        for (auto & edgePair : lex.dfa[i]) {
            cout << "Input: [";
            for (auto & ch : edgePair.first) {
                cout << ch << ",";
            }
            cout << "]: " << edgePair.second << " | ";
        }
        cout << endl << endl;
    }
    cout << "Ignores: ";
    for (auto & x : lex.ignores) {
        cout << x << ", ";
    }
    cout << endl << endl;

    cout << "acceptingState: ";
    for (auto & x : lex.acceptingStates) {
        cout << x.first << " ";
    }
    cout << endl;

    while (lex.next(t, lexeme)){
        cout << "Found token: " << t << endl;
        cout << "Lexeme: " << lexeme << endl;
    }




    inFile.close();
    return 0;
}




