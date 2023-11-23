#include<bits/stdc++.h>
using namespace std;
int a,b;
int n;
int main(){
	cin >> n;
	for(int i = 1;;i++){			//代表第i组 
			for(int j = 1;j<=i;j++){		//代表第j个 
				if((i*i-i)/2+j == n){
					if(i%2==0){
						cout << j << '/'<<i+1-j; 
						return 0;
					}
					else{
						cout << i+1-j<<'/'<<j;
						return 0;
					}
				} 
			}
		}	
} 
