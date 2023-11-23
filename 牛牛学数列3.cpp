#include<bits/stdc++.h>
using namespace std;
double ans = 0;
double deno = 0; 
int main(){
	int n;cin >> n;
	for(int i = 1;i<=n;i++){
		if(i%2)
			deno += i*2-1;
		else
			deno -= i*2-1;
		ans += 1/deno;
	}
	printf("%.3lf",ans);
	return 0;
}
