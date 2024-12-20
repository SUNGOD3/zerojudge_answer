#include <iostream>
#include <map>
using namespace std;
map <string,int> ac;
map <int,int> bc;
int n,ans,al;
bool used[10],p[10000001]={1,1};
string a;
inline void dfs(string v){
	if(ac[v])return;
	ac[v]=1;
	int tmp=0;
	for(int i=0;i<v.length();++i){
		tmp*=10;
		tmp+=v[i]-'0';
	}
	if(p[tmp]==0&&bc[tmp]!=1)
		++ans;
	bc[tmp]=1;
	for(int i=0;i<al;++i){
		if(used[i]==0){
			string tmp=v;
			tmp+=a[i];
			used[i]=1;
			dfs(tmp);
			used[i]=0;
		}
	}
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	for(int i=2;i<=3163;++i){
		for(int j=i+i;j<10000001;j+=i){
			p[j]=1;
		}
	}
	cin >> n;
	while(n--){
		cin >> a;
		ans=0;
		ac.clear();
		bc.clear();
		al=a.length();
		for(int i=0;i<al;++i){
			string tmp;
			tmp+=a[i];
			used[i]=1;
			dfs(tmp);
			used[i]=0;
		}
		cout << ans << "\n";
	}
} 
