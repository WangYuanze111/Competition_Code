#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n;cin >> n;
	long long ans = 0;
	if(n<0){
		cout <<'-';n=-n;
	}
	while(n){
		int a = n%10;
		ans*=10;
		ans+=a;
		n/=10;
	}
	cout << ans;
	return 0;
}
