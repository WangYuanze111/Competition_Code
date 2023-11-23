#include<bits/stdc++.h>
using namespace std;
int a[20][20]; 
int main(){
	int n;
	cin >> n;
	for(int i = 1;i<=n;i++){
		for(int j = 1;j<=n;j++){
			cin >> a[i][j];
			if(a[i][j]!=0 && j<i){
				cout << "NO";return 0;
			}
		}
	}
	cout << "YES";
	return 0;
}
