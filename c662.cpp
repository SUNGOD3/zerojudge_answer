#include <iostream>
using namespace std;
long long a[1005],it,tmp,ac;
string s;
long long gcd(long long x,long long y){
	if( y==0 )
        return x;
    return gcd( y, x%y );
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(getline(cin,s)){
		s+=' ';
		it=0;
		tmp=0;
		ac=0;
		for(int i=0;i<s.length();++i){
			if(s[i]==' '&&ac){
				a[it++]=tmp;
				tmp=0;
				ac=0;
			}
			else if(s[i]>='0'&&s[i]<='9'){
				tmp*=10;
				tmp+=s[i]-'0';
				ac=1;
			}
		}
		long long ans=1;
		for(int i=0;i<it;++i){
			long long tmp=0,it2=i;
			while(a[it2]!=-1){
				int k=a[it2];
				a[it2]=-1;
				it2=k;
				tmp++;
			}
			//cout << tmp << " ";
			//cout << ans << " ";
			//cout << gcd(ans,tmp) << "\n";
			if(tmp)ans=ans*tmp/gcd(ans,tmp); 
			//cout << ans << " ";
		}
		cout << ans << "\n";
	}
} 
