//
// Created by Ivan on 15.12.21.
//

#include "pair_of_tasks.h"

void OutputExecutions(const vector<pair<int,int>>& tasks, int executions){
    bool flag = false;
    set<int> a;
    for(int i = 0; i <= executions; i++){
        cout << "For " << i << " second execute tasks number... ";
        if(i == 0){
            for(auto& tmp : tasks){
                a.insert(tmp.first);
            }
            for(auto& tmp : a){
                cout << tmp << " ";
            }
            cout <<  "\n";
            a.clear();
            continue;
        }
        for(auto& tmp : tasks){
            if(i % tmp.second == 0){
                flag = true;
                a.insert(tmp.first);
            }
        }
        for(auto& tmp : a){
            cout << tmp << " ";
        }
        a.clear();
        if(!flag){
            cout << "No tasks executable\n";
        } else{
            cout << "\n";
        }
    }
}
