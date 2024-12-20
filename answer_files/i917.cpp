#include <iostream>
using namespace std;
string s;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(getline(cin,s)){
		s+=' ';
		int ans=0,sum=0;
		for(int i=0;i<s.size();++i){
			if(s[i]!=' '){
				int f=1,tmp=0;
				if(s[i]=='-'){
					f=-1;
					++i;
				}
				while(s[i]!=' '){
					tmp*=10;
					tmp+=s[i]-'0';
					++i;
				}
				sum+=tmp*f;
				if(sum<0)sum=0;
				else ans=max(ans,sum);
			}
		}
		cout << ans << "\n";
	}
} 
