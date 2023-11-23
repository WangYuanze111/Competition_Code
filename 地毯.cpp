#include<bits/stdc++.h>
using namespace std;
int p[1000+10][1000+10];
int q[1000+10][1000+10];
int main(){
	int n , m; cin >> n >> m;
	for(int i = 1;i<=m;i++){
		int a , b , c , d;
		cin >> a >> b >> c >> d; 
		q[min(a,c)][min(b,d)]++;
		q[min(a,c)][max(b,d)+1]--;
		q[max(a,c)+1][min(b,d)]--;
		q[max(a,c)+1][max(b,d)+1]++;
	}
	for(int i = 1;i<=n;i++){
		for(int j = 1;j<i;j++){
			p[i][j] = p[i-1][j]+p[i][j-1]-p[i-1][j-1]+q[i][j];
			p[j][i] = p[j-1][i]+p[j][i-1]-p[j-1][i-1]+q[j][i];
		}
		p[i][i] = p[i-1][i]+p[i][i-1]-p[i-1][i-1]+q[i][i];
	}
	for(int i = 1;i<=n;i++){
		for(int j = 1;j<=n;j++){
			cout << p[i][j] << ' ';
		}
		cout << endl;
	}
}
