#include<bits/stdc++.h>
using namespace std;
long long p[200000+10];
long long q[200000+10];
int main(){
	int n;cin >> n;
	for(int i = 1;i<=n;i++){
		cin >> p[i];
		q[i] = q[i-1]+p[i];
	}
	long long ans = 0;
	for(int i = 1;i<=n;i++){
		ans+=p[i]*(q[n]-q[i]);
	}
	cout << ans;
}
