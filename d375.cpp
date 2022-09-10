#include <iostream>
#include <algorithm>
using namespace std;
int ac,a[25],us[25],v[4],n,m,tot,t2,t4,ma,ta,jd[2];
void dfs(int tp,int it,int r){
	//++ta;
	if(r==0||jd[tp]){
		jd[tp]=1;
		return;
	} 
	for(int i=it+1;i<m;++i){
		if(us[i]==tp&&r>=a[i]){
			us[i]+=2;
			dfs(tp,i,r-a[i]);
			us[i]-=2;
		}
	}
}
void dfsf(int it,int r){
	//++ta;
	if(ac)return;	
	if(r==0){
		jd[0]=jd[1]=0;
		dfs(0,-1,t4);
		if(jd[0]==0)return;
		dfs(1,-1,t4);
		if(jd[1])ac=1;
		return;
	}
	for(int i=it+1;i<m;++i){
		if(r>=a[i]){
			us[i]=1;
			dfsf(i,r-a[i]);
			us[i]=0;
		}
	}
}

bool cmp(int x,int y){
	return (x<y)? 0:1;
}
int main(){
	cin.tie(0);cout.tie(0); ios::sync_with_stdio(false);
	cin >> n;
	while(n--){
		cin >> m;
		ac=tot=ma=0;
		for(int i=0;i<m;++i){
			cin >> a[i];
			tot+=a[i];
			ma=max(a[i],ma);
		}
		if(tot%4==0&&ma<=tot/4){
			t2=tot/2;
			t4=t2/2;
			sort(a,a+m,cmp);
			us[0]=1;
			dfsf(0,t2-a[0]);
			us[0]=0;
			if(ac)
				cout << "yes\n";
			else
				cout << "no\n";
		}
		else{
			cout << "no\n";
		}
	}
	//cout << "Total : " << ta ;
} 
//Total : 860250675
//Total : 530330080
//Total : 530238312
//Total : 4719815
//Total : 941062
//Total : 833298
