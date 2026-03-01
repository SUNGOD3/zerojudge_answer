#include <iostream>
using namespace std;
string dp[1004]={"1","1","1"};
inline string add(string a,string b){
	string sum;
	int aa[200]={0},al=a.length(),bl=b.length(),i;
	for(i=0;i<al;++i)
		aa[i]=a[al-i-1]-48;
	for(i=0;i<bl;++i){
		aa[i]+=b[bl-i-1]-48;
		if(aa[i]>9){
			aa[i]-=10;
			++aa[i+1];
		}
	}
	if(!aa[al])--al;
	for(i=0;i<=al;++i)
		sum+=aa[al-i]+48;
	return sum;
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	for(int i=3;i<=1000;++i)
		dp[i]="0";
	for(int i=1;i<=1000;++i){
		dp[i+2]=add(dp[i],dp[i+2]);
		dp[i+3]=add(dp[i],dp[i+3]);
	}
	int n;
	while(cin >> n)
		cout << dp[n] << "\n";
} 
