#include <bits/stdc++.h>
using namespace std;
int n,ca,p[10005],x,y;
bool isp(int x){
	for(int i=2;i<=sqrt(x);++i){
		if(x%i==0)return 0;
	}
	return 1;
}
int main(){
	cin.tie(0); ios::sync_with_stdio(0);
	for(int i=0;i<=10000;++i){
		if(isp(i*i+i+41)){
			++p[i];
		}
		if(i)p[i]+=p[i-1];
	}
	while(cin >> x >> y){
		cout << fixed << setprecision(2) << (double)(p[y]-(x==0?0:p[x-1]))/(y-x+1)*100.0+0.000001 << "\n";
	}
}
