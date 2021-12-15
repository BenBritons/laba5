//
// Created by Ivan on 15.12.21.
//

#ifndef LABA5_STREETS_SURNAMES_H
#define LABA5_STREETS_SURNAMES_H

#include <vector>
#include <iostream>
#include <map>
#include <string>
#include <set>

using std::pair;
using std::string;
using std::vector;
using std::cout;
using std::cin;
using std::map;
using std::pair;
using std::set;


map<string, set<string>> CreateTable (const vector<pair <string, string>>& adr_surnames);
vector<pair <string, string>> GetCollection(const int& n);
void OutPutMap(const map<string, set<string>>& table);


#endif //LABA5_STREETS_SURNAMES_H
