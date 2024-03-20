#include <iostream>
#include <math.h>
using namespace std;

//decimal to binary
int main(){
	int n;
	cin>>n;
	int i=0;
	int ans=0;
	while(n!=0){
		int bit=n&1;
		ans=(bit* pow(10,i))+ans;
		n=n>>1;
		i++;
	}
	cout<<ans;
}

//binary to decinal

//int main() {
//    int n;
//    cin >> n;
//
//    int i = 0;
//    int ans = 0;
//
//    while (n != 0) {
//        int digit = n % 10;
//        if (digit == 1) {
//            ans =ans+  pow(2, i);
//        }
//        n = n / 10;
//        i++;
//    }
//
//    cout << ans;
//
//    return 0;  // Indicate successful program termination (optional)
//}
