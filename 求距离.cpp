#include<bits/stdc++.h>
using namespace std;
int a[110];
int maxn = -1000000;
int minn = 10000000;
int p , q; 
int main(){
	int n;cin >> n;
	for(int i = 1;i<=n;i++){
		cin >> a[i];
		if(a[i] > maxn){
			maxn = a[i];p = i;
		}
		if(a[i]<minn){
			minn = a[i];q=i;
		}
	}
	cout << max(max(p-1,n-p),max(q-1,n-q));
	return 0;
} 
