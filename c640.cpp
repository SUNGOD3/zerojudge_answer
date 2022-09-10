#include <iostream>
using namespace std;
long long int m,k,a[6],it;
long long int gcd(long long int x,long long int y){
    if( y==0 )
        return x;
    return gcd( y, x%y );
}
string s;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> m >> k){
		getline(cin,s);
		getline(cin,s);
		s+=' ';
		it=0;
		long long int tmp=0;
		for(int i=0;i<s.length();++i){
			if(s[i]>='0'&&s[i]<='9'){
				tmp*=10;
				tmp+=s[i]-'0';
			}
			else if(tmp!=0){
				a[it]=tmp;
				tmp=0;
				++it;
			}
		}
		long long int ans=a[0],v=1;
		for(int i=1;i<it;++i){
			if(gcd(ans,a[i])!=1)
				a[i]/=gcd(ans,a[i]);	
			ans*=a[i];
		}
		while((ans*v+k)<=m){
			cout << ans*v+k << " ";
			++v;
		}
		cout << "\n";
	}
} 
