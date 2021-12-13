//
// Created by Ivan on 13.12.21.
//
#include "strings.h"

size_t DifferentStrings(){
    size_t num_of_strings;
    std::set<string> strings;
    string s;

    std::ifstream fin("..//data//input_strings.txt");

    while (std::getline(fin, s)) {
        if (strings.find(s) == strings.end()) {
            strings.insert(s);
        }
    }

    num_of_strings = strings.size();
    return num_of_strings;
}