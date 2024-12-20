#include <iostream>
#include <cmath>
using namespace std;
int c,b[761];
string input;
bool a[5793]={1,1};
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	for(int i=2;i<=77;++i)
		for(int j=i+i;j<=5793;j+=i)
			a[j]=1;
	for(int i=0;i<5793;++i)
		if(a[i]==0)
			b[c++]=i;
	while(getline(cin,input)){
		if(input=="0")break;
		input+=' ';
		int tmp=0,ans=1,buf=0;
		for(int i=0;i<input.length();++i){
			while(input[i]>='0'&&input[i]<='9'){
				buf*=10;
				buf+=input[i]-'0';
				++i;
			}
			if(tmp){
				ans*=pow(tmp,buf);
				tmp=buf=0;
			}
			else{
				tmp=buf;
				buf=0;
			}
		}
		int it=0,ait=0;
		--ans;
		int rt[1001]={0};
		while(it<760&&ans!=1){
			while(ans%b[it]==0){
				++buf;
				ans/=b[it];
			}
			if(buf){
				rt[ait++]=b[it];
				rt[ait++]=buf;
				buf=0;
			}
			++it;
		}
		if(ans!=1){
			rt[ait++]=ans;
			rt[ait++]=1;
		}
		for(int i=ait;i>0;i-=2){
			cout << rt[i-2] << " " << rt[i-1] << " ";
		}
		cout << '\n';
	}
} 
