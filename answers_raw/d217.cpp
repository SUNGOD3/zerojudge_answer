#include <bits/stdc++.h>
using namespace std;
int n;
string a,b;
bool aa[26],bb[26];
int main(){
	cin.tie(0); ios::sync_with_stdio(0);
	while(cin >> n){
		if(n==-1)break;
		memset(aa,0,sizeof(aa));
		memset(bb,0,sizeof(bb));
		cin >> a >> b;
		int ct=0,ans=0,wa=0;
		bool ls=0,wi=0;
		for(int i=0;i<a.size();++i){
			if(!aa[a[i]-'a'])++ans;
			aa[a[i]-'a']=1;
		}
		for(int i=0;i<b.size();++i){
			if(bb[b[i]-'a'])continue;
			bb[b[i]-'a']=1;
			if(aa[b[i]-'a']){
				++ct;
				if(ct==ans&&ls==0)wi=1;
			}
			else{
				++wa;
				if(wa>=7&&wi==0)ls=1;
			}
		}
		cout << "Round " << n << "\n";
		if(ls){
			cout << "You lose.\n";
		}
		else if(wi){
			cout << "You win.\n";
		}
		else{
			cout << "You chickened out.\n";
		}
	}
}
