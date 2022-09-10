#include <iostream>
using namespace std;
int a[27][27],all[27];
int fa(int no){
	if(all[no]==no)return no;
	all[no]=fa(all[no]);
	return fa(all[no]);
}
bool jg(int no){
	int s=0;
	for(int i=0;i<no;++i)
		if(all[i]==i){
			if(s==1)return 0;
			s=1;
		}
	return 1;
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int t,n;
	char c;
	cin >> t;
	for(int ca=1;ca<=t;++ca){
		cin >> n;
		for(int i=0;i<26;++i)
			for(int j=0;j<26;++j)
				a[i][j]=0;
		for(int i=0;i<n;++i){
			for(int j=0;j<n;++j){
				cin >> a[i][j];
				if(j<n-1)cin >> c;
			}
		}
		cout << "Case " << ca << ":\n";
		for(int i=0;i<26;++i)
			all[i]=i;
		while(1){
			if(jg(n))break;
			int mn=1000000,x=-1,y=-1;
			for(int i=0;i<n;++i)
				for(int j=i+1;j<n;++j)
					if(a[i][j]&&a[i][j]<mn&&fa(all[i])!=fa(all[j])){
						mn=a[i][j];
						x=i;
						y=j;
					}
			char ax=x+'A',ay=y+'A';
			cout << ax << "-" << ay << " " << mn << "\n";
			a[x][y]=a[y][x]=0;
			int mnn=min(fa(all[x]),fa(all[y]));
			for(int i=0;i<n;++i)
				if(fa(all[i])==fa(all[x])||fa(all[i])==fa(all[y]))
					all[i]=mnn;
		}
	}
}
