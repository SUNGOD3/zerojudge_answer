#include <iostream>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	string a;
	while(cin >> a){
		long long int al=a.length(),ans=0;
		for(int i=0;i<al;++i){
			if(a[i]=='A'){
				long long int lq=0,rq=0;
				for(int j=0;j<i;++j){
					if(a[j]=='Q'){
						++lq;
					}
				}
				for(int j=i+1;j<al;++j){
					if(a[j]=='Q'){
						++rq;
					}
				}
				ans+=lq*rq;
			}
		}
		cout << ans << "\n";
	}
} 
