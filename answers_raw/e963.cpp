#include <iostream>
#include <string>
using namespace std;
typedef long long ll;
#define FOR(i, j, k, in) for (int i=j ; i<k ; i+=in)
#define RFOR(i, j, k, in) for (int i=j ; i>=k ; i-=in)
#define REP(i, j) FOR(i, 0, j, 1)
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0)

/********** Good Luck :) **********/
int main(){
    IOS();
    int t;
    string s;
    cin >> t;
    while(t--){
        cin >> s;
        int sl=s.length();
        ll mod=s[0]%3+2,total=0,timee=1,e=139%mod;
        REP(i, sl){
            total+=(s[i]*timee)%mod;
            timee*=e;
        }
        (total%mod)?cout << "no" << '\n':cout << "yes" << '\n';
    }
    return 0;
}
