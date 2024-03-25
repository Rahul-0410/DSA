#include <iostream>
using namespace std;

void bubble(int arr[],int n){
	for(int i=1;i<n;i++){
		for(int j=0;j<n-i;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
}

int main(){
	int arr[6]={10,1,7,6,14,9};
	bubble(arr,6);
}
