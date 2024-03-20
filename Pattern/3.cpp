#include <iostream>
using namespace std;

//int main(){
//	int n;
//	cin>>n;
//	int i=1;
//	while(i<=n){
//		int j=1;
//		while(j<=i){
//			cout<<i-j+1;
//			j++;
//		}
//		cout<<endl;
//		i++;
//	}
//}

int main(){
	int n;
	cin>>n;
	int i=1;
	while(i<=n){
		int j=0;
		//or 'A'+j-1 for A B C
		while(j<n){
//			char ch='A'+i-1;
			char ch='A'+j;
			cout<<ch<<" ";
			j++;
		}
		cout<<endl;
		i++;
	}
}
