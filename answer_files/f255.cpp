#include <iostream>
using namespace std;
string add(string a,string b){
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
int n;
string ans[10001]={"1"};
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	for(int i=1;i<=10000;++i){
		ans[i]=add(ans[i-1],ans[i-1]);
	}
	while(cin >> n){
		if(n==0)break;
		cout << ans[n] << "\n";
	}
} 
