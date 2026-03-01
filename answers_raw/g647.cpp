#include <iostream>
using namespace std;
long long t,x,y,xx,yy,v,ansx,ansy;
bool judge(long long  n){
	for(long long  i=0;i<=n;++i){
		if(x*i+xx*(n-i)>=v&&y*i+yy*(n-i)>=v)return 1;
	}
	return 0;
}
long long  bs(long long  l,long long  r){
	if(l>r)return l;
	long long  m=(l+r)/2;
	if(judge(m)){
		bs(l,m-1);
	}
	else{
		bs(m+1,r);
	}
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> t;
	while(t--){
		cin >> x >> y >> xx >> yy >> v;
		//100000 1 100000 1 100000 
		long long  mi=bs(0,v*2);
		ansx=ansy=0;
		for(long long i=0;i<=mi;++i){
			if(x*i+xx*(mi-i)>=v&&y*i+yy*(mi-i)>=v){
				ansx=i;
				ansy=mi-i;
				break;
			}
		}
		cout << ansx << " " << ansy << "\n";
	} 
} 
