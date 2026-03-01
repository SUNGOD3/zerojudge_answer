#include <bits/stdc++.h>
using namespace std;
int n,k;
int main(){
	cin.tie(0); ios::sync_with_stdio(0);
	for(string sx,sy;cin >> n;cout << "\n"){
		if(n==0)break;
		cin >> k;
		int ctw[101]={},ctl[101]={},x,y;
		for(int i=0;i<k*n*(n-1)/2;++i){
			cin >> x >> sx >> y >> sy;
			if(sx=="rock")
				(sy=="scissors")?++ctw[x],++ctl[y]:(sy=="paper")?++ctl[x],++ctw[y]:0;
			else if(sx=="scissors")
				(sy=="paper")?++ctw[x],++ctl[y]:(sy=="rock")?++ctl[x],++ctw[y]:0;
			else
				(sy=="rock")?++ctw[x],++ctl[y]:(sy=="scissors")?++ctl[x],++ctw[y]:0;
		}
		for(int i=1;i<=n;++i)
			(ctl[i]+ctw[i]==0)?cout << "-\n":cout << fixed << setprecision(3) << (double)ctw[i]/(double)(ctl[i]+ctw[i]) << "\n";
	}
} 
