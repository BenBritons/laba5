#include "multisets.h"
#include <iostream>
#include <set>
#include <vector>
#include <iterator>

using std::multiset;
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::multiset;



void ReturnSet(const multiset <int>& collection){
  copy(collection.begin(), collection.end(), std::ostream_iterator<int>(cout, " "));
}

multiset <int> SetConjunction( multiset <int>& m_set1,  multiset <int> m_set2){
    multiset <int> tmp;

    for(int it1 : m_set1){
        for(auto it2 = m_set2.begin(); it2 != m_set2.end(); ++it2){
            if(it1 == *it2){
                m_set2.erase(it2);
                break;
            }
        }

    }

    tmp = m_set1;
    for(auto a : m_set2){
        tmp.insert(a);
    }

    return tmp;
}
multiset <int> SetDisjunction( multiset <int>& m_set1,  multiset <int> m_set2){
    multiset <int> tmp;

    for(int it1 : m_set1){
        if(m_set2.find(it1) != m_set2.end()){
            tmp.insert(it1);
            m_set2.erase(m_set2.find(it1));
        }
    }

    return tmp;
}

multiset <int> SetDifference(multiset <int> m_set1, const  multiset <int>&m_set2){

    for(auto it2 : m_set2){
        if(m_set1.find(it2) != m_set1.end()){
            m_set1.erase(m_set1.find(it2));
        }
    }


    return m_set1;
}
