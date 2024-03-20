#include <iostream>
using namespace std;

//int main(){
//	int n;
//	cin>>n;
//	int i=1;
////	int k=n;
//	while(i<=n){
//		int j=n-i;
//		while(j>=0){
//			cout<<" ";
//			j=j-1;
//					}
//		int h=1;
//		while(h<=i){
//			cout<<h;
//			h++;
//		}
//		int start=i-1;
//		while(start>0){
//			cout<<start;
//			start=start-1;
//		}
//		cout<<endl;
//		i++;
//	}
//}

//for n=5
//1 2 3 4 5 5 4 3 2 1
//1 2 3 4 * * 4 3 2 1
//1 2 3 * * * * 3 2 1
//1 2 * * * * * * 2 1
//1 * * * * * * * * 1

int main(){
	int n;
	cin>>n;
	int i=1;
	int h=n;
	while(i<=h){
		int j=1;
		while(j<=n){
			cout<<j;
			j++;
		}
		int start =(i-1)*2;
		while(start>0){
			cout<<"*";
			start=start-1;
		}
		int k=n;
		while(k>0){
			cout<<k;
			k--;
		}
		cout<<endl;
		n--;
		i++;
	}
}












