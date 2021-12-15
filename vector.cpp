//
// Created by Ivan on 15.12.21.
//

#include "vector.h"

vector<int> GetVector(const int& n){
    vector<int> coll;
    int a;
    for(int i = 0; i < n; ++i){
        std::cin >> a;
        coll.push_back(a);
    }
    return coll;
}

int FindMax(vector<int> coll){
    int max;
    int max_it;
    max = coll[0];
    for(int i = 0; i < coll.size(); ++i){
        if(max < coll[i]){
            max = coll[i];
            max_it = i;
        }
    }
    return max_it;
}

int FindMin(vector<int> coll){
    int min;
    int min_it = 0;
    min = coll[0];
    for(int i = 0; i < coll.size(); ++i){
        if(min > coll[i]){
            min = coll[i];
            min_it = i;
        }
    }
    return min_it;
}

void ProcessingVector(vector<int> coll){
    int min1;
    int min2;
    int n = coll.size();
    int max;

    for(int j = 0; j < n - 1; ++j) {
            min1 = coll[FindMin(coll)];
            max = coll[FindMax(coll)];
            for (auto it1 = coll.begin(); it1 != coll.end(); it1++) {
                if (*it1 == min1) {
                    coll.erase(it1);
                    break;
                }
            }

            for (auto &tmp: coll) {
                std::cout << tmp << " ";
            }
            std::cout << std::endl;


            min2 = coll[FindMin(coll)];
            for (auto it1 = coll.begin(); it1 != coll.end(); it1++) {
                if (*it1 == min2) {
                    coll.erase(it1);
                    break;
                }
            }

            for (auto &tmp: coll) {
                std::cout << tmp << " ";
            }
            std::cout << std::endl;

            coll.push_back(min1 + min2);

            for (auto &tmp: coll) {
                std::cout << tmp << " ";
            }
            std::cout << std::endl;

            std::cout << "MAX ---> " << max << " " << "MIN ---> " << min1 << std::endl;
    }
}
