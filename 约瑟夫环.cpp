#include<bits/stdc++.h>
using namespace std;
int a[200];
int main(){
	int n , k , m;
	cin >> n >> k >> m;
	for(int i = 1;i<=n-1;i++){
		int p = m;
		for(int j = k;;j++){
			if(a[j%n]==1) continue;
			if(p==1 && a[j%n]!=1 ){
				a[j%n] = 1;
				for(int t = 1;;){
					if(a[(j%n+t)%n]!=1){
						k=(j%n+t)%n;
						break;
					}
					t++;
				}
				break; 
			}
			if(a[j%n]!=1){
				p--;
			}
		}
	}
	for(int i = 0;i<=n-1;i++){
		if(a[i]!=1){
			cout << i ;
		}
	}
} 
