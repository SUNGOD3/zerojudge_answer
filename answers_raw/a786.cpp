#include <iostream>
#include <map>
using namespace std;
string s;
map <string,string> mp;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	getline(cin,s);
	while(getline(cin,s)){
		if(s=="[1337]")break;
		int i=0;
		string x,y;
		for(i=0;i<s.length();++i){
			if(s[i]==':')break;
			x+=s[i];
		}
		for(i++;i<s.length();++i){
			y+=s[i];
		}
		mp[x]=y;
	} 
	while(getline(cin,s)){
		if(s=="[3ND]")break;
		string tmp;
		s+=' ';
		for(int i=0;i<s.length();++i){
			if(s[i]==' '){
				if(mp.find(tmp)==mp.end()){
					cout << tmp;
				}
				cout << mp[tmp] << " ";
				tmp.clear(); 
			}
			else{
				tmp+=s[i];
			}
		}
		cout << "\n";
	}
} 
