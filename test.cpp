
#include "test.h"
using namespace std;

LexicalAnalyzer::LexicalAnalyzer(ifstream &INPUT) : input(INPUT) {
	map<vector<char>, int> stateMap;
	stateMap[vector<char>{' ',}] = 1;
	stateMap[vector<char>{'-',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9',}] = 2;
	stateMap[vector<char>{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',}] = 3;
	stateMap[vector<char>{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',}] = 4;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{' ',}] = 1;
	stateMap[vector<char>{'-',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9',}] = -1;
	stateMap[vector<char>{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',}] = -1;
	stateMap[vector<char>{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{' ',}] = -1;
	stateMap[vector<char>{'-',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9',}] = 5;
	stateMap[vector<char>{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',}] = -1;
	stateMap[vector<char>{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{' ',}] = -1;
	stateMap[vector<char>{'-',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9',}] = 6;
	stateMap[vector<char>{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',}] = 3;
	stateMap[vector<char>{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',}] = 4;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{' ',}] = -1;
	stateMap[vector<char>{'-',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9',}] = 6;
	stateMap[vector<char>{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',}] = 3;
	stateMap[vector<char>{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',}] = 4;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{' ',}] = -1;
	stateMap[vector<char>{'-',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9',}] = 7;
	stateMap[vector<char>{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',}] = -1;
	stateMap[vector<char>{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{' ',}] = -1;
	stateMap[vector<char>{'-',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9',}] = -1;
	stateMap[vector<char>{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',}] = -1;
	stateMap[vector<char>{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{' ',}] = -1;
	stateMap[vector<char>{'-',}] = 8;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9',}] = -1;
	stateMap[vector<char>{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',}] = -1;
	stateMap[vector<char>{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{' ',}] = -1;
	stateMap[vector<char>{'-',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9',}] = 9;
	stateMap[vector<char>{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',}] = -1;
	stateMap[vector<char>{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{' ',}] = -1;
	stateMap[vector<char>{'-',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9',}] = 10;
	stateMap[vector<char>{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',}] = -1;
	stateMap[vector<char>{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{' ',}] = -1;
	stateMap[vector<char>{'-',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9',}] = 11;
	stateMap[vector<char>{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',}] = -1;
	stateMap[vector<char>{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{' ',}] = -1;
	stateMap[vector<char>{'-',}] = 12;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9',}] = -1;
	stateMap[vector<char>{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',}] = -1;
	stateMap[vector<char>{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{' ',}] = -1;
	stateMap[vector<char>{'-',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9',}] = 13;
	stateMap[vector<char>{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',}] = -1;
	stateMap[vector<char>{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{' ',}] = -1;
	stateMap[vector<char>{'-',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9',}] = 14;
	stateMap[vector<char>{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',}] = -1;
	stateMap[vector<char>{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{' ',}] = -1;
	stateMap[vector<char>{'-',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9',}] = 15;
	stateMap[vector<char>{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',}] = -1;
	stateMap[vector<char>{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{' ',}] = -1;
	stateMap[vector<char>{'-',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9',}] = 16;
	stateMap[vector<char>{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',}] = -1;
	stateMap[vector<char>{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{' ',}] = -1;
	stateMap[vector<char>{'-',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9',}] = -1;
	stateMap[vector<char>{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',}] = -1;
	stateMap[vector<char>{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',}] = -1;
	dfa.emplace_back(stateMap);

	ignores.insert(1);
	acceptingStates[3]=numberedVariable;
	acceptingStates[4]=numberedVariable;
	acceptingStates[6]=numberedVariable;
	acceptingStates[16]=phoneNumber;


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
                        /*if (nextMatchesIgnore()) {
                            goto beginAfterIgnore;
                        }*/
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

