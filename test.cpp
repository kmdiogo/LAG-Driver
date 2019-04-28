
#include "test.h"
using namespace std;

LexicalAnalyzer::LexicalAnalyzer(ifstream &INPUT) : input(INPUT) {
map<vector<char>, int> stateMap;
stateMap[vector<char>{'a',}] = 1;
stateMap[vector<char>{'b',}] = 2;
stateMap[vector<char>{'g',}] = 3;
stateMap[vector<char>{'z',}] = 4;
stateMap[vector<char>{'|',}] = 5;
dfa.emplace_back(stateMap);

stateMap[vector<char>{'a',}] = 1;
stateMap[vector<char>{'b',}] = 2;
stateMap[vector<char>{'g',}] = -1;
stateMap[vector<char>{'z',}] = -1;
stateMap[vector<char>{'|',}] = -1;
dfa.emplace_back(stateMap);

stateMap[vector<char>{'a',}] = 1;
stateMap[vector<char>{'b',}] = 2;
stateMap[vector<char>{'g',}] = -1;
stateMap[vector<char>{'z',}] = -1;
stateMap[vector<char>{'|',}] = -1;
dfa.emplace_back(stateMap);

stateMap[vector<char>{'a',}] = -1;
stateMap[vector<char>{'b',}] = -1;
stateMap[vector<char>{'g',}] = -1;
stateMap[vector<char>{'z',}] = -1;
stateMap[vector<char>{'|',}] = -1;
dfa.emplace_back(stateMap);

stateMap[vector<char>{'a',}] = -1;
stateMap[vector<char>{'b',}] = -1;
stateMap[vector<char>{'g',}] = 3;
stateMap[vector<char>{'z',}] = 4;
stateMap[vector<char>{'|',}] = 5;
dfa.emplace_back(stateMap);

stateMap[vector<char>{'a',}] = -1;
stateMap[vector<char>{'b',}] = -1;
stateMap[vector<char>{'g',}] = 3;
stateMap[vector<char>{'z',}] = 4;
stateMap[vector<char>{'|',}] = 5;
dfa.emplace_back(stateMap);

acceptingStates[1]=aOrB;
acceptingStates[2]=aOrB;
ignores.insert(3);


}



bool LexicalAnalyzer::next(Token &t, string &lexeme) {
    begin:
    if (input.eof()) {
        return false;
    }
    string lex = "";
    char curChar;
    int currentState = 0;
    while (input >> curChar) {
        bool inputMatched = false;
        for (auto & inp : dfa[currentState]) {
            for (auto & ch : inp.first) {
                if (curChar == ch) {
                    inputMatched = true;
                    if (inp.second == -1) {
                        input.seekg(-1, input.cur);
                        goto afterLoop;
                    }
                    lex += curChar;
                    currentState = inp.second;
                    break;
                }
            }
        }
        if (!inputMatched) throw "Input doesn't match any token";
    }
    afterLoop:

    if (ignores.find(currentState) != ignores.end()) {
        goto begin;
    }
    else if (acceptingStates.find(currentState) == acceptingStates.end()) {
        throw "Input doesn't match any token";
    }
    else {
        t = acceptingStates[currentState];
        lexeme = lex;
        return true;
    }
}
