#include <iostream>
using namespace std;
int main(){
	int a,m;
	while(cin >> a >> m){
		int b[a+1]={0},d,u,sum=0;
		for(int i=0;i<m;i++){
			cin >> d >> u;
			if(d>u){
				d=d^u;
				u=d^u;
				d=d^u;
			}
			for(int j=d;j<=u;j++){
				b[j]=1;
			}
		}
		for(int i=0;i<=a;i++){
			if(b[i]==0){
				sum++;
			}
		}
		cout << sum << "\n";
	} 
} 
