#include <iostream>
using namespace std;
long long n,m,a[100005];
bool judge(long long v){
	int ct=0;
	for(int i=0;i<n;++i){
		ct+=a[i]/v;
		if(ct>=m)return 1;
	}
	return 0;
}
long long bs(long long l,long long r){
	if(l>r)return r;
	long long mid=(l+r)/2;
	if(judge(mid)){
		return bs(mid+1,r);
	}
	else{
		return bs(l,mid-1);
	}
}
int main(){
	cin.tie(0); ios::sync_with_stdio(0);
	cin >> n >> m;
	m*=2;
	for(int i=0;i<n;++i)
		cin >> a[i];
	cout << bs(0,1e9);
} 
