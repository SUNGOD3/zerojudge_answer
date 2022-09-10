#include <iostream>
using namespace std;
int b,ans;
string n;
inline int mod(string num, int a){
    int res = 0;
    for (int i = 0,nl = num.length(); i < nl; ++i)
         res = (res*10 + (int)num[i] - '0') %a;
    return res;
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> n >> b){
		ans=mod(n,1<<b);
		if(ans)
			cout << "可惡!!算了這麼久" << n << "竟然無法被2的" << b << "次整除\n";
		else
			cout << "YA!!終於算出" << n << "可被2的" << b <<"次整除了!!\n";
	}
} 
