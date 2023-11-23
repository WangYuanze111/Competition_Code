#include<bits/stdc++.h>
using namespace std;
int a[1000000+10];
int main(){
	a[0] = -1;
	int n , m;
	cin >> n >> m;
	for(int i = 1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i = 1;i<=m;i++){
		int p;
		cin >> p;
		int l = 1,r = n,mid = (l+r)/2 ;
		while(l<=r){
			if(a[mid]<p){
				l = mid+1;
				mid = (l+r)/2 ;
			}
			
			else if(a[mid]==p && a[mid-1]!=p){
				printf("%d ",mid);
				break;
			}
			else{
				r = mid-1;
				mid = (l+r)/2;
			}
			//cout << "l="<<l<<' ' <<"r="<<r<<' ' <<"mid="<<mid<<endl;
		}
		if(a[mid]!=p) printf("-1 ");
	}
} 
