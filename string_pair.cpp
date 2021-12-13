//
// Created by Ivan on 13.12.21.
//


#include "string_pair.h"
int IsStringInString(pair<string, string> strings){
    for(int i = 0; i < strings.first.size(); ++i){
        if(strings.first[i] == strings.second[0]){
            for(int j = 0 ; j < strings.second.size(); ++j, ++i){
                if(strings.first[i] != strings.second[j]){
                    break;
                } else if( j == (strings.second.size() - 1)){
                    return (i - j);
                }
            }
        }
    }
    return (-1);
}

void OutPutAnser(const vector<pair<string, string>>& collection){
    for(int i = 0; i < collection.size(); ++i){
        if(IsStringInString(collection[i]) == -1){
            std::cout << i + 1 << " -- No -- " <<-1 << std::endl ;
        } else{
            std::cout << i + 1 << " -- Yes -- " << IsStringInString(collection[i]) << std::endl ;
        }
    }
}