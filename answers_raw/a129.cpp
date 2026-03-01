#include <iostream>
#include <algorithm>
using namespace std;
int n,m,s[100001];
struct p{
	int x,y,v;
};
p a[10000001];
bool cmp(p xx,p yy){
	if(xx.v<yy.v||(xx.v==yy.v&&xx.y<yy.y)||(xx.v==yy.v&&xx.y==yy.y&&xx.x<yy.x))return 1;
	return 0;
}
int fd(int xx){
	if(s[xx]==xx)return xx;
	return s[xx]=fd(s[xx]);
}
void un(int xx,int yy){
	s[yy]=fd(s[xx]);
}
int main(){
	cin.sync_with_stdio(false), cin.tie(0);
	while(cin >> n >> m){
		for(int i=0;i<n;++i){
			s[i]=i;
		}
		for(int i=0;i<m;++i){
			cin >> a[i].x >> a[i].y >> a[i].v;
		}
		sort(a,a+m,cmp);
		long long int num=0,ans=0;
		for(int i=0;i<m;++i){
			//cout << a[i].x << " " << a[i].y << " " << a[i].v << "\n"; 
			int fdx=fd(a[i].x),fdy=fd(a[i].y);
			if(fdx!=fdy){
				un(fdx,fdy);
				++num;
				ans+=a[i].v;
			}
		}
		if(num==n-1){
			cout << ans << '\n';
		}
		else{
			cout << "-1\n";
		}
	}
}
