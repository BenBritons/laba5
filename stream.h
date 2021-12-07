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

std::multiset <int> GetSet(int numbers);
void ReturnSet(std::multiset <int> collection);
int GetNumbers();
int BrakeOrContinue();
std::multiset <int> SetConjunction(const std::multiset <int>& m_set1, const std::multiset <int>& m_set2);
#endif
