#include<bits/stdc++.h>
using namespace std;
int s[5000+10][5000+10]; 
int main(){
	int n , r;
	cin >> n >> r;
	if(r >= 5001) r = 5001;
	for(int i = 1;i<=n;i++){
		int x , y , w;
		cin >> x >> y >> w;
		s[x+1][y+1] += w;
	}
	for(int i = 1 ; i<=5001;i++){
		for(int j = 1 ; j<i ; j++){
			s[i][j] = s[i-1][j] + s[i][j-1] - s[i-1][j-1] + s[i][j];
			s[j][i] = s[j-1][i] + s[j][i-1] - s[j-1][i-1] + s[j][i]; 
		}
		s[i][i] = s[i-1][i] + s[i][i-1] - s[i-1][i-1] + s[i][i];
	}
	int ans = -1;
	for(int i = r ; i<=5001;i++){
		for(int j = r;j<=5001;j++){
			ans = max(ans,s[i][j] - s[i-r][j] - s[i][j-r] + s[i-r][j-r]);
		}
	}
	cout << ans; 
	return 0;
} 
