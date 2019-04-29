
#include "test.h"
using namespace std;

LexicalAnalyzer::LexicalAnalyzer(ifstream &INPUT) : input(INPUT) {
	map<vector<char>, int> stateMap;
	stateMap[vector<char>{' ',}] = 1;
	stateMap[vector<char>{'-',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9',}] = 2;
	stateMap[vector<char>{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',}] = 3;
	stateMap[vector<char>{'E',}] = -1;
	stateMap[vector<char>{'H',}] = -1;
	stateMap[vector<char>{'L',}] = -1;
	stateMap[vector<char>{'O',}] = -1;
	stateMap[vector<char>{'[',}] = 4;
	stateMap[vector<char>{']',}] = -1;
	stateMap[vector<char>{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',}] = 5;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{' ',}] = 1;
	stateMap[vector<char>{'-',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9',}] = -1;
	stateMap[vector<char>{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',}] = -1;
	stateMap[vector<char>{'E',}] = -1;
	stateMap[vector<char>{'H',}] = -1;
	stateMap[vector<char>{'L',}] = -1;
	stateMap[vector<char>{'O',}] = -1;
	stateMap[vector<char>{'[',}] = -1;
	stateMap[vector<char>{']',}] = -1;
	stateMap[vector<char>{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{' ',}] = -1;
	stateMap[vector<char>{'-',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9',}] = 6;
	stateMap[vector<char>{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',}] = -1;
	stateMap[vector<char>{'E',}] = -1;
	stateMap[vector<char>{'H',}] = -1;
	stateMap[vector<char>{'L',}] = -1;
	stateMap[vector<char>{'O',}] = -1;
	stateMap[vector<char>{'[',}] = -1;
	stateMap[vector<char>{']',}] = -1;
	stateMap[vector<char>{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{' ',}] = -1;
	stateMap[vector<char>{'-',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9',}] = 7;
	stateMap[vector<char>{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',}] = 3;
	stateMap[vector<char>{'E',}] = -1;
	stateMap[vector<char>{'H',}] = -1;
	stateMap[vector<char>{'L',}] = -1;
	stateMap[vector<char>{'O',}] = -1;
	stateMap[vector<char>{'[',}] = -1;
	stateMap[vector<char>{']',}] = -1;
	stateMap[vector<char>{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',}] = 5;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{' ',}] = -1;
	stateMap[vector<char>{'-',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9',}] = -1;
	stateMap[vector<char>{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',}] = -1;
	stateMap[vector<char>{'E',}] = -1;
	stateMap[vector<char>{'H',}] = 8;
	stateMap[vector<char>{'L',}] = -1;
	stateMap[vector<char>{'O',}] = -1;
	stateMap[vector<char>{'[',}] = -1;
	stateMap[vector<char>{']',}] = -1;
	stateMap[vector<char>{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{' ',}] = -1;
	stateMap[vector<char>{'-',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9',}] = 7;
	stateMap[vector<char>{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',}] = 3;
	stateMap[vector<char>{'E',}] = -1;
	stateMap[vector<char>{'H',}] = -1;
	stateMap[vector<char>{'L',}] = -1;
	stateMap[vector<char>{'O',}] = -1;
	stateMap[vector<char>{'[',}] = -1;
	stateMap[vector<char>{']',}] = -1;
	stateMap[vector<char>{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',}] = 5;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{' ',}] = -1;
	stateMap[vector<char>{'-',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9',}] = 9;
	stateMap[vector<char>{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',}] = -1;
	stateMap[vector<char>{'E',}] = -1;
	stateMap[vector<char>{'H',}] = -1;
	stateMap[vector<char>{'L',}] = -1;
	stateMap[vector<char>{'O',}] = -1;
	stateMap[vector<char>{'[',}] = -1;
	stateMap[vector<char>{']',}] = -1;
	stateMap[vector<char>{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{' ',}] = -1;
	stateMap[vector<char>{'-',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9',}] = -1;
	stateMap[vector<char>{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',}] = -1;
	stateMap[vector<char>{'E',}] = -1;
	stateMap[vector<char>{'H',}] = -1;
	stateMap[vector<char>{'L',}] = -1;
	stateMap[vector<char>{'O',}] = -1;
	stateMap[vector<char>{'[',}] = -1;
	stateMap[vector<char>{']',}] = -1;
	stateMap[vector<char>{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{' ',}] = -1;
	stateMap[vector<char>{'-',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9',}] = -1;
	stateMap[vector<char>{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',}] = -1;
	stateMap[vector<char>{'E',}] = 10;
	stateMap[vector<char>{'H',}] = -1;
	stateMap[vector<char>{'L',}] = -1;
	stateMap[vector<char>{'O',}] = -1;
	stateMap[vector<char>{'[',}] = -1;
	stateMap[vector<char>{']',}] = -1;
	stateMap[vector<char>{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{' ',}] = -1;
	stateMap[vector<char>{'-',}] = 11;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9',}] = -1;
	stateMap[vector<char>{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',}] = -1;
	stateMap[vector<char>{'E',}] = -1;
	stateMap[vector<char>{'H',}] = -1;
	stateMap[vector<char>{'L',}] = -1;
	stateMap[vector<char>{'O',}] = -1;
	stateMap[vector<char>{'[',}] = -1;
	stateMap[vector<char>{']',}] = -1;
	stateMap[vector<char>{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{' ',}] = -1;
	stateMap[vector<char>{'-',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9',}] = -1;
	stateMap[vector<char>{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',}] = -1;
	stateMap[vector<char>{'E',}] = -1;
	stateMap[vector<char>{'H',}] = -1;
	stateMap[vector<char>{'L',}] = 12;
	stateMap[vector<char>{'O',}] = -1;
	stateMap[vector<char>{'[',}] = -1;
	stateMap[vector<char>{']',}] = -1;
	stateMap[vector<char>{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{' ',}] = -1;
	stateMap[vector<char>{'-',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9',}] = 13;
	stateMap[vector<char>{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',}] = -1;
	stateMap[vector<char>{'E',}] = -1;
	stateMap[vector<char>{'H',}] = -1;
	stateMap[vector<char>{'L',}] = -1;
	stateMap[vector<char>{'O',}] = -1;
	stateMap[vector<char>{'[',}] = -1;
	stateMap[vector<char>{']',}] = -1;
	stateMap[vector<char>{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{' ',}] = -1;
	stateMap[vector<char>{'-',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9',}] = -1;
	stateMap[vector<char>{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',}] = -1;
	stateMap[vector<char>{'E',}] = -1;
	stateMap[vector<char>{'H',}] = -1;
	stateMap[vector<char>{'L',}] = 14;
	stateMap[vector<char>{'O',}] = -1;
	stateMap[vector<char>{'[',}] = -1;
	stateMap[vector<char>{']',}] = -1;
	stateMap[vector<char>{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{' ',}] = -1;
	stateMap[vector<char>{'-',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9',}] = 15;
	stateMap[vector<char>{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',}] = -1;
	stateMap[vector<char>{'E',}] = -1;
	stateMap[vector<char>{'H',}] = -1;
	stateMap[vector<char>{'L',}] = -1;
	stateMap[vector<char>{'O',}] = -1;
	stateMap[vector<char>{'[',}] = -1;
	stateMap[vector<char>{']',}] = -1;
	stateMap[vector<char>{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{' ',}] = -1;
	stateMap[vector<char>{'-',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9',}] = -1;
	stateMap[vector<char>{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',}] = -1;
	stateMap[vector<char>{'E',}] = -1;
	stateMap[vector<char>{'H',}] = -1;
	stateMap[vector<char>{'L',}] = -1;
	stateMap[vector<char>{'O',}] = 16;
	stateMap[vector<char>{'[',}] = -1;
	stateMap[vector<char>{']',}] = -1;
	stateMap[vector<char>{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{' ',}] = -1;
	stateMap[vector<char>{'-',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9',}] = 17;
	stateMap[vector<char>{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',}] = -1;
	stateMap[vector<char>{'E',}] = -1;
	stateMap[vector<char>{'H',}] = -1;
	stateMap[vector<char>{'L',}] = -1;
	stateMap[vector<char>{'O',}] = -1;
	stateMap[vector<char>{'[',}] = -1;
	stateMap[vector<char>{']',}] = -1;
	stateMap[vector<char>{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{' ',}] = -1;
	stateMap[vector<char>{'-',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9',}] = -1;
	stateMap[vector<char>{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',}] = -1;
	stateMap[vector<char>{'E',}] = -1;
	stateMap[vector<char>{'H',}] = -1;
	stateMap[vector<char>{'L',}] = -1;
	stateMap[vector<char>{'O',}] = -1;
	stateMap[vector<char>{'[',}] = -1;
	stateMap[vector<char>{']',}] = 18;
	stateMap[vector<char>{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{' ',}] = -1;
	stateMap[vector<char>{'-',}] = 19;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9',}] = -1;
	stateMap[vector<char>{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',}] = -1;
	stateMap[vector<char>{'E',}] = -1;
	stateMap[vector<char>{'H',}] = -1;
	stateMap[vector<char>{'L',}] = -1;
	stateMap[vector<char>{'O',}] = -1;
	stateMap[vector<char>{'[',}] = -1;
	stateMap[vector<char>{']',}] = -1;
	stateMap[vector<char>{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{' ',}] = -1;
	stateMap[vector<char>{'-',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9',}] = -1;
	stateMap[vector<char>{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',}] = -1;
	stateMap[vector<char>{'E',}] = -1;
	stateMap[vector<char>{'H',}] = -1;
	stateMap[vector<char>{'L',}] = -1;
	stateMap[vector<char>{'O',}] = -1;
	stateMap[vector<char>{'[',}] = 4;
	stateMap[vector<char>{']',}] = -1;
	stateMap[vector<char>{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{' ',}] = -1;
	stateMap[vector<char>{'-',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9',}] = 20;
	stateMap[vector<char>{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',}] = -1;
	stateMap[vector<char>{'E',}] = -1;
	stateMap[vector<char>{'H',}] = -1;
	stateMap[vector<char>{'L',}] = -1;
	stateMap[vector<char>{'O',}] = -1;
	stateMap[vector<char>{'[',}] = -1;
	stateMap[vector<char>{']',}] = -1;
	stateMap[vector<char>{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{' ',}] = -1;
	stateMap[vector<char>{'-',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9',}] = 21;
	stateMap[vector<char>{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',}] = -1;
	stateMap[vector<char>{'E',}] = -1;
	stateMap[vector<char>{'H',}] = -1;
	stateMap[vector<char>{'L',}] = -1;
	stateMap[vector<char>{'O',}] = -1;
	stateMap[vector<char>{'[',}] = -1;
	stateMap[vector<char>{']',}] = -1;
	stateMap[vector<char>{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{' ',}] = -1;
	stateMap[vector<char>{'-',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9',}] = 22;
	stateMap[vector<char>{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',}] = -1;
	stateMap[vector<char>{'E',}] = -1;
	stateMap[vector<char>{'H',}] = -1;
	stateMap[vector<char>{'L',}] = -1;
	stateMap[vector<char>{'O',}] = -1;
	stateMap[vector<char>{'[',}] = -1;
	stateMap[vector<char>{']',}] = -1;
	stateMap[vector<char>{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{' ',}] = -1;
	stateMap[vector<char>{'-',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9',}] = 23;
	stateMap[vector<char>{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',}] = -1;
	stateMap[vector<char>{'E',}] = -1;
	stateMap[vector<char>{'H',}] = -1;
	stateMap[vector<char>{'L',}] = -1;
	stateMap[vector<char>{'O',}] = -1;
	stateMap[vector<char>{'[',}] = -1;
	stateMap[vector<char>{']',}] = -1;
	stateMap[vector<char>{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{' ',}] = -1;
	stateMap[vector<char>{'-',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9',}] = -1;
	stateMap[vector<char>{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',}] = -1;
	stateMap[vector<char>{'E',}] = -1;
	stateMap[vector<char>{'H',}] = -1;
	stateMap[vector<char>{'L',}] = -1;
	stateMap[vector<char>{'O',}] = -1;
	stateMap[vector<char>{'[',}] = -1;
	stateMap[vector<char>{']',}] = -1;
	stateMap[vector<char>{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',}] = -1;
	dfa.emplace_back(stateMap);

	ignores.insert(1);
	acceptingStates[3]=numberedVariable;
	acceptingStates[5]=numberedVariable;
	acceptingStates[7]=numberedVariable;
	acceptingStates[18]=random;
	acceptingStates[23]=phoneNumber;


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
