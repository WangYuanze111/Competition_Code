#include<bits/stdc++.h>
using namespace std;
string w;
char a[10000];
bool flag;
int ans;
int tot; 
int ans1;
char c;
int main(){
	cin >> w;w+=" ";
	int p = 0;
	int n = w.length()-1;
	while(cin >> c){
		//cout << a;
		if(c==' '){
			if(p==n){
				ans++;
			}
			p = 0;
			tot++;
			continue;
		}
		if(c==w[p]) {
			p++;
			tot++;
			continue;
		}
		tot++;
	}
	if(ans == 0){
		cout << -1;
	}
	else{
		cout << ans ;
	}
	return 0;
} 
