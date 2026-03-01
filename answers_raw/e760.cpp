#include <bits/stdc++.h>
using namespace std;
int dis[1<<20],n,m,ca;
bool has[1<<20];
struct bd{
	int tm;
	string nd,gt;
};
bd a[105];
bool cnt(int id,int v){
	for(int i=0;i<n;++i){
		int k=v%2;
		if((a[id].nd[i]=='+'&&k==0)||(a[id].nd[i]=='-'&&k==1))return 0;
		v/=2;	
	}
	return 1;
}
int tran(int id,int v){
	string rt;
	int rtv=0;
	for(int i=0;i<n;++i){
		int k=v%2;
		if(a[id].gt[i]=='+')k=1;
		else if(a[id].gt[i]=='-')k=0;
		rt+=(k+'0');
		v/=2;	
	}
	for(int i=n-1;i>=0;--i){
		rtv*=2;
		rtv+=rt[i]-'0';
	}
	return rtv;
}
void djsk(int bst){
	queue <pair <int,int>> pq;//dis v
	pq.push({0,bst});
	dis[bst]=0;
	while(!pq.empty()){
		int ft=pq.front().first,sec=pq.front().second;
		pq.pop();
		for(int i=0;i<m;++i){
			if(cnt(i,sec)){
				int tt=tran(i,sec);
				if(dis[tt]>dis[sec]+a[i].tm){
					dis[tt]=dis[sec]+a[i].tm;
					pq.push({dis[tt],tt});
				}
			}
		}
	}
	return;
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> n >> m){
		if(n+m==0)break;
		memset(has,0,sizeof(has));
		for(int i=0;i<(1<<n);++i)dis[i]=1e9;
		for(int i=0;i<m;++i)cin >> a[i].tm >> a[i].nd >> a[i].gt;
		djsk((1<<n)-1);
		cout << "Product " << ++ca << "\n";
		(dis[0]>=1e9)?cout << "Bugs cannot be fixed.\n":cout << "Fastest sequence takes " << dis[0] << " seconds.\n";
		cout << "\n";
	}
} 
