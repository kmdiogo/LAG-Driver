
#include "test.h"
using namespace std;

LexicalAnalyzer::LexicalAnalyzer(ifstream &INPUT) : input(INPUT) {
	map<vector<char>, int> stateMap;
	stateMap[vector<char>{' ',}] = 1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9',}] = 2;
	stateMap[vector<char>{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',}] = 3;
	stateMap[vector<char>{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',}] = 4;
	stateMap[vector<char>{'z',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{' ',}] = 1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9',}] = -1;
	stateMap[vector<char>{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',}] = -1;
	stateMap[vector<char>{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',}] = -1;
	stateMap[vector<char>{'z',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{' ',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9',}] = 2;
	stateMap[vector<char>{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',}] = -1;
	stateMap[vector<char>{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',}] = -1;
	stateMap[vector<char>{'z',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{' ',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9',}] = 5;
	stateMap[vector<char>{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',}] = 3;
	stateMap[vector<char>{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',}] = 4;
	stateMap[vector<char>{'z',}] = 6;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{' ',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9',}] = 5;
	stateMap[vector<char>{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',}] = 3;
	stateMap[vector<char>{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',}] = 4;
	stateMap[vector<char>{'z',}] = 6;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{' ',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9',}] = 5;
	stateMap[vector<char>{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',}] = -1;
	stateMap[vector<char>{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',}] = -1;
	stateMap[vector<char>{'z',}] = 6;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{' ',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9',}] = 5;
	stateMap[vector<char>{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',}] = -1;
	stateMap[vector<char>{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',}] = -1;
	stateMap[vector<char>{'z',}] = 6;
	dfa.emplace_back(stateMap);

	ignores.insert(1);
	acceptingStates[2]=numbas;
	acceptingStates[3]=identifier;
	acceptingStates[4]=identifier;
	acceptingStates[5]=identifier;
	acceptingStates[6]=identifier;


}



bool LexicalAnalyzer::next(Token &t, string &lexeme) {
    if (input.eof()) {
        return false;
    }
    string lex = "";
    char curChar;
    int currentState = 0;

    beginAfterIgnore:
    while (input >> curChar) {
        bool inputMatched = false;
        for (auto & inp : dfa[currentState]) {
            for (auto & ch : inp.first) {
                if (curChar == ch) {
                    inputMatched = true;
                    if (inp.second == -1) {
                        input.seekg(-1, input.cur);
                        if (nextMatchesIgnore()) {
                            goto beginAfterIgnore;
                        }
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

    if (acceptingStates.find(currentState) == acceptingStates.end()) {
        throw "Input doesn't match any token";
    }
    else {
        t = acceptingStates[currentState];
        lexeme = lex;
        return true;
    }
}

bool LexicalAnalyzer::nextMatchesIgnore() {
    if (input.eof()) {
        return false;
    }
    string lex = "";
    char curChar;
    int currentState = 0;
    int offset = 0;

    while (input >> curChar) {
        offset++;
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
        return true;
    }
    input.seekg(-offset+1, input.cur);
    return false;

}
