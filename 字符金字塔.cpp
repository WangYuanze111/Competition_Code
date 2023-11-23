#include<bits/stdc++.h>
using namespace std;
int main(){
	char c; cin >> c;
	int a = c-'A'+1;
	for(int i = 1 ;i<=a;i++){
			for(int j = a-i;j>=1;j--)
				cout << ' ';
			for(int p = 1;p<=i;p++)
				printf("%c",'A'-1+p); 
			for(int t = i-1;t >= 1;t--)
				printf("%c",'A'+t-1);
			cout << endl;
		}
	return 0;
}
