#include <iostream>
#include <string> 
#include <cmath>
using namespace std;
string s;
bool isPrime(int n){
    int k=sqrt(n);
    for(int i=2;i<=k;i++)
        if(n%i==0)return 0;
    return 1;
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        cin>>s;
        cout << s;
        bool flag=false;
        for(int i=0;i<8;i++){
            int n=0;
            for(int ii=i;ii<8;ii++){
            	n*=10;
            	n+=s[ii]-'0';
			}
			if(isPrime(n)==0){
				flag=1;
				break;
			}
        }
        if(flag)cout<<" isn't a Prime Day! \n";
        else cout<<" is a Prime Day! \n";
    }
}
