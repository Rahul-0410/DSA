#include <iostream>
using namespace std;

void change(int arr[],int size){
	
	for(int i=0;i<5;i+=2){
		if(i+1<size){
			swap(arr[i],arr[i+1]);
		}
	}
}

int main(){
	int arr[5]={56,78,9,34,5};
	change(arr,5);
	for(int i=0;i<5;i++){
		cout<<arr[i]<<endl;
	}
	
}
