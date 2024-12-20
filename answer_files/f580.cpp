#include <iostream>
using namespace std;
struct die{
	int w[6];
};
int n,m,x,y;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n >> m;
	die a[n];
	for(int i=0;i<n;++i)
		for(int j=0;j<6;++j)
			a[i].w[j]=j;
	while(m--){
		cin >> x >> y;
		if(x>0&&y>0)
			swap(a[x-1],a[y-1]);
		else{
			if(y==-2){
				int b[6]={a[x-1].w[4],a[x-1].w[0],a[x-1].w[2],a[x-1].w[3],a[x-1].w[5],a[x-1].w[1]};
				for(int j=0;j<6;++j)
					a[x-1].w[j]=b[j];
			}
			else if(y==-1){
				int b[6]={a[x-1].w[2],a[x-1].w[1],a[x-1].w[5],a[x-1].w[0],a[x-1].w[4],a[x-1].w[3]};
				for(int j=0;j<6;++j)
					a[x-1].w[j]=b[j];
			}
		}
	}
	for(int i=0;i<n;++i)
		cout << a[i].w[0]+1 << " ";
} 
