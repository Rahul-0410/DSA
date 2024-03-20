#include <iostream>
using namespace std;

//int main(){
//	int n;
//	cin>>n;
//	cout<<n;
//	return 0;
//}

int main(){

   int n;
   cin>>n;
   int i=1;
   while(i<=n){
     int j=1;
     // int row=i;
     while(j<=i){
       cout<<i+j-1<<" ";
       // cout<<row<<" ";
       // row++;
       j++;
     }
     cout<<endl;
     i++;
   }
 }
