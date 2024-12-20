#include <iostream>
#include <algorithm>
using namespace std;
long long int n,a[20001],m,mi=20000000;
bool judge(long long int t){
	long long int tmp=m;
	for(int i=0;i<n;++i)
		if(a[i]<t){
			tmp-=(t-a[i])*(t-a[i]);
			if(tmp<0)return 0;
		}
	return 1;
}
long long int bs(long long int l,long long int r){
	if(l>r)return r;
	long long int mon=(l+r)/2;
	if(judge(mon))
		return bs(m+1,r);
	else
		return bs(l,m-1);
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n >> m;
	for(int i=0;i<n;++i)
		cin >> a[i];
	sort(a,a+n);
	cout << bs(a[0],20000000) ;
}
