#include<bits/stdc++.h>
using namespace std;
double b[15] = {0,28.9,32.7,45.6,78,35,86.2,27.8,43,56,65};
int main(){
	int a[10][10];
	for(int i = 1;i<=5;i++)
		for(int j = 1;j<=5;j++)
			cin >> a[i][j];
	int m ,  n;cin >> m >> n;
	for(int i = 1;i<=5;i++){
		int cur;
		if(i==m) cur = n;
		else if(i==n) cur = m;
		else cur = i;
		for(int j = 1;j<=5;j++)
			cout << a[cur][j]<<' ';
		cout << endl;
	}
} 
