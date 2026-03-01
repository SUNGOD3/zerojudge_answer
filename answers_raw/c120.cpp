#include<iostream>
using namespace std;
int b[10001],k,i,j,start=0;
string ans[1002]={"1\n"};
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	b[1]=1;
	for(k=1;k<=1000;k++){
		for(j=1;j<=10000;j++)
			b[j]*=k;
		for(j=1;j<=9999;j++){
			if(b[j]>=10){
				b[j+1]+=b[j]/10;
				b[j]%=10;
			}
		}
		for(i=9999;i>=1;i--){
			if(b[i]!=0){
				start=i;
				break;
			}
		}
		for(i=start;i>=1;i--)
			ans[k]+=b[i]+48;
		ans[k]+='\n';
	}
	while(cin >> k){
		cout << k << "!\n";
		cout << ans[k];
	}
}
