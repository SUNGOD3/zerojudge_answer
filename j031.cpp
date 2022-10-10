#include <iostream>
using namespace std;
long long a,b,c,d,e;
int main(){
	cin.tie(0); ios::sync_with_stdio(0);
	while(cin >> a >> b >> c >> d >> e){
		if(a||b||c||d||e){
			int ans=0;
			for(int i=0;i<=e;++i)
				if((a*i*i+b*i+c)%d==0)++ans;
			cout << ans << "\n";
			continue;	
		}
		return 0;
	}
} 
