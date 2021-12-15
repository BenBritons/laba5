#include <iostream>
#include "multisets.h"
#include "strings.h"
#include "text_parser.h"
#include "string_pair.h"
#include "list_reading.h."
#include "pair_of_tasks.h"
#include "vector.h"
#include "streets_surnames.h"
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

    /*int a;
    int b;
    vector< pair <int, int> > collect(3);
    for(int i = 0; i < 3; ++i) {
        std::cin >> a;
        std::cin >> b;
        collect[i] = std::make_pair(a, b);
    }*/

    //OutPutAnser(collect);


    //MakeTask(ParseList("..\\data\\task5nums.txt"), "..\\data\\task5operations.txt", "..\\data\\task5anser.txt" );

   /* multiset<int> a = ParseList("..\\data\\task5nums.txt");
    MakeTask(a, "..\\data\\task5operations.txt", "..\\data\\task5anser.txt");
    *//*
    OutputExecutions(collect, 5);
*/
/*    vector<pair < string, string>> a;
    a = GetCollection(5);
    OutPutMap(CreateTable(a));*/
    vector<int> an;
    an = GetVector(5);
    ProcessingVector(an);

    return 0;
}