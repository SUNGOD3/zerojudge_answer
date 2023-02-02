#include <bits/stdc++.h>
using namespace std;
int t,n,v[1005][25],sz;
string a[25],s;
int main(){
	cin.tie(0); ios::sync_with_stdio(0);
	for(cin >> t;t--;){
		cin >> n;
		int wa[25]={};
		getline(cin,s);
		for(int i=0;i<n;++i)
			getline(cin,a[i]);
		memset(v,0,sizeof(v));
		for(;getline(cin,s)&&s.size();++sz){
			stringstream ss(s);
			for (int i=0;i<n;++i)
				ss >> v[sz][i];
		}
		for(int re=n;re>0;){
			int fr[25]={},mi=1e9,ma=-1e9,num=0,id,buf[25];
			for(int i=0;i<sz;++i)
				for(int j=0;j<n;++j)
					if(wa[v[i][j]-1]==0){
						fr[v[i][j]-1]++;
						break;
					}
			for(int i=0;i<n;++i)
				if(wa[i]==0){
					mi=min(mi,fr[i]);
					if(fr[i]>ma){
						id=i;
						buf[0]=i;
						num=1;
						ma=fr[i];
					}
					else if(fr[i]==ma)
						buf[num++]=i;
				}
			if(num==re||ma*2>sz){
				for(int i=0;i<num;++i)
					cout << a[buf[i]] << "\n";
				break;
			}
			for(int i=0;i<n;++i)
				if(wa[i]==0&&fr[i]==mi)wa[i]=1,--re;
		}
		if(t)cout << "\n";
	}
}
