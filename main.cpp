#include <iostream>
#include "stream.h"
#include <set>

using std::multiset;

multiset <int> UnitedSet( multiset <int> collect1, multiset <int> collect2 ){
  multiset <int> collect3(collect1.size() + collect2.size());
  for(int i = 0; i < collect1.size(); ++i){
    collect3[i] = collect1[i];
  }
  for(int i = 0; i < collect2.size(); ++i){
    collect3[i + collect1.size()] = collect2[i];
  }
  return collect3;
}

multiset <int> IntersectionSet(multiset <int> collect1, multiset <int> collect2){
  multiset <int> collect3(collect1.size() + collect2.size());
  for(int i = 0; i < collect1.size(); ++i){
    for(int j = 0; j < collect2.size(); ++j){
      if (collect1[i] == collect2[i])
    }
  }
}

void Task01(){
    int number = GetNumbers();
    multiset <int> collect1 = GetSet(number);
    multiset <int> collect2 = GetSet(number);
    ReturnSet(UnitedSet(collect1, collect2));

}

int main() {
  const string kFirstTaskCallLabel = "If you want to execute the first task please enter \"1\" \n";
  const string kSecondTaskCallLabel = "If you want to execute the second task please enter \"2\" \n";
  const string kThirdTaskCallLabel = "If you want to execute the third task please enter \"3\" \n";
  const string kFourthTaskCallLabel = "If you want to execute the fourth task please enter \"4\" \n";
  const string kFifthTaskCallLabel = "If you want to execute the fifth task please enter \"5\" \n";
  const string kSixthTaskCallLabel = "If you want to execute the sixth task please enter \"6\" \n";
  const string kSeventhTaskCallLabel = "If you want to execute the seventh task please enter \"7\" \n";
  const string kErrorMessageLabel = "Wrong number! Try again ";

  while(true) {
    Output(kFirstTaskCallLabel);
    Output(kSecondTaskCallLabel);
    Output(kThirdTaskCallLabel);
    Output(kFourthTaskCallLabel);
    Output(kFifthTaskCallLabel);
    Output(kSixthTaskCallLabel);
    Output(kSeventhTaskCallLabel);


    short choice;
    choice = Input<short>();
    switch (choice) {
      case 1:
        Task01();
        break;
      case 2:
        Task02();
        break;
      case 3:
        Task03();
        break;
      case 4:
        Task04();
        break;
      case 5:
        Task05();
        break;
      case 6:
        Task06();
        break;
      case 7:
        Task07();
        break;
      default:
        cout << kErrorMessageLabel ;
        break;
    }
    if(BrakeOrContinue() == 0)
      break;
  }
  return 0;
}