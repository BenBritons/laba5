//
// Created by Ivan on 14.12.21.
//

#include "list_reading.h"

multiset<int> ParseList(const string& path){
    std::ifstream fin(path);
    multiset<int> m_set;
    int tmp;
    while(fin >> tmp){
        m_set.insert(tmp);
    }
    return m_set;
}

void MakeTask(multiset<int> m_set, const string& input, const string& output){
    set<string> actions = {"add", "delete", "find_min", "is_exist"};
    string tmp;
    int number;
    std::ifstream fin(input);
    std::ofstream fout(output);
    while(fin >> tmp){
        if(actions.find(tmp) != actions.end()){
            if(tmp == "add"){
                fin >> number;
                m_set.insert(number);
            } else if(tmp == "delete"){
                fin >> number;
                for(auto it = m_set.begin(); it != m_set.end(); ++it){
                    if(*it == number){
                        m_set.erase(it);
                    }
                }
            } else if(tmp == "find_min"){
                int min = *m_set.begin();
                for(auto & temp : m_set){
                    if(temp < min){
                        min = temp;
                    }
                }
                fout << "Minimal value of the numbers -- " << min << "\n";
            } else if(tmp == "is_exist"){
                fin >> number;
                bool flag = false;
                for(auto & temp : m_set){
                    if(temp == number){
                        flag = true;
                        break;
                    }
                }
                if (flag){
                    fout << number << " exists in numbers \n";
                }else{
                    fout << number << " doesn't exist in numbers \n";
                }
            }
        }
    }
    for(auto & temp : m_set){
        fout << temp << " ";
    }
    fout << "\n";
}