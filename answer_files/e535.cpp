#include <iostream>
using namespace std;
int b,c,nl,it,bc;
string n;
inline int mod(string num, int a){
    int res = 0;
    for (int i = 0; i < nl; ++i)
         res = (res*10 + (int)num[i] - '0') %a;
    return res;
}
int main(){
	cin >> c;
	while(c--){
		bool ans=0;
		cin >> n >> bc;
		string tmp;
		nl=n.length();
		for(it=0;it<nl-1;++it)
			if(n[it]!='0')break;
		for(;it<nl;++it)
			tmp+=n[it];
		while(bc--){
			cin >> b;
			if(ans==0&&mod(tmp,b)!=0)
				ans=1;
		}
		if(ans)
			cout << n << " - Simple.\n"; 
		else
			cout << n << " - Wonderful.\n";
	}
}
