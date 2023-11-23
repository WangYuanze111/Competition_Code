#include<bits/stdc++.h>
using namespace std;
int road[10010];
int main(){
	int L , M;
	cin >> L >> M;
	for(int i = 1;i<=M;i++){
		int a , b;cin >> a >> b;
		for(int j = a;j<=b;j++){
			road[j] = 1;
		} 
	}
	int ans = 0; 
	for(int i = 0;i<=L;i++){
		if(road[i]!=1) ans++;
	}
	cout << ans;
	return 0;
}
