#include<bits/stdc++.h>
using namespace std;
int b[20];
int main(){
	for(int i = 8;i>=1;i--)
		b[i]=0;
	int a;
	cin >> a;
	int c = 0;
	for(;a>0;){
		c++;
		//cout << a%2;
		b[c] = a%2;
		a=a/2;
	}
	cout << "Ô­ÂëÊÇ"; 
	for(int i = c;i>=1;i--)
		cout << b[i];
	main();
	return 0;
} 
