#include <iostream>
using namespace std;
//  insertion sort

void insert(int arr [],int n){
	int j;
	for(int i=0;i<n;i++){
		int temp=arr[i];
		for(j=i-1;i>=0;j--){
			if(arr[j]>temp){
				arr[j+1]=arr[j];
			} else{
				break;
			}
		}
		arr[j+1]=temp;
	}
		for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
}

int main(){
	int arr[7]={10,1,7,4,8,2,11};
	insert(arr,7);
		
}
