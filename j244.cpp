#include <iostream>
using namespace std;
int n,k;
long long ans;
string a,b,c,s;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> k >> n >> a >> b >> c;
	a='o'+a;
	b='o'+b;
	c='o'+c;
	while(n--){
		cin >> s;
		s='x'+s;
		int t=0;
		for(int i=k;i>=0;--i){
			if(s[i]!=a[i]){
				t=max(t,k-i);
				break;
			}
		}
		for(int i=k;i>=0;--i){
			if(s[i]!=b[i]){
				t=max(t,k-i);
				break;
			}
		}
		for(int i=k;i>=0;--i){
			if(s[i]!=c[i]){
				t=max(t,k-i);
				break;
			}
		}
		if(t==k){
			ans+=500000;
		}
		else if(t>=k-2){
			ans+=10000;
		}
		else if(t>=k-4){
			ans+=1000;
		}
		else if(t>=3){
			ans+=300;
		}
	}
	cout << ans;
} 
