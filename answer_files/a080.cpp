#include <iostream>
using namespace std;
int ans=1,a[320001][26];
string b;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> b){
		for(int i=0,bl=b.length(),x=0;i<bl;++i){
			if(!a[x][b[i]-'A']){
				++ans;
				a[x][b[i]-'A']=ans;
			}
			x=a[x][b[i]-'A'];
		}
	}
	cout << ans;
} 
