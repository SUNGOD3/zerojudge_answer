#include <iostream>
using namespace std;
int c[1000000]={0};
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	for(int i=2;i<=1000;i++)
		for(int j=i*2;j<1000000;j+=i)
			c[j]=1;
	int a;
	while(cin >> a){
		if(c[a]==1)
			cout << a << " is not prime.\n";
		else{
			int b=0,d=a;
			while(d>0){
				b*=10;
				b+=d%10;
				d/=10;
			}
			if(b!=a&&c[b]==0)
				cout << a << " is emirp.\n";
			else
				cout << a << " is prime.\n";
		}
	}
} 
