#include <iostream>
using namespace std;
string a;
long long int n,c[1025],it;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> a >> n;
	long long int al=a.length(),ans=0;
	for(int i=0;i<al;++i){
		if(a[i]=='2'){
			++it;
		}
		else{
			if(a[i]=='1'){
				ans+=(n/(1<<it))*(n/(1<<it));
			}
			++c[it];
			if(c[it]==4){
				while(c[it]==4){
					c[it]=0;
					++c[it-1];
					--it;
				}
			}
		}
	}
	cout << ans ;
} 
