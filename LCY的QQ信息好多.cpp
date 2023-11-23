#include<bits/stdc++.h>
using namespace std;
struct Friend{
	int num , item;
	bool love , top;
};
Friend Name[1000005];
int n;
void Read(){
	cin >> n;
	for(int i = 1;i<=n;i++){
		cin >> Name[i].love >> Name[i].top >> Name[i].item;
		Name[i].num = i;
	}
}
int cmp(Friend a,Friend b){
	if(a.love!=b.love) return a.love>b.love;
	if(a.top!=b.top) return a.top>b.top;
	if(a.item!=b.item) return a.item<b.item;
	return a.num<b.num;
	
}
int main(){
	Read();
	sort(Name+1,Name+n+1,cmp);
	for(int i = 1;i<=n;i++){
		if(Name[i].item>99){
			cout << Name[i].num << ' ' << "99+" << endl;
		}
		else
		cout << Name[i].num << ' ' << Name[i].item << endl;
	}
}
