#include <iostream>
using namespace std;
string s,is;
long long m;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> s){
		cin >> is >> m;
		if(is=="/"){
			long long st=0,r=0;
			for(int i=0;i<s.size();++i){
				r*=10;
				r+=s[i]-'0';
				if(r<m){
					if(st){
						cout << "0";
					}
				}
				else{
					st=1;
					int j=1;
					for(;j<10;++j)
						if(m*j>r)break;
					cout << j-1;
					r-=(m*(j-1));
				}
			}	
			if(st==0)
				cout << st;
			cout << "\n";
		}
		else{
			long long ans=0;
			for(int i=0;i<s.size();++i){
				ans*=10;
				ans+=s[i]-'0';
				ans%=m;
			}
			cout << ans << "\n";
		}
	}
}
