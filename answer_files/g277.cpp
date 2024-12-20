#include <iostream>
#include <map>
#include <set>
using namespace std;
long long l,r,n,a[300020],d[300020],it,rv,lv,tx;
map <long long,long long> mp;
map <long long,long long> :: iterator mit;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n;
	r=n-1;
	for(int i=0;i<n;++i){
		cin >> a[i];
		d[i+1]=d[i]+a[i];
		mp[a[i]]=i;
	}
	mit=mp.begin();
	while(l!=r){
		while(mit->second>r||mit->second<l){
			++mit;
		}
		it=mit->second;
		rv=d[r+1]-d[it+1];
		lv=d[it]-d[l];
		if(rv<lv){
			r=it-1;
		}
		else{
			l=it+1;
		}
	}
	cout << a[l];
}
