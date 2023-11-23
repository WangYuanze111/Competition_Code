#include<bits/stdc++.h>
using namespace std;
int p[5000+10][5000+10];
int q[5000+10][5000+10];
int main(){
	int ans = -1;
	int n , m;cin >> n >> m;//n个目标，范围边长m 
	m--;
	for(int i = 1;i<=n;i++){
		int x , y , z;
		cin >> x >> y >> z;
		p[x+1][y+1] = z;
	}
	for(int i = 1;i<=5000;i++){
		for(int j = 1;j<=5000;j++){
			q[i][j] = q[i-1][j]+q[i][j-1]-q[i-1][j-1]+p[i][j];
		}
	}
//	for(int i = 1;i<=5;i++){
//		for(int j = 1;j<=5;j++){
//			cout << q[i][j] << ' '; 
//		}
//		cout << endl;
//	}
	for(int i = 1;i<=5000;i++){
		for(int j = m;j<=5000;j++){
			ans = max(ans , q[i][j]-q[i][j+m]-q[i+m][j]+q[i-m][j-m]);
			//cout << q[i][j]-q[i][j-m]-q[i-m][j]+q[i-m][j-m]<<' ';
		}
		//cout << endl;
	}
	cout << ans;
}
