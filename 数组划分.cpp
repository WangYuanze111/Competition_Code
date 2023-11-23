#include<bits/stdc++.h>
using namespace std;
int a[100010] , b[100010];
int gcd(int x,int y){
	if(y==0) return x;
	if(y>x) return gcd(x,y%x);
	return gcd(y,x%y);
}
int main(){
	//cout << gcd(12,18);
	int n;cin >> n;
	for(int i = 1;i<=n;i++) scanf("%d",&a[i]); 
	for(int i = 1;i<=n;i++) scanf("%d",&b[i]);
	for(int i = 1;i<=n;i++){
		for(int j = i;j<=n;j++) 
		if(gcd(a[i],b[j])!=1) {
			cout << "No" ;return 0;
		}
	}
	cout <<"Yes";return 0;
} 
