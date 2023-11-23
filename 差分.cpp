#include<bits/stdc++.h>
using namespace std;
int a[100000+10];
int b[100000+10];
int main(){
	//b[1] = 0;
	int n , m;cin >> n >> m;
	for(int i = 1;i<=n;i++) cin >> a[i];
	for(int i = 1;i<=n;i++) b[i] = a[i]-a[i-1];
	for(int i = 1;i<=m;i++){
		int l , r , c;cin >> l >> r >> c;
		b[l]+=c;b[r+1]-=c;
	}
	for(int i = 1;i<=n;i++){
		a[i] = b[i]+a[i-1];
		cout << a[i] << ' ';
	}
	return 0;
} 
