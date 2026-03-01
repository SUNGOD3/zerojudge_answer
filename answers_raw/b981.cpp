#include <iostream>
using namespace std;
string s;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> s){
		long tmp=0,ans=0,ba=0;
		for(int i=0;i<s.size();++i){
			if(s[i]>='0'&&s[i]<='9'){
				tmp*=10;
				tmp+=s[i]-'0';
			}
			else if(s[i]=='h'){
				if(s[i+1]=='o')i+=2;
				ans+=tmp*60*60*1000;
				tmp=0;
			}
			else if(s[i]=='m'&&s[i+1]!='s'){
				if(s[i+1]=='i')++i;
				ans+=tmp*60*1000;
				tmp=0;
			}
			else if(s[i]=='s'){
				ans+=tmp*1000;
				tmp=0;
			} 
			else if(s[i]=='.'){
				i++;
				tmp*=10;
				tmp+=s[i]-'0';
				ans+=tmp*100;
				tmp=0;
			}
			else if(s[i]=='m'&&s[i+1]=='s'){
				i++;
				ans+=tmp;
				tmp=0;
			}
		}
		cout << ans << "\n";
	}
} 
