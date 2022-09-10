#include <iostream>
#include <bitset> 
using namespace std;
int n,ans,x,ct,d,cn;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n;
	bitset <2505> edg[2505];
	for(int i=0;i<n;++i){
		cin >> d;
		edg[i].reset();
		for(int j=0;j<d;++j){
			cin >> x;
			edg[i].set(x-1);
		}
	}
	for(int i=0;i<n;++i)
		for(int j=i+1;j<n;++j){
			bitset <2505> jd(edg[i]&edg[j]);
			if(jd.any())++ans;
		}
	cout << ans;
} 
