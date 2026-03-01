#include <iostream>
#include <map>
using namespace std;
int n,tans,ans=1,g;
string s;
map <string,int> tot;
map <string,int> mp;
map <string,int> st;
map <string,int> :: iterator it,it2;
int main(){
	cin.tie(0); cout.tie(0);ios::sync_with_stdio(false);
	while(getline(cin,s)){
		if(s=="@"||s=="#"){
			ans*=mp.size();
			if(n==0){
				st=mp;
			}
			else{
				for(it=st.begin();it!=st.end();++it){
					if(mp.find(it->first)==mp.end()){
						++it;
						it2=it;
						--it;
						st.erase(it->first);
						it=it2;
					}
				}
			}
			mp.clear();
			++n; 
		}
		else{
			tot[s]++;
			mp[s]++;
			tans=max(tans,tot[s]);
		}
		if(s=="#")break;
	}
	cout << ans << "\n";
	for(it=tot.begin();it!=tot.end();++it){
		if(it->second==tans){
			if(g)cout << ",";
			g=1;
			cout << it->first ;
		}
	}
	cout << "\n";
	g=0;
	for(it=st.begin();it!=st.end();++it){
		if(g)cout << ",";
		g=1;
		cout << it->first ;
	} 
	cout << '\n';
}
