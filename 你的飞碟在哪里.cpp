#include<bits/stdc++.h>
using namespace std;
int main(){
	string a , b;
	int a1 = 1 , b1 = 1;
	cin >> a >> b;
	for(int i = 0;i<a.length();i++){
		a1*=(a[i]-'A'+1);
		a1%=47;
	}
	for(int i = 0;i<b.length();i++){
		b1*=(b[i]-'A'+1);
		b1%=47;
	}
	if(a1 == b1){
		cout << "GO";return 0;
	}
	cout << "STAY" ;return 0;
} 
