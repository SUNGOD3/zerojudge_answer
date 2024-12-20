#include <iostream>
#include <algorithm>
using namespace std;
int t,n,a[1005];
bool judge(int x){
	int ct=0,tx=x;
	for(int i=n-1;i>=0;--i){
		ct+=a[i]/tx+(a[i]%tx==0?0:1);
		--tx;
		if(ct>x)return 0;
		if(tx<=0)return 0;
	}
	return 1;
}
int bs(int l,int r){
	if(l>r)return l;
	int m=(l+r)/2;
	if(judge(m)){
		return bs(l,m-1);
	}
	return bs(m+1,r);
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> t;
	for(int i=0;i<t;++i){
		cin >> n;
		int sum=0;
		for(int j=0;j<n;++j){
			cin >> a[j];
			sum+=a[j];
		}
		sort(a,a+n);
		cout << bs(n,sum) << "\n";
	}
} 
