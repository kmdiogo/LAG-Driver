
#include <vector>
#include <map>
#include <iostream>
#include <fstream>
#include <unordered_set>
using namespace std;
enum Token{dNum,oNum,hNum,fpNum,};


class LexicalAnalyzer {
    public:
        LexicalAnalyzer(ifstream &input);
        void start();
        bool next(Token &t, string &lexeme);
        bool nextMatchesIgnore();
    private:
        vector< map<vector<char>, int> > dfa;
        map<int, Token> acceptingStates;
        unordered_set<int> ignores;
        ifstream & input;

};
