#include <iostream>
#include <algorithm> 
#include <map>
using namespace std;
int n,m;
bool lit[28][28];
char x,y;
string s;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n;
	while(n--){
		cin >> s >> m;
		for(int i=0;i<27;++i){
			for(int j=0;j<27;++j){
				lit[i][j]=0;
			}
		}
		int id=1;
		map <int,int> mp;
		map <int,int> pm;
		for(int i=0;i<s.size();++i){
			if(mp[s[i]-'a']==0){
				mp[s[i]-'a']=id;
				pm[id]=s[i]-'a';
				++id;
			}
		}
		for(int i=0;i<s.size();++i){
			s[i]=mp[s[i]-'a']+'a';
		}
		for(int i=0;i<m;++i){
			cin >> x >> y;
			lit[x-'a'][y-'a']=1;
		}
		sort(s.begin(),s.end());
		int ok=0;
		do{
			bool k[28]={0},ac=1;
			for(int i=0;i<s.size()&&ac;++i){
				if(k[(pm[s[i]-'a'])]==0){
					for(int j=0;j<26&&ac;++j){
						if(lit[(pm[s[i]-'a'])][j]&&k[j]){
							ac=0;
							//cout << "del==\n";
						}
					}
				}
				k[(pm[s[i]-'a'])]=1;
			}
			if(ac){
				for(int i=0;i<s.size();++i){
					cout << (char)(pm[s[i]-'a']+'a');
				}
				cout << "\n";
				ok++;
			}
			if(ok>=10)break;
		}while(next_permutation(s.begin(),s.end()));
		if(ok==0){
			cout << "NANJ§A°ä§Ú\n"; 
		}
	}
}
