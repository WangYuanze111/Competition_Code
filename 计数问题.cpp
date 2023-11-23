#include<bits/stdc++.h>
using namespace std;
int sum[15];
void f(int p){
	while(p){
		sum[p%10]++;
		p/=10;
	}
}
int main(){
	int n , x;cin >>n >> x;
	for(int i = 1;i<=n;i++)
		f(i);
	cout << sum[x];
	return 0;
}
