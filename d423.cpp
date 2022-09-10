#include <iostream>
#include <map>
using namespace std;
map <int,int> mp;
int k,ca,vt[10000001];
bool pr[10000001]={1,1};
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	mp[0]=0;
	for(int i=2;i<=3163;++i){
		for(int j=i+i;j<=10000000;j+=i){
			pr[j]=1;
		}
	}
	for(int i=2,v=0;v<=10000000;++i){
		int t=0;
		if(pr[i]==0){
			t=1;
		}
		else{
			int tmp=i;
			for(int j=2;tmp==i;++j){
				if(tmp%j==0){
					tmp/=j;
					++t;
					break;
				}
			}
			t+=vt[tmp];
		}
		vt[i]=t;
		v+=t;
		mp[v]=i;
	}
	while(cin >> k){
		if(k<0)break;
		cout << "Case " << ++ca << ": ";
		if(mp.find(k)==mp.end()){
			cout << "Not possible.\n";
		}
		else{
			cout << mp[k] << "!\n";
		}
	}
}
