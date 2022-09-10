#include <iostream>
using namespace std;
int n;
string ans[251]={"0"};
inline string add(string a,string b){
	int tmp[10001]={0},al=a.length(),bl=b.length();
	string c;
	for(int i=0;i<al;++i)tmp[al-i-1]+=a[i]-'0';
	for(int i=0;i<bl;++i)tmp[bl-i-1]+=b[i]-'0';
	for(int i=0;i<10000;++i)
		if(tmp[i]>9){
			++tmp[i+1];
			tmp[i]-=10;
		}
	for(int i=10000;i>=0;--i)
		if(tmp[i]){
			al=i;
			break;
		}
	for(int i=al;i>=0;--i)c+=tmp[i]+'0';
	return c;
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	for(int i=0;i<250;++i)
		ans[i+1]=add(add(ans[i],ans[i]),"2");
	while(cin >> n)
		cout << ans[n] << "\n";
} 
