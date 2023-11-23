#include<bits/stdc++.h>
using namespace std;
string a ;

int main(){
	int n; cin >> n;
	if(n == 1) {
		cout << "Correct";return 0;
	}
	cin >> a;
	//cout << a;
	for(int i = 1;i<=n/2 + 1;i++){
		string b , c;
		for(int j = 0;j<i;j++){
			b+=a[j];
		}
		//cout << b << endl;
		for (int j = i;j>=1;j--){
			c+=a[n-j];
		}
		//cout << c << endl;
		if(b == c){
			//cout << b << ' ' << c << endl;
			cout << "Wrong Answer";return 0;
		}
	}
	cout << "Correct" ;return 0;
}
