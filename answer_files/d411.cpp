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
			cout << "�i�c!!��F�o��[" << n << "���M�L�k�Q2��" << b << "���㰣\n";
		else
			cout << "YA!!�ש��X" << n << "�i�Q2��" << b <<"���㰣�F!!\n";
	}
} 
