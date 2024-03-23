#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int key){
	int start=0;
	int end=size-1;
	if(sizeof(arr)==1){
		return (arr[0]==key ? 0:-1);
	}
	if(sizeof(arr)==0){
		return -1;
	}
//	int mid=(start+end)/2;
	// as integer can go out of range so we will not use the above one
	int mid=start+(end-start)/2;
	while(start<=end){
		if(arr[mid]==key){
			return mid;
		}
		if(arr[mid]<key){
			start=mid+1;
		}else{
			end=mid-1;
		} 
		mid=start+(end-start)/2;
	}
	return -1;
}

int main(){
	int even[6]={2,4,6,8,12,16};
	int odd[5]={3,8,11,14,16};
	int one[1]={3};
	int one1=binarySearch(one,1,3);
	cout<<one1<<endl;
	int bin=binarySearch(even,6,16);
	int bin2=binarySearch(odd,5,3);
	cout<<bin<<endl;
	cout<<bin2;
}
