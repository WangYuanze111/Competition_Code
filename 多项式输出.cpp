#include<bits/stdc++.h>
using namespace std;
int ans[200];
int b[200];
int main(){
	int a;cin >> a;
	for(int i = 1;i<=a+1;i++)
		cin >> b[i];
	for(int i = 1;i<=a+1;i++){
		if(b[i]==0)
			continue;
		if(b[i]>0 && i!=1) cout << '+';
		else if(b[i]<0) cout << '-';
		if(b[i]!=0){
			if(i!= a+1){
				if(abs(b[i])!=1 && ((a-i+1)!=1)){
					cout << abs(b[i]) << 'x' << '^'<<a-i+1; 
				}
				if(abs(b[i])!=1 && ((a-i+1)==1)){
					cout << abs(b[i]) << 'x' ; 
				}
				if(abs(b[i]) ==1 && ((a-i+1)!=1)){
					cout  << 'x' << '^'<<a-i+1; 
				}
				if(abs(b[i]) ==1 && ((a-i+1)==1)){
					cout  << 'x' ; 
				}
			}
			else cout << abs(b[i]);
		}
		
	}
	return 0;
}
