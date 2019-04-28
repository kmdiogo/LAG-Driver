
#include "test.h"
using namespace std;

LexicalAnalyzer::LexicalAnalyzer(ifstream &INPUT) : input(INPUT) {
map<vector<char>, int> stateMap;
stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9',}] = -1;
stateMap[vector<char>{'a',}] = 1;
stateMap[vector<char>{'b',}] = 2;
stateMap[vector<char>{'c',}] = 3;
stateMap[vector<char>{'d',}] = -1;
stateMap[vector<char>{'e',}] = -1;
stateMap[vector<char>{'f',}] = 4;
stateMap[vector<char>{'h',}] = -1;
stateMap[vector<char>{'k',}] = -1;
stateMap[vector<char>{'n',}] = -1;
stateMap[vector<char>{'r',}] = -1;
stateMap[vector<char>{'u',}] = -1;
stateMap[vector<char>{'w',}] = -1;
stateMap[vector<char>{'|',}] = 5;
dfa.emplace_back(stateMap);

stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9',}] = -1;
stateMap[vector<char>{'a',}] = 1;
stateMap[vector<char>{'b',}] = 2;
stateMap[vector<char>{'c',}] = -1;
stateMap[vector<char>{'d',}] = -1;
stateMap[vector<char>{'e',}] = -1;
stateMap[vector<char>{'f',}] = -1;
stateMap[vector<char>{'h',}] = -1;
stateMap[vector<char>{'k',}] = -1;
stateMap[vector<char>{'n',}] = -1;
stateMap[vector<char>{'r',}] = -1;
stateMap[vector<char>{'u',}] = -1;
stateMap[vector<char>{'w',}] = -1;
stateMap[vector<char>{'|',}] = -1;
dfa.emplace_back(stateMap);

stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9',}] = -1;
stateMap[vector<char>{'a',}] = 1;
stateMap[vector<char>{'b',}] = 2;
stateMap[vector<char>{'c',}] = -1;
stateMap[vector<char>{'d',}] = -1;
stateMap[vector<char>{'e',}] = -1;
stateMap[vector<char>{'f',}] = -1;
stateMap[vector<char>{'h',}] = -1;
stateMap[vector<char>{'k',}] = -1;
stateMap[vector<char>{'n',}] = -1;
stateMap[vector<char>{'r',}] = -1;
stateMap[vector<char>{'u',}] = -1;
stateMap[vector<char>{'w',}] = -1;
stateMap[vector<char>{'|',}] = -1;
dfa.emplace_back(stateMap);

stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9',}] = -1;
stateMap[vector<char>{'a',}] = -1;
stateMap[vector<char>{'b',}] = -1;
stateMap[vector<char>{'c',}] = -1;
stateMap[vector<char>{'d',}] = -1;
stateMap[vector<char>{'e',}] = -1;
stateMap[vector<char>{'f',}] = -1;
stateMap[vector<char>{'h',}] = 6;
stateMap[vector<char>{'k',}] = -1;
stateMap[vector<char>{'n',}] = -1;
stateMap[vector<char>{'r',}] = -1;
stateMap[vector<char>{'u',}] = -1;
stateMap[vector<char>{'w',}] = -1;
stateMap[vector<char>{'|',}] = -1;
dfa.emplace_back(stateMap);

stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9',}] = -1;
stateMap[vector<char>{'a',}] = -1;
stateMap[vector<char>{'b',}] = -1;
stateMap[vector<char>{'c',}] = -1;
stateMap[vector<char>{'d',}] = -1;
stateMap[vector<char>{'e',}] = -1;
stateMap[vector<char>{'f',}] = -1;
stateMap[vector<char>{'h',}] = -1;
stateMap[vector<char>{'k',}] = -1;
stateMap[vector<char>{'n',}] = -1;
stateMap[vector<char>{'r',}] = -1;
stateMap[vector<char>{'u',}] = 15;
stateMap[vector<char>{'w',}] = -1;
stateMap[vector<char>{'|',}] = -1;
dfa.emplace_back(stateMap);

stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9',}] = -1;
stateMap[vector<char>{'a',}] = -1;
stateMap[vector<char>{'b',}] = -1;
stateMap[vector<char>{'c',}] = -1;
stateMap[vector<char>{'d',}] = -1;
stateMap[vector<char>{'e',}] = -1;
stateMap[vector<char>{'f',}] = -1;
stateMap[vector<char>{'h',}] = -1;
stateMap[vector<char>{'k',}] = -1;
stateMap[vector<char>{'n',}] = -1;
stateMap[vector<char>{'r',}] = -1;
stateMap[vector<char>{'u',}] = -1;
stateMap[vector<char>{'w',}] = -1;
stateMap[vector<char>{'|',}] = -1;
dfa.emplace_back(stateMap);

stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9',}] = -1;
stateMap[vector<char>{'a',}] = 7;
stateMap[vector<char>{'b',}] = -1;
stateMap[vector<char>{'c',}] = -1;
stateMap[vector<char>{'d',}] = -1;
stateMap[vector<char>{'e',}] = -1;
stateMap[vector<char>{'f',}] = -1;
stateMap[vector<char>{'h',}] = -1;
stateMap[vector<char>{'k',}] = -1;
stateMap[vector<char>{'n',}] = -1;
stateMap[vector<char>{'r',}] = -1;
stateMap[vector<char>{'u',}] = -1;
stateMap[vector<char>{'w',}] = -1;
stateMap[vector<char>{'|',}] = -1;
dfa.emplace_back(stateMap);

stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9',}] = -1;
stateMap[vector<char>{'a',}] = -1;
stateMap[vector<char>{'b',}] = -1;
stateMap[vector<char>{'c',}] = -1;
stateMap[vector<char>{'d',}] = 8;
stateMap[vector<char>{'e',}] = -1;
stateMap[vector<char>{'f',}] = -1;
stateMap[vector<char>{'h',}] = -1;
stateMap[vector<char>{'k',}] = -1;
stateMap[vector<char>{'n',}] = -1;
stateMap[vector<char>{'r',}] = -1;
stateMap[vector<char>{'u',}] = -1;
stateMap[vector<char>{'w',}] = -1;
stateMap[vector<char>{'|',}] = -1;
dfa.emplace_back(stateMap);

stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9',}] = -1;
stateMap[vector<char>{'a',}] = -1;
stateMap[vector<char>{'b',}] = -1;
stateMap[vector<char>{'c',}] = -1;
stateMap[vector<char>{'d',}] = -1;
stateMap[vector<char>{'e',}] = -1;
stateMap[vector<char>{'f',}] = -1;
stateMap[vector<char>{'h',}] = -1;
stateMap[vector<char>{'k',}] = -1;
stateMap[vector<char>{'n',}] = -1;
stateMap[vector<char>{'r',}] = -1;
stateMap[vector<char>{'u',}] = -1;
stateMap[vector<char>{'w',}] = 9;
stateMap[vector<char>{'|',}] = -1;
dfa.emplace_back(stateMap);

stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9',}] = -1;
stateMap[vector<char>{'a',}] = 10;
stateMap[vector<char>{'b',}] = -1;
stateMap[vector<char>{'c',}] = -1;
stateMap[vector<char>{'d',}] = -1;
stateMap[vector<char>{'e',}] = -1;
stateMap[vector<char>{'f',}] = -1;
stateMap[vector<char>{'h',}] = -1;
stateMap[vector<char>{'k',}] = -1;
stateMap[vector<char>{'n',}] = -1;
stateMap[vector<char>{'r',}] = -1;
stateMap[vector<char>{'u',}] = -1;
stateMap[vector<char>{'w',}] = -1;
stateMap[vector<char>{'|',}] = -1;
dfa.emplace_back(stateMap);

stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9',}] = -1;
stateMap[vector<char>{'a',}] = -1;
stateMap[vector<char>{'b',}] = -1;
stateMap[vector<char>{'c',}] = -1;
stateMap[vector<char>{'d',}] = -1;
stateMap[vector<char>{'e',}] = -1;
stateMap[vector<char>{'f',}] = -1;
stateMap[vector<char>{'h',}] = -1;
stateMap[vector<char>{'k',}] = -1;
stateMap[vector<char>{'n',}] = -1;
stateMap[vector<char>{'r',}] = 11;
stateMap[vector<char>{'u',}] = -1;
stateMap[vector<char>{'w',}] = -1;
stateMap[vector<char>{'|',}] = -1;
dfa.emplace_back(stateMap);

stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9',}] = -1;
stateMap[vector<char>{'a',}] = -1;
stateMap[vector<char>{'b',}] = -1;
stateMap[vector<char>{'c',}] = -1;
stateMap[vector<char>{'d',}] = 12;
stateMap[vector<char>{'e',}] = -1;
stateMap[vector<char>{'f',}] = -1;
stateMap[vector<char>{'h',}] = -1;
stateMap[vector<char>{'k',}] = -1;
stateMap[vector<char>{'n',}] = -1;
stateMap[vector<char>{'r',}] = -1;
stateMap[vector<char>{'u',}] = -1;
stateMap[vector<char>{'w',}] = -1;
stateMap[vector<char>{'|',}] = -1;
dfa.emplace_back(stateMap);

stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9',}] = -1;
stateMap[vector<char>{'a',}] = -1;
stateMap[vector<char>{'b',}] = -1;
stateMap[vector<char>{'c',}] = -1;
stateMap[vector<char>{'d',}] = -1;
stateMap[vector<char>{'e',}] = 13;
stateMap[vector<char>{'f',}] = -1;
stateMap[vector<char>{'h',}] = -1;
stateMap[vector<char>{'k',}] = -1;
stateMap[vector<char>{'n',}] = -1;
stateMap[vector<char>{'r',}] = -1;
stateMap[vector<char>{'u',}] = -1;
stateMap[vector<char>{'w',}] = -1;
stateMap[vector<char>{'|',}] = -1;
dfa.emplace_back(stateMap);

stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9',}] = -1;
stateMap[vector<char>{'a',}] = -1;
stateMap[vector<char>{'b',}] = -1;
stateMap[vector<char>{'c',}] = -1;
stateMap[vector<char>{'d',}] = -1;
stateMap[vector<char>{'e',}] = -1;
stateMap[vector<char>{'f',}] = -1;
stateMap[vector<char>{'h',}] = -1;
stateMap[vector<char>{'k',}] = -1;
stateMap[vector<char>{'n',}] = 14;
stateMap[vector<char>{'r',}] = -1;
stateMap[vector<char>{'u',}] = -1;
stateMap[vector<char>{'w',}] = -1;
stateMap[vector<char>{'|',}] = -1;
dfa.emplace_back(stateMap);

stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9',}] = -1;
stateMap[vector<char>{'a',}] = -1;
stateMap[vector<char>{'b',}] = -1;
stateMap[vector<char>{'c',}] = 3;
stateMap[vector<char>{'d',}] = -1;
stateMap[vector<char>{'e',}] = -1;
stateMap[vector<char>{'f',}] = -1;
stateMap[vector<char>{'h',}] = -1;
stateMap[vector<char>{'k',}] = -1;
stateMap[vector<char>{'n',}] = -1;
stateMap[vector<char>{'r',}] = -1;
stateMap[vector<char>{'u',}] = -1;
stateMap[vector<char>{'w',}] = -1;
stateMap[vector<char>{'|',}] = -1;
dfa.emplace_back(stateMap);

stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9',}] = -1;
stateMap[vector<char>{'a',}] = -1;
stateMap[vector<char>{'b',}] = -1;
stateMap[vector<char>{'c',}] = 16;
stateMap[vector<char>{'d',}] = -1;
stateMap[vector<char>{'e',}] = -1;
stateMap[vector<char>{'f',}] = -1;
stateMap[vector<char>{'h',}] = -1;
stateMap[vector<char>{'k',}] = -1;
stateMap[vector<char>{'n',}] = -1;
stateMap[vector<char>{'r',}] = -1;
stateMap[vector<char>{'u',}] = -1;
stateMap[vector<char>{'w',}] = -1;
stateMap[vector<char>{'|',}] = -1;
dfa.emplace_back(stateMap);

stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9',}] = -1;
stateMap[vector<char>{'a',}] = -1;
stateMap[vector<char>{'b',}] = -1;
stateMap[vector<char>{'c',}] = -1;
stateMap[vector<char>{'d',}] = -1;
stateMap[vector<char>{'e',}] = -1;
stateMap[vector<char>{'f',}] = -1;
stateMap[vector<char>{'h',}] = -1;
stateMap[vector<char>{'k',}] = 17;
stateMap[vector<char>{'n',}] = -1;
stateMap[vector<char>{'r',}] = -1;
stateMap[vector<char>{'u',}] = -1;
stateMap[vector<char>{'w',}] = -1;
stateMap[vector<char>{'|',}] = -1;
dfa.emplace_back(stateMap);

stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9',}] = 18;
stateMap[vector<char>{'a',}] = -1;
stateMap[vector<char>{'b',}] = -1;
stateMap[vector<char>{'c',}] = -1;
stateMap[vector<char>{'d',}] = -1;
stateMap[vector<char>{'e',}] = -1;
stateMap[vector<char>{'f',}] = -1;
stateMap[vector<char>{'h',}] = -1;
stateMap[vector<char>{'k',}] = -1;
stateMap[vector<char>{'n',}] = -1;
stateMap[vector<char>{'r',}] = -1;
stateMap[vector<char>{'u',}] = -1;
stateMap[vector<char>{'w',}] = -1;
stateMap[vector<char>{'|',}] = -1;
dfa.emplace_back(stateMap);

stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9',}] = 18;
stateMap[vector<char>{'a',}] = -1;
stateMap[vector<char>{'b',}] = -1;
stateMap[vector<char>{'c',}] = -1;
stateMap[vector<char>{'d',}] = -1;
stateMap[vector<char>{'e',}] = -1;
stateMap[vector<char>{'f',}] = -1;
stateMap[vector<char>{'h',}] = -1;
stateMap[vector<char>{'k',}] = -1;
stateMap[vector<char>{'n',}] = -1;
stateMap[vector<char>{'r',}] = -1;
stateMap[vector<char>{'u',}] = -1;
stateMap[vector<char>{'w',}] = -1;
stateMap[vector<char>{'|',}] = -1;
dfa.emplace_back(stateMap);

acceptingStates[1]=aOrBStar;
acceptingStates[2]=aOrBStar;
ignores.insert(5);
acceptingStates[14]=chadWarden;
acceptingStates[18]=fuckWithNumbers;


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
