#include <iostream>
#include <cmath>
using namespace std;
int main(){
	string a;
	while(cin >> a){
		long long int ans=0,ansv[11],tmp=0;
		bool chat=0;
		for(int i=0;i<10;++i,chat=0){
			tmp*=10;
			tmp+=a[i]-48;
			if(tmp==1||tmp==0)
				chat=1;
			else{
				for(int k=2,st=sqrt(tmp);k<=st;++k){
					if(tmp%k==0){
						chat=1;
						break;
					}
				}
			}
			if(chat==0){
				ansv[ans]=tmp;
				++ans;
				tmp=0;
			}
		}
		cout << ans << "\n";
		for(int i=0;i<ans;++i){
			cout << ansv[i] << "\n";
		}
		cout << "\n";
	}
} 
