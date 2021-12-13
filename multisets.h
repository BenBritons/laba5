#pragma once
#ifndef STREAMH
#define STREAMH

#include <iostream>
#include <set>

template<typename T>
void  Output(T res){
  std::cout << res;
}

template<typename T>
T Input(){
  T tmp;
  std::cin >> tmp;
  return tmp;
}

void ReturnSet(const std::multiset <int>& collection);
std::multiset <int> SetConjunction( std::multiset <int>& m_set1,  std::multiset <int> m_set2);
std::multiset <int> SetDisjunction( std::multiset <int>& m_set1,  std::multiset <int> m_set2);
std::multiset <int> SetDifference( std::multiset <int> m_set1, const  std::multiset <int>&m_set2);
#endif
