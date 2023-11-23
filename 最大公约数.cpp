#include<bits/stdc++.h>
using namespace std;
unsigned long long gcd (unsigned long long x , unsigned long long y){
	if(x*y == 0)
		return x;
	//unsigned long long a = max(x , y),b = min(x,y);
	if(x>y)
	return gcd(y,x%y);
	else return gcd(x,y%x);
}
int main(){
	unsigned long long a , b;
	cin >> a>>b;
	cout << a*b/gcd(a,b);
	return 0;
}
