#include<iostream>
using namespace std;

int first(int arr[],int size,int key){
	int s=0,e=size-1;
	int mid=s+(e-s)/2;
	int ans=-1;
	while(s<=e){
		if(arr[mid]==key){
			ans=mid;
			e=mid-1;
		} 
		else if(key>arr[mid]){
			s=mid+1;
		}
		else if(arr[mid]>key){
			e=mid-1;
		}
		mid=s+(e-s)/2;
	}
	return ans;
}
int last(int arr[],int size,int key){
	int s=0,e=size-1;
	int mid=s+(e-s)/2;
	int ans=-1;
	while(s<=e){
		if(arr[mid]==key){
			ans=mid;
			s=mid+1;
		} 
		else if(key>arr[mid]){
			s=mid+1;
		}
		else if(arr[mid]>key){
			e=mid-1;
		}
		mid=s+(e-s)/2;
	}
	return ans;
}


int main(){
    int n;
    cin >> n;
    int arr[n]; // Dynamically allocating array based on the value of n

    // Reading elements of the array
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int key;
    cin >> key;

    cout << "First occurrence of key is: " << first(arr, n, key) << endl;
    cout << "Last occurrence of key is: " << last(arr, n, key) << endl;
//If need to find total no. of occurence then:
// last-first +1 is the formula
    return 0;
}

