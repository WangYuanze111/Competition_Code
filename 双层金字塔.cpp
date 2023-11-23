#include<bits/stdc++.h>
using namespace std;
int main(){
	int a;
	while(cin >> a){
		for(int i = 1 ;i<=a;i++){
			for(int j = a-i;j>=1;j--)
				cout << ' ';
			for(int p = 1;p<=i*2-1;p++)
				cout << '*';
			cout << endl;
		}
		for(int i = a-1 ;i>=1;i--){
			for(int j = a-i;j>=1;j--)
				cout << ' ';
			for(int p = 1;p<=i*2-1;p++)
				cout << '*';
			cout << endl;
		}
	}
	return 0;
} 
