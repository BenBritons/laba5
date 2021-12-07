#include "stream.h"
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


multiset <int> GetSet(int numbers){
  const string kMeetLabel = "Enter the values of your set, please";
  Output(kMeetLabel);
  multiset <int> multicollection;
  for(int i = 0; i < numbers; ++i){
    int tmp;
    tmp = Input<int>();
    multicollection.insert(tmp);
  }
  return multicollection;
}
void ReturnSet(const multiset <int>& collection){
  copy(collection.begin(), collection.end(), std::ostream_iterator<int>(cout, " "));
}

multiset <int> SetConjunction(const multiset <int>& m_set1, const multiset <int>& m_set2){
  multiset <int> tmp;
  //declaration iterators
  auto it2 = m_set2.begin();
  auto it1 = m_set1.begin();

  return tmp;
}

multiset <int> SetDisjunction(const multiset <int>& m_set1, const multiset <int>& m_set2){
    multiset <int> tmp;
    //declaration iterators
    auto it2 = m_set2.begin();
    auto it1 = m_set1.begin();
    //inserting values in tmp set
    while(it1 != m_set1.end() && it2 != m_set2.end()){


        tmp.insert(*it1++);
        tmp.insert(*it2++);
    }
    return tmp;
}

int BrakeOrContinue(){
  const string kContinueOrEndLabel = "\n If you want to continue enter \"1\", else enter \"0\" ";
  cout << kContinueOrEndLabel << endl;
  short macros;
  cin >> macros;
  if(macros == 1)
    return 1;
  else if(macros == 0)
    return 0;
}
