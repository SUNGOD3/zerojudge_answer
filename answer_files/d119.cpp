#include <iostream>
#include <string>
using namespace std;
long long int a[50001];
int main(){
	for(int i=0;i<50001;++i)
		a[i]=1;
	for(int i=5;i<50001;++i)
		a[i]+=a[i-5];
	for(int i=10;i<50001;++i)
		a[i]+=a[i-10];
	for(int i=20;i<50001;++i)
		a[i]+=a[i-20];
	for(int i=50;i<50001;++i)
		a[i]+=a[i-50];
	for(int i=100;i<50001;++i)
		a[i]+=a[i-100];
	for(int i=200;i<50001;++i)
		a[i]+=a[i-200];
	for(int i=500;i<50001;++i)
		a[i]+=a[i-500];
	for(int i=1000;i<50001;++i)
		a[i]+=a[i-1000];
	for(int i=2000;i<50001;++i)
		a[i]+=a[i-2000];	
	string g;
	while(getline(cin,g)){
		if(g=="0")break;
		int sum=0,x=0;
		for(int i=0,gl=g.length();i<gl;++i){
			if(g[i]!=' '){
				x*=10;
				x+=g[i]-'0';
			}
			else{
				sum+=x;
				x=0;
			}
		}
		sum+=x;
		cout << a[sum]-1 << "\n";
	}
} 
