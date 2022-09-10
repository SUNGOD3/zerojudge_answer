#include <iostream>
using namespace std;
string f[5001]={"0","1"};
inline string add(string a,string b){
	int aa[2000]={0},bb[2000]={0},al=a.length(),bl=b.length();
	string ans;
	for(int i=0;i<al;++i)
		aa[i]=a[al-i-1]-48;
	for(int i=0;i<bl;++i)
		bb[i]=b[bl-i-1]-48;
	for(int i=0;i<=al;++i){
		aa[i]+=bb[i];
		if(aa[i]>9){
			aa[i]-=10;
			++aa[i+1];
		}
	}
	if(aa[al]==0)
		--al;
	for(int i=al;i>=0;--i)
		ans+=aa[i]+48;
	return ans;
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	for(int i=2;i<=5000;++i)
		f[i]=add(f[i-1],f[i-2]);
	int n;
	while(cin >> n){
		cout << "The Fibonacci number for " << n<< " is " <<f[n] << "\n"; 
	}
} 
