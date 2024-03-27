#include<iostream>
#include<deque>
using namespace std;
// https://www.youtube.com/watch?v=WgMPrLX-zsA&list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA&index=20
int main(){
   deque<int> d;
   d.push_back(1);
   d.push_front(2);
//   for(int i:d){
//       cout<<i<<" ";
//   }
   // similarly pop_front & pop_back can be used 
   cout<<d.at(0)<<endl;
   // similarly front,back and empty can be used here also
}
