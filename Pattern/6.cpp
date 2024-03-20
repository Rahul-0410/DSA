#include <iostream>

using namespace std;

//int main(){
//	int n;
//	cin>>n;
//	int i=1;
//	while(i<=n){
//		int j=1;
//		while(j<=n-i){
//			cout<<" ";
//			j++;
//		}
//		int k=1;
//		while(k<=i){
//			cout<<"*";
//			k++;
//		}
//		cout<<endl;
//		i++;
//	}
//}


//int main(){
//	int n;
//	cin>>n;
//	int i=1;
//	while(i<=n){
//		int j=0;
//		while(j<=n-i){
//			cout<<"*";
//			j++;
//		}
//		int k=1;
//		while(k<=i){
//			cout<<" ";
//			k++;
//		}
//		cout<<endl;
//		i++;
//	}
//	int k=n;
//	while(i<=k){
//		//n-i+1;
//		int j=1;
//		while(j<=n){
//			cout<<"*";
//			j++;
//		}
//		cout<<endl;
//		n--;
//		i++;
//	}
//}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    int i = 0;
    while (i < n) {
        int j = 0;
        // Print leading spaces
        while (j < i) {
            cout << " ";
            j++;
        }
        
        // Print stars
        int k = 0;
        while (k < n - i) {
            cout << "*";
            k++;
        }

        cout << endl;
        i++;
    }

    return 0;
}


