#include <iostream>
#include <set>
using namespace std;
int n,k,mah,a[200005],ct[200005],b[5005];
bool judge(int x){
	int it=0,c=0,g=0;
	for(int i=0;i<n;++i){
		if(a[i]>=x){
			++c;
		}
		else{
			if(c){
				ct[it++]=c;
				c=0;
			}
		}
	}
	if(c){
		ct[it++]=c;
		c=0;
	}
	int i=0;
	while(g<k){
		if(ct[i]>=b[g]){
			ct[i]-=b[g];
			++g;
		}
		else{
			++i;
			if(i==it)return 0;
		}
	}
	return 1;
}
int bs(int l,int r){
	if(l>r)return r;
	int m=(l+r)/2;
	if(judge(m)) return bs(m+1,r);
	return bs(l,m-1);
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n >> k;
	for(int i=0;i<n;++i){
		cin >> a[i];
		mah=max(a[i],mah);
	}
	for(int i=0;i<k;++i)
		cin >> b[i]; 
	cout << bs(0,mah);
}
 
