#include<bits/stdc++.h>
using namespace std;
int ans;
int main(){
	long long a,b;cin >> a >> b;
	long long A = 0,B = 0,p=0,q=0;
	while(a){
		long long t = a%2;
		A = A+t*pow(10,p);
		a/=2;
		p++;
	}
	while(b){
		long long t = b%2;
		B = B+t*pow(10,q);
		b/=2;
		q++;
	}
	//cout<<A<<' ' << B   <<' ';
	cout << A+B;
	return 0;
}
