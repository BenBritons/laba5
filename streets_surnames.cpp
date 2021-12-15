//
// Created by Ivan on 15.12.21.
//

#include "streets_surnames.h"

map<string, set<string>> CreateTable(const vector<pair <string, string>>& adr_surnames){
    map<string, set<string>> table;
    for(auto & tmp : adr_surnames){
        table[tmp.first].insert(tmp.second);
    }
    return table;
}
vector<pair <string, string>> GetCollection(const int& n){
    vector<pair <string, string>> coll(n);
    for(int i = 0; i < n; ++i){
        cin >> coll[i].first;
        cin >> coll[i].second;
    }
    return coll;
}
void OutPutMap(const map<string, set<string>>& table){
    for(const auto & it1 : table){
        cout << it1.first << " ---> ";
        for(const auto & it2 : it1.second){
            cout << it2 << " ";
        }
        cout << "\n";
    }
}