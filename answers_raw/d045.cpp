#include <bits/stdc++.h>
using namespace std;
int t,a[1005],b[1005],c[1005],na,nb,nc;
bool ta[10005],tb[10005],tc[10005];
int main(){
	cin.tie(0); ios::sync_with_stdio(0);
	cin >> t;
	for(int ca=1;ca<=t;++ca){
		memset(ta,0,sizeof(ta));
		memset(tb,0,sizeof(tb));
		memset(tc,0,sizeof(tc));
		cin >> na;
		int sa=0,sb=0,sc=0,ma=0;
		for(int i=0;i<na;++i){
			cin >> a[i];
			ta[a[i]]=1;
		}
		cin >> nb;
		for(int i=0;i<nb;++i){
			cin >> b[i];
			tb[b[i]]=1;
		}
		cin >> nc;
		for(int i=0;i<nc;++i){
			cin >> c[i];
			tc[c[i]]=1;
		}
		sort(a,a+na);
		sort(b,b+nb);
		sort(c,c+nc);
		for(int i=0;i<na;++i){
			if(!tb[a[i]]&&!tc[a[i]])++sa;
		}
		for(int i=0;i<nb;++i){
			if(!ta[b[i]]&&!tc[b[i]])++sb;
		}
		for(int i=0;i<nc;++i){
			if(!ta[c[i]]&&!tb[c[i]])++sc;
		}
		ma=max(sa,max(sb,sc));
		cout << "Case #" << ca << ":\n";
		if(ma==sa){
			cout << "1 " << ma;
			for(int i=0;i<na;++i){
				if(!tb[a[i]]&&!tc[a[i]])cout << " " << a[i];
			}
			cout << "\n";
		}
		if(ma==sb){
			cout << "2 " << ma;
			for(int i=0;i<nb;++i){
				if(!ta[b[i]]&&!tc[b[i]])cout << " " << b[i];
			}
			cout << "\n";
		}
		if(ma==sc){
			cout << "3 " << ma;
			for(int i=0;i<nc;++i){
				if(!ta[c[i]]&&!tb[c[i]])cout << " " << c[i];
			}
			cout << "\n";
		}
	}
}
