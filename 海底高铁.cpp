#include<bits/stdc++.h>
using namespace std;
long long p[10000+10];//目的地车站编号 
long long a[10000+10] , b[1000+10] , c[1000+10];//纸质票，IC卡，优惠票 
long long q[10000+10];//差分数组 
int main(){
	long long ans = 0;
	long long n,m;cin >> n >> m;//n个城市，m个目的地 
	for(int i = 1;i<=m;i++){
		scanf("%d" , &p[i]);
		//q[i] = p[i] - p[i-1]; 
	} 
	for(int i = 1;i<=n-1;i++) scanf("%d%d%d",&a[i],&b[i],&c[i]);
	for(int i = 1;i<m;i++){
		//int minn = min(p[i] , p[i+1]),maxn = max(p[i] , p[i+1]);
		if(p[i]>p[i+1]){
			q[p[i+1]]++;q[p[i]]--;
		}
		else {
			q[p[i+1]]--;q[p[i]]++;
		}
	}
	long long t = 0;
	for(int i = 1;i<=n-1;i++){
		t+=q[i];
		//ans += min(t*a[i],c[i]+t*b[i]);
		if(t*a[i]<c[i]+t*b[i]) ans+=t*a[i];
		else ans+=c[i]+t*b[i];
	}
	cout << ans;
	return 0;
} 
