#include<bits/stdc++.h>
using namespace std;
int n;
int b[100];
int main(){
	cin >> n;
	for(int i = 1 ; i<=n;i++){
		int a = i;
		int j = 0;
		for(;a;){
			j++;
			b[j] = a%10;
			a/=10;
		}
		for(int k = 1;k<=j;k++){
			if(b[k]!=b[j-k+1]){
				break;
			}
			if(k==j){
				cout << i << endl;
			}
		}
	}
} 
