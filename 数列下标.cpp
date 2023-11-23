#include<bits/stdc++.h>
using namespace std;
int a[10010];
int main(){
	bool p = true;
	int n ; cin >> n;
	for(int i = 1;i<=n;i++) cin >> a[i];
	for(int i = 1;i<=n;i++){
		p = true;
		for(int j = i+1;j<=n;j++){
			if(a[j] > a[i]){
				cout << j << ' ';
				p  = false;
				break;
			}
		}
		if(p) cout << "0 ";
	}
	return 0;
}
