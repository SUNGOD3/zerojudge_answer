#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
struct n{
	string name,t;
	int num,ns;
};
int it,pr[10001]={1,1},pr2[1231],it2;
n a[100001];
inline int p(int k){
	int rt=0;
	for(int i=0;pr2[i]<=k;++i){
		if(k%pr2[i]==0){
			k/=pr2[i];
			rt+=pr2[i];
		}
	}
	return rt;
}
inline bool cmp(n x,n y){
	if(x.ns>y.ns||(x.ns==y.ns&&x.t<y.t)||(x.ns==y.ns&&x.t==y.t&&x.num>y.num))return 1;
	return 0;
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	for(int i=2;i<101;++i){
		for(int j=i+i;j<10001;j+=i){
			pr[j]=1;
		}
	}
	for(int i=2;i<=10001;++i){
		if(pr[i]==0){
			pr2[it2]=i;
			++it2;
		}
	}
	while(cin >> a[it].name){
		int nl=a[it].name.length();
		string tmp;
		int tmp2=0;
		for(int i=0;i<nl;++i){
			if(a[it].name[i]>='0'&&a[it].name[i]<='9'){
				tmp2*=10;
				tmp2+=a[it].name[i]-'0';
			}
			else{
				tmp+=a[it].name[i];
			}
		}
		a[it].t=tmp;
		a[it].num=tmp2;
		a[it].ns=p(tmp2);
		++it;
	}
	sort(a,a+it,cmp);
	for(int i=0;i<it;++i){
		cout <</* a[i].ns << " " << a[i].num << " " << a[i].t << " " <<*/ a[i].name << "\n";
	}
} 
