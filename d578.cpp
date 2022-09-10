#include <iostream>
#include <map>
using namespace std;
long long int n,m,type2=1001*129,buffer[1001][129];
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> n >> m){
		if(n==0&&m==0)break;
		long long int k=n*m-1;
		string a;
		if(type2>=k){
			map <string,int> s;
			map <string,int> ::iterator i;
			getline(cin,a);
			while(k--){
				getline(cin,a);
				++s[a];
			}
			for(i=s.begin();i!=s.end();++i){
				if(i->second%m){
					cout << i->first << "\n";
					break; 
				}
			}
		}
		else{
			getline(cin,a);
			string rt;
			while(k--){
				getline(cin,a);
				int al=a.length();
				for(int i=0;i<al;++i){
					++buffer[i][a[i]];
				}
			}
			for(int i=0;i<1000;++i){
				int s=0;
				for(int j=0;j<128;++j){
					if(buffer[i][j]%m){
						rt+=(char)j;
						s=1;
						break;	
					}
				}
				if(s==0)break;
			}
			cout << rt << "\n";
		}
	}
} 
