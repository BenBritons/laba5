#include <iostream>
#include "multisets.h"
#include "strings.h"
#include "text_parser.h"
#include "string_pair.h"
#include <set>


int main() {
    /*std::multiset<int> a = {1,2,2,2,2,4,1,4};
    std::multiset<int> b = {1,2,2,2,4,3,2,3};
    std::multiset<int> tmp = SetDifference(a, b);
    for (int it : tmp)
        std::cout << it << " ";*/

    /*Output(DifferentStrings());*/

    /*map<string, size_t> tmp = TextParser("..\\data\\input_text.txt");
    auto it = tmp.begin();
    for(; it != tmp.end(); it++){
        std::cout << it->first << " ---- " << it->second << std::endl;
    }*/

    string a;
    string b;
    vector< pair <string, string> > collect(5);
    for(int i = 0; i < 5; ++i){
        std::cin >> a;
        std::cin >> b;
        collect[i] = std::make_pair(a,b);
    }

    OutPutAnser(collect);

    return 0;
}