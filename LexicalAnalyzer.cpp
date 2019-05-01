#include "LexicalAnalyzer.h"

using namespace std;

LexicalAnalyzer::LexicalAnalyzer(ifstream &INPUT) : input(INPUT) {
	map<vector<char>, int> stateMap;
	stateMap[vector<char>{'+','-',}] = -1;
	stateMap[vector<char>{'.',}] = 1;
	stateMap[vector<char>{'0',}] = 2;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','A','B','C','D','E','F',}] = -1;
	stateMap[vector<char>{'1','2','3','4','5','6','7',}] = 3;
	stateMap[vector<char>{'8',}] = 4;
	stateMap[vector<char>{'9',}] = 5;
	stateMap[vector<char>{'E','e',}] = -1;
	stateMap[vector<char>{'x',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{'+','-',}] = -1;
	stateMap[vector<char>{'.',}] = -1;
	stateMap[vector<char>{'0',}] = 6;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','A','B','C','D','E','F',}] = -1;
	stateMap[vector<char>{'1','2','3','4','5','6','7',}] = 7;
	stateMap[vector<char>{'8',}] = 8;
	stateMap[vector<char>{'9',}] = 9;
	stateMap[vector<char>{'E','e',}] = -1;
	stateMap[vector<char>{'x',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{'+','-',}] = -1;
	stateMap[vector<char>{'.',}] = 10;
	stateMap[vector<char>{'0',}] = 11;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7',}] = 12;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','A','B','C','D','E','F',}] = -1;
	stateMap[vector<char>{'1','2','3','4','5','6','7',}] = 13;
	stateMap[vector<char>{'8',}] = 14;
	stateMap[vector<char>{'9',}] = 15;
	stateMap[vector<char>{'E','e',}] = -1;
	stateMap[vector<char>{'x',}] = 16;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{'+','-',}] = -1;
	stateMap[vector<char>{'.',}] = 10;
	stateMap[vector<char>{'0',}] = 17;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','A','B','C','D','E','F',}] = -1;
	stateMap[vector<char>{'1','2','3','4','5','6','7',}] = 18;
	stateMap[vector<char>{'8',}] = 19;
	stateMap[vector<char>{'9',}] = 20;
	stateMap[vector<char>{'E','e',}] = -1;
	stateMap[vector<char>{'x',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{'+','-',}] = -1;
	stateMap[vector<char>{'.',}] = 10;
	stateMap[vector<char>{'0',}] = 17;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','A','B','C','D','E','F',}] = -1;
	stateMap[vector<char>{'1','2','3','4','5','6','7',}] = 18;
	stateMap[vector<char>{'8',}] = 19;
	stateMap[vector<char>{'9',}] = 20;
	stateMap[vector<char>{'E','e',}] = -1;
	stateMap[vector<char>{'x',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{'+','-',}] = -1;
	stateMap[vector<char>{'.',}] = 10;
	stateMap[vector<char>{'0',}] = 17;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','A','B','C','D','E','F',}] = -1;
	stateMap[vector<char>{'1','2','3','4','5','6','7',}] = 18;
	stateMap[vector<char>{'8',}] = 19;
	stateMap[vector<char>{'9',}] = 20;
	stateMap[vector<char>{'E','e',}] = -1;
	stateMap[vector<char>{'x',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{'+','-',}] = -1;
	stateMap[vector<char>{'.',}] = -1;
	stateMap[vector<char>{'0',}] = 6;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','A','B','C','D','E','F',}] = -1;
	stateMap[vector<char>{'1','2','3','4','5','6','7',}] = 7;
	stateMap[vector<char>{'8',}] = 8;
	stateMap[vector<char>{'9',}] = 9;
	stateMap[vector<char>{'E','e',}] = 21;
	stateMap[vector<char>{'x',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{'+','-',}] = -1;
	stateMap[vector<char>{'.',}] = -1;
	stateMap[vector<char>{'0',}] = 6;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','A','B','C','D','E','F',}] = -1;
	stateMap[vector<char>{'1','2','3','4','5','6','7',}] = 7;
	stateMap[vector<char>{'8',}] = 8;
	stateMap[vector<char>{'9',}] = 9;
	stateMap[vector<char>{'E','e',}] = 21;
	stateMap[vector<char>{'x',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{'+','-',}] = -1;
	stateMap[vector<char>{'.',}] = -1;
	stateMap[vector<char>{'0',}] = 6;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','A','B','C','D','E','F',}] = -1;
	stateMap[vector<char>{'1','2','3','4','5','6','7',}] = 7;
	stateMap[vector<char>{'8',}] = 8;
	stateMap[vector<char>{'9',}] = 9;
	stateMap[vector<char>{'E','e',}] = 21;
	stateMap[vector<char>{'x',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{'+','-',}] = -1;
	stateMap[vector<char>{'.',}] = -1;
	stateMap[vector<char>{'0',}] = 6;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','A','B','C','D','E','F',}] = -1;
	stateMap[vector<char>{'1','2','3','4','5','6','7',}] = 7;
	stateMap[vector<char>{'8',}] = 8;
	stateMap[vector<char>{'9',}] = 9;
	stateMap[vector<char>{'E','e',}] = 21;
	stateMap[vector<char>{'x',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{'+','-',}] = -1;
	stateMap[vector<char>{'.',}] = -1;
	stateMap[vector<char>{'0',}] = 22;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','A','B','C','D','E','F',}] = -1;
	stateMap[vector<char>{'1','2','3','4','5','6','7',}] = 23;
	stateMap[vector<char>{'8',}] = 24;
	stateMap[vector<char>{'9',}] = 25;
	stateMap[vector<char>{'E','e',}] = 21;
	stateMap[vector<char>{'x',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{'+','-',}] = -1;
	stateMap[vector<char>{'.',}] = 10;
	stateMap[vector<char>{'0',}] = 11;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7',}] = 12;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','A','B','C','D','E','F',}] = -1;
	stateMap[vector<char>{'1','2','3','4','5','6','7',}] = 13;
	stateMap[vector<char>{'8',}] = 14;
	stateMap[vector<char>{'9',}] = 15;
	stateMap[vector<char>{'E','e',}] = -1;
	stateMap[vector<char>{'x',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{'+','-',}] = -1;
	stateMap[vector<char>{'.',}] = -1;
	stateMap[vector<char>{'0',}] = 26;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7',}] = 12;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','A','B','C','D','E','F',}] = -1;
	stateMap[vector<char>{'1','2','3','4','5','6','7',}] = -1;
	stateMap[vector<char>{'8',}] = -1;
	stateMap[vector<char>{'9',}] = -1;
	stateMap[vector<char>{'E','e',}] = -1;
	stateMap[vector<char>{'x',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{'+','-',}] = -1;
	stateMap[vector<char>{'.',}] = 10;
	stateMap[vector<char>{'0',}] = 27;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','A','B','C','D','E','F',}] = -1;
	stateMap[vector<char>{'1','2','3','4','5','6','7',}] = 13;
	stateMap[vector<char>{'8',}] = 14;
	stateMap[vector<char>{'9',}] = 15;
	stateMap[vector<char>{'E','e',}] = -1;
	stateMap[vector<char>{'x',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{'+','-',}] = -1;
	stateMap[vector<char>{'.',}] = 10;
	stateMap[vector<char>{'0',}] = 27;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','A','B','C','D','E','F',}] = -1;
	stateMap[vector<char>{'1','2','3','4','5','6','7',}] = 13;
	stateMap[vector<char>{'8',}] = 14;
	stateMap[vector<char>{'9',}] = 15;
	stateMap[vector<char>{'E','e',}] = -1;
	stateMap[vector<char>{'x',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{'+','-',}] = -1;
	stateMap[vector<char>{'.',}] = 10;
	stateMap[vector<char>{'0',}] = 27;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','A','B','C','D','E','F',}] = -1;
	stateMap[vector<char>{'1','2','3','4','5','6','7',}] = 13;
	stateMap[vector<char>{'8',}] = 14;
	stateMap[vector<char>{'9',}] = 15;
	stateMap[vector<char>{'E','e',}] = -1;
	stateMap[vector<char>{'x',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{'+','-',}] = -1;
	stateMap[vector<char>{'.',}] = -1;
	stateMap[vector<char>{'0',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','A','B','C','D','E','F',}] = 28;
	stateMap[vector<char>{'1','2','3','4','5','6','7',}] = -1;
	stateMap[vector<char>{'8',}] = -1;
	stateMap[vector<char>{'9',}] = -1;
	stateMap[vector<char>{'E','e',}] = -1;
	stateMap[vector<char>{'x',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{'+','-',}] = -1;
	stateMap[vector<char>{'.',}] = 10;
	stateMap[vector<char>{'0',}] = 17;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','A','B','C','D','E','F',}] = -1;
	stateMap[vector<char>{'1','2','3','4','5','6','7',}] = 18;
	stateMap[vector<char>{'8',}] = 19;
	stateMap[vector<char>{'9',}] = 20;
	stateMap[vector<char>{'E','e',}] = -1;
	stateMap[vector<char>{'x',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{'+','-',}] = -1;
	stateMap[vector<char>{'.',}] = 10;
	stateMap[vector<char>{'0',}] = 17;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','A','B','C','D','E','F',}] = -1;
	stateMap[vector<char>{'1','2','3','4','5','6','7',}] = 18;
	stateMap[vector<char>{'8',}] = 19;
	stateMap[vector<char>{'9',}] = 20;
	stateMap[vector<char>{'E','e',}] = -1;
	stateMap[vector<char>{'x',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{'+','-',}] = -1;
	stateMap[vector<char>{'.',}] = 10;
	stateMap[vector<char>{'0',}] = 17;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','A','B','C','D','E','F',}] = -1;
	stateMap[vector<char>{'1','2','3','4','5','6','7',}] = 18;
	stateMap[vector<char>{'8',}] = 19;
	stateMap[vector<char>{'9',}] = 20;
	stateMap[vector<char>{'E','e',}] = -1;
	stateMap[vector<char>{'x',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{'+','-',}] = -1;
	stateMap[vector<char>{'.',}] = 10;
	stateMap[vector<char>{'0',}] = 17;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','A','B','C','D','E','F',}] = -1;
	stateMap[vector<char>{'1','2','3','4','5','6','7',}] = 18;
	stateMap[vector<char>{'8',}] = 19;
	stateMap[vector<char>{'9',}] = 20;
	stateMap[vector<char>{'E','e',}] = -1;
	stateMap[vector<char>{'x',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{'+','-',}] = 29;
	stateMap[vector<char>{'.',}] = -1;
	stateMap[vector<char>{'0',}] = 30;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','A','B','C','D','E','F',}] = -1;
	stateMap[vector<char>{'1','2','3','4','5','6','7',}] = 31;
	stateMap[vector<char>{'8',}] = 32;
	stateMap[vector<char>{'9',}] = 33;
	stateMap[vector<char>{'E','e',}] = -1;
	stateMap[vector<char>{'x',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{'+','-',}] = -1;
	stateMap[vector<char>{'.',}] = -1;
	stateMap[vector<char>{'0',}] = 22;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','A','B','C','D','E','F',}] = -1;
	stateMap[vector<char>{'1','2','3','4','5','6','7',}] = 23;
	stateMap[vector<char>{'8',}] = 24;
	stateMap[vector<char>{'9',}] = 25;
	stateMap[vector<char>{'E','e',}] = 21;
	stateMap[vector<char>{'x',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{'+','-',}] = -1;
	stateMap[vector<char>{'.',}] = -1;
	stateMap[vector<char>{'0',}] = 22;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','A','B','C','D','E','F',}] = -1;
	stateMap[vector<char>{'1','2','3','4','5','6','7',}] = 23;
	stateMap[vector<char>{'8',}] = 24;
	stateMap[vector<char>{'9',}] = 25;
	stateMap[vector<char>{'E','e',}] = 21;
	stateMap[vector<char>{'x',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{'+','-',}] = -1;
	stateMap[vector<char>{'.',}] = -1;
	stateMap[vector<char>{'0',}] = 22;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','A','B','C','D','E','F',}] = -1;
	stateMap[vector<char>{'1','2','3','4','5','6','7',}] = 23;
	stateMap[vector<char>{'8',}] = 24;
	stateMap[vector<char>{'9',}] = 25;
	stateMap[vector<char>{'E','e',}] = 21;
	stateMap[vector<char>{'x',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{'+','-',}] = -1;
	stateMap[vector<char>{'.',}] = -1;
	stateMap[vector<char>{'0',}] = 22;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','A','B','C','D','E','F',}] = -1;
	stateMap[vector<char>{'1','2','3','4','5','6','7',}] = 23;
	stateMap[vector<char>{'8',}] = 24;
	stateMap[vector<char>{'9',}] = 25;
	stateMap[vector<char>{'E','e',}] = 21;
	stateMap[vector<char>{'x',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{'+','-',}] = -1;
	stateMap[vector<char>{'.',}] = -1;
	stateMap[vector<char>{'0',}] = 26;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7',}] = 12;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','A','B','C','D','E','F',}] = -1;
	stateMap[vector<char>{'1','2','3','4','5','6','7',}] = -1;
	stateMap[vector<char>{'8',}] = -1;
	stateMap[vector<char>{'9',}] = -1;
	stateMap[vector<char>{'E','e',}] = -1;
	stateMap[vector<char>{'x',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{'+','-',}] = -1;
	stateMap[vector<char>{'.',}] = 10;
	stateMap[vector<char>{'0',}] = 27;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','A','B','C','D','E','F',}] = -1;
	stateMap[vector<char>{'1','2','3','4','5','6','7',}] = 13;
	stateMap[vector<char>{'8',}] = 14;
	stateMap[vector<char>{'9',}] = 15;
	stateMap[vector<char>{'E','e',}] = -1;
	stateMap[vector<char>{'x',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{'+','-',}] = -1;
	stateMap[vector<char>{'.',}] = -1;
	stateMap[vector<char>{'0',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','A','B','C','D','E','F',}] = 28;
	stateMap[vector<char>{'1','2','3','4','5','6','7',}] = -1;
	stateMap[vector<char>{'8',}] = -1;
	stateMap[vector<char>{'9',}] = -1;
	stateMap[vector<char>{'E','e',}] = -1;
	stateMap[vector<char>{'x',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{'+','-',}] = -1;
	stateMap[vector<char>{'.',}] = -1;
	stateMap[vector<char>{'0',}] = 30;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','A','B','C','D','E','F',}] = -1;
	stateMap[vector<char>{'1','2','3','4','5','6','7',}] = 31;
	stateMap[vector<char>{'8',}] = 32;
	stateMap[vector<char>{'9',}] = 33;
	stateMap[vector<char>{'E','e',}] = -1;
	stateMap[vector<char>{'x',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{'+','-',}] = -1;
	stateMap[vector<char>{'.',}] = -1;
	stateMap[vector<char>{'0',}] = 30;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','A','B','C','D','E','F',}] = -1;
	stateMap[vector<char>{'1','2','3','4','5','6','7',}] = 31;
	stateMap[vector<char>{'8',}] = 32;
	stateMap[vector<char>{'9',}] = 33;
	stateMap[vector<char>{'E','e',}] = -1;
	stateMap[vector<char>{'x',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{'+','-',}] = -1;
	stateMap[vector<char>{'.',}] = -1;
	stateMap[vector<char>{'0',}] = 30;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','A','B','C','D','E','F',}] = -1;
	stateMap[vector<char>{'1','2','3','4','5','6','7',}] = 31;
	stateMap[vector<char>{'8',}] = 32;
	stateMap[vector<char>{'9',}] = 33;
	stateMap[vector<char>{'E','e',}] = -1;
	stateMap[vector<char>{'x',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{'+','-',}] = -1;
	stateMap[vector<char>{'.',}] = -1;
	stateMap[vector<char>{'0',}] = 30;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','A','B','C','D','E','F',}] = -1;
	stateMap[vector<char>{'1','2','3','4','5','6','7',}] = 31;
	stateMap[vector<char>{'8',}] = 32;
	stateMap[vector<char>{'9',}] = 33;
	stateMap[vector<char>{'E','e',}] = -1;
	stateMap[vector<char>{'x',}] = -1;
	dfa.emplace_back(stateMap);

	stateMap[vector<char>{'+','-',}] = -1;
	stateMap[vector<char>{'.',}] = -1;
	stateMap[vector<char>{'0',}] = 30;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7',}] = -1;
	stateMap[vector<char>{'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','A','B','C','D','E','F',}] = -1;
	stateMap[vector<char>{'1','2','3','4','5','6','7',}] = 31;
	stateMap[vector<char>{'8',}] = 32;
	stateMap[vector<char>{'9',}] = 33;
	stateMap[vector<char>{'E','e',}] = -1;
	stateMap[vector<char>{'x',}] = -1;
	dfa.emplace_back(stateMap);

	acceptingStates[2]=dNum;
	acceptingStates[3]=dNum;
	acceptingStates[4]=dNum;
	acceptingStates[5]=dNum;
	acceptingStates[6]=fpNum;
	acceptingStates[7]=fpNum;
	acceptingStates[8]=fpNum;
	acceptingStates[9]=fpNum;
	acceptingStates[10]=fpNum;
	acceptingStates[11]=oNum;
	acceptingStates[12]=oNum;
	acceptingStates[17]=dNum;
	acceptingStates[18]=dNum;
	acceptingStates[19]=dNum;
	acceptingStates[20]=dNum;
	acceptingStates[22]=fpNum;
	acceptingStates[23]=fpNum;
	acceptingStates[24]=fpNum;
	acceptingStates[25]=fpNum;
	acceptingStates[26]=oNum;
	acceptingStates[28]=hNum;
	acceptingStates[30]=fpNum;
	acceptingStates[31]=fpNum;
	acceptingStates[32]=fpNum;
	acceptingStates[33]=fpNum;


}



bool LexicalAnalyzer::next(Token &t, string &lexeme) {
    begin:
    if (input.eof()) {
        return false;
    }
    string lex = "";
    char curChar;
    int currentState = 0;
    nextCharacter:;
    while (input.peek() != EOF) {
        curChar = input.peek();
        bool inputMatched = false;
        for (auto & inp : dfa[currentState]) {
            for (auto & ch : inp.first) {
                if (curChar == ch) {
                    if (inp.second == -1) {
                        break;
                    }
                    inputMatched = true;
                    lex += curChar;
                    currentState = inp.second;
                    input.get();
                    goto nextCharacter;
                }
            }
        }
        if (!inputMatched) {
            if (acceptingStates.find(currentState) != acceptingStates.end()) {
                break;
            }
            if (ignores.find(currentState) != ignores.end())
                goto begin;
            cout << "Errored on state: " << currentState << endl;
            throw "Wrong";
        }
    }

    if (ignores.find(currentState) != ignores.end())
        goto begin;
    if (acceptingStates.find(currentState) == acceptingStates.end()) {
        cout << "Errored on state: " << currentState << endl;
        throw "Input doesn't match any token";
    }
    else {
        t = acceptingStates[currentState];
        lexeme = lex;
        return true;
    }
}
