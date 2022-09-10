#include <iostream>
using namespace std;
string DP[10001]={"1"};
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
string mul(string a,string b){
	int tmp[10001]={0},al=a.length(),bl=b.length();
	for(int i=al-1,it=0;i>=0;--i,++it)
		for(int j=bl-1,it2=it;j>=0;--j,++it2)
			tmp[it2]+=(a[i]-'0')*(b[j]-'0');
	int tl=0;
	for(int i=0;i<10000;++i){
		if(tmp[i])tl=i;
		if(tmp[i]>=10){
			tmp[i+1]+=tmp[i]/10;
			tmp[i]%=10;
		}
	}
	string rt;
	for(int i=tl;i>=0;--i)
		rt+=tmp[i]+'0';
	return rt;
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	for(int i=1;i<10001;++i)
		DP[i]=add(mul(DP[i-1],"3"),"2");
	int n;
	while(cin >> n)
		cout << DP[n] << "\n";
} 
