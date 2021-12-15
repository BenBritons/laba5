//
// Created by Ivan on 14.12.21.
//
#pragma once
#ifndef LABA5_LIST_READING_H
#define LABA5_LIST_READING_H
#include <set>
#include <fstream>
#include <vector>
#include <string>

using std::multiset;
using std::string;
using std::vector;
using std::set;


multiset<int> ParseList(const string& path);
void MakeTask(multiset<int> m_set, const string& input, const string& output);



#endif //LABA5_LIST_READING_H
