#include <iostream>
using namespace std;
int a[27][27],n,m,v;
char x,y,c;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> c >> n){
		m=0;
		for(int i=0;i<27;++i)
			for(int j=0;j<27;++j)
				a[i][j]=0;
		for(int i=0;i<n;++i){
			cin >> x >> y >> v;
			a[x-'A'][y-'A']=max(v,a[x-'A'][y-'A']);
		}
		for(int k=0;k<27;++k)
			for(int i=0;i<27;++i)
				for(int j=0;j<27;++j)
					if(a[i][k]&&a[k][j]&&i!=j)a[i][j]=max(a[i][j],a[i][k]+a[k][j]);
		for(int i=0;i<27;++i)
			m=max(a[c-'A'][i],m);
		cout << m << "\n";
	}
}
