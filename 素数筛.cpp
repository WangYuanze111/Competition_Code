#include<bits/stdc++.h>
using namespace std;
long long  a[1000010];
long long  b[1000010];
long long  p[1000010];
int main(){
	int n;cin >> n;
	for(int i = 1;i<=n;i++) cin >> a[i];
	for(int i = 1;i<=n;i++) cin >> b[i];
	for(int i = 1;i<=n;i++){
		for(int j = 2; (j*j<=a[i]);j++){
			if(a[i]%j == 0){
				p[j] = true; p[a[i]/j] = true;
			} 
		}
		if(a[i]!=1)
		p[a[i]] = true;
	}
	for(int i = 1;i<=n;i++){
		for(int j = 2;j*j<=b[i];j++){
			if(b[i]%j==0 && p[j]){
				cout << "No";return 0;
			}	
			if(b[i]%j==0 && p[b[i]/j]){
				cout << "No";return 0;
			}	
		}
		if(p[b[i]] == true){
			cout << "No" ;return 0;
		}
	}
	cout << "Yes";
	return 0;
} 
