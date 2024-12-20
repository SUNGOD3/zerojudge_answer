#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    string s;
    while (cin >> s){
        if (s[0]=='-') break;
        if (s[1]=='x'){
            int n=0;
            for (int i=2,si=s.size();i<si;++i){
                n*=16;
                if (s[i] >= 'A')n+=(s[i]-'A')+10;
                else n+=s[i]-'0';
            }
            cout << n << "\n";
        } else {
            int n = 0;
            for (int i = 0,si=s.size(); i < si; ++i){
                n*=10;
                n+=s[i]-'0';
            }
            s = "";
            while (n){
            	int nn=n%16;
                if (nn > 9) s += 'A' + (nn - 10);
                else s += '0' + nn;
                n/=16;
            }
            reverse(s.begin(), s.end());
            cout << "0x" << s << "\n";
        }
    }
    return 0;
}
