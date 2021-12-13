//
// Created by Ivan on 13.12.21.
//
#include "text_parser.h"

string StringToWord(string s){
    for(int i = 0; i < s.size(); ++i){
        if(s[i] == ',' || s[i] == '.'|| s[i] == '?' || s[i] == '!')
            for(int j = i; j < s.size(); ++j){
                s[j] = s[j + 1];
            }
    }
    return s;
}


map <string, size_t> TextParser(const string& path){

    std::ifstream fin(path);

    map<string, size_t> table;
    string word;
    string tmp;
    while(std::getline(fin, word, ' ')) {
        tmp = StringToWord(word);
        if (tmp!= ""){
            table[tmp]++;
        }
    }

    return table;
};

#include "text_parser.h"
