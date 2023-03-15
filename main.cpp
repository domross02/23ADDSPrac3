#include "Truckloads.h"
#include "Reverser.h"
#include <iostream>
using namespace std;
int main(){
Truckloads t;
int numCrtates;
int loadSize;
    cin>>numCrtates;
    cin>>loadSize;
    cout<<t.numTrucks(numCrtates,loadSize)<<endl;
   Reverser r;
    std::string word;
    cin>>word;
  cout<<r.reverseString(word)<<endl;

}