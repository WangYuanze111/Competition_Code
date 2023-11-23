//算法竞赛进阶指南例题  差分 
#include<bits/stdc++.h>
using namespace std;
int a[100000+10];
int b[100000+10];
int main(){
	int n ; cin >> n;
	long long p = 0 , q = 0;
	for(int i = 1;i<=n;i++){
		cin >> a[i];
		b[i] = a[i] - a[i-1];
		if(i!=1){
			if(b[i]>0) p+=b[i];
			else q-=b[i];
		} 
		
	}
	cout << min(p,q)+abs(p-q) << endl<<abs(p-q)+1;
	return 0; 
} 
