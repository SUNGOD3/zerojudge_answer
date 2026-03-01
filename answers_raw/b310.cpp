#include <iostream>
using namespace std;
long long int a[1000001],m,n,total;
bool judge(int t){
	long long int tmp=0;
	for(int i=0,j=-t;i<n;++i,++j){
		tmp+=a[i];
		if(j>=0)tmp-=a[j];
		if(tmp>=m)return 1;
	}
	return 0;
}
int bs(int l,int r){
	if(r<l)return l;
	int mid=(l+r)/2;
	if(judge(mid))
		return bs(l,mid-1);
	else
		return bs(mid+1,r);
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n >> m;
	for(int i=0;i<n;++i){
		cin >> a[i];
		total+=a[i];
	}
	if(total<m)
		cout << "GGGGGZ";
	else
		cout << bs(0,n);
} 
