#include <iostream>
using namespace std;
//bubble sort
// complexity O(n^2)
void bubble(int arr[],int n){
	
	for(int i=1;i<n;i++){
		bool swapped=false;
		for(int j=0;j<n-i;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
				swapped=true;
			}
		}
		if(swapped==false){
			break;
		}
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
}

int main(){
	int arr[6]={10,1,7,6,14,9};
//	int arr[6]={1,2,3,4,5,6};
	bubble(arr,6);
}
