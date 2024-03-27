#include<iostream>
#include<vector>
using namespace std;
// https://www.youtube.com/watch?v=WgMPrLX-zsA&list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA&index=20
int main(){
    vector<int> v;
    cout<<"Size: "<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"Size: "<<v.capacity()<<endl;
    // in vector whenever the capacity is full the new vector is creted double the size of prev & prev is deleted
    // capacity means how much space and size means how many elements
    v.push_back(2);
    v.push_back(3);
       cout<<"Size: "<<v.capacity()<<endl;
    v.push_back(3);
    v.push_back(3);
       cout<<"Size: "<<v.capacity()<<endl;
    cout<<"Size: "<<v.size()<<endl;
    // at, front, and back can also be used here 
    cout<<"before"<<endl;
    for(int i:v){
        cout<<i;
    }
    v.pop_back();
    cout<<"after"<<endl;
     for(int i:v){
        cout<<i;
    }
}
