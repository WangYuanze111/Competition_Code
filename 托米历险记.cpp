#include<bits/stdc++.h>
using namespace std;
int n;
int a , b , c;
int main(){
	cin >> n;
	for(int i = 1;i<=n;i++){
		int m;
		cin >> m;
		if(m == 25){
			a++;
			continue;
		}
		if(m == 50){
			if(a>=1){
				a--;
				b++;
				continue;
			}
			else {
				cout << "NO";
				return 0;
			}
		}
		if(m == 100){
			if((b>=1) && a>=1){
				b--;a--;c++;
				continue;
			}
			if(a>=3){
				a-=3;c++;
				continue;
			}
			cout  << "NO";
			return 0;
		}
	}
	cout << "YES";
	return 0;
} 
