#include <iostream>
#include <map>
using namespace std;
int n,sl,t,v;
string s;
char c;
long long gcd( long long a, long long b ){
    if( b==0 )
        return a;
    return gcd( b, a%b );
}

int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> t;
	while(t--){
		cin >> n >> s;
		sl=s.size();
		int tot=0;
		map <char,int> mp;
		for(int i=0;i<n;++i){
			cin >> c >> v;
			mp[c]=v; 
			tot+=v;
		}
		if(tot<sl){
			cout << "1\n";
		}
		else{
			long long sn=1,mm=1;
			for(int i=0;i<sl;++i){
				sn*=mp[s[i]];
				mm*=tot;
				mp[s[i]]--;
				tot--;
			}
			sn=mm-sn;
			if(sn%mm==0){
				cout << sn/mm << " "; 
				if(sn/mm==0){
					cout << "DD真幸運!!我要下注!\n";
				}
				else{
					cout << "\n";
				}
			}
			else{
				long long g=gcd(sn,mm);
				sn/=g;
				mm/=g;
				cout << sn << "/" << mm << " ";
				if(sn*2<=mm){
					cout << "DD真幸運!!我要下注!\n";
				}
				else{
					cout << "\n";
				}
			}
		}
		
	}
}
