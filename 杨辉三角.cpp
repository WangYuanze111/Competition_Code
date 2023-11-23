#include<bits/stdc++.h>
using namespace std;
int b[40][40];
int main(){
	int a;
	cin >> a;
	b[1][1] = 1;
	for(int i = 2;i<=a;i++){
		for(int j = 1;j<=i;j++){
			b[i][j] = b[i-1][j]+b[i-1][j-1];
		}
	}
	for(int i = 1;i<=a;i++){
		for(int j = 1;j<=i;j++){
			cout << b[i][j];
			if(j!=i) cout << ' ';
		}
		cout << endl;
	}
	return 0;
} 
