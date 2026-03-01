#include <iostream>
#include <string>
using namespace std;
int a[40]={0};
int main(){
	a[0]=1;
	a[1]=2;
	for(int i=0;i<39;i++){
		if(i!=0)
		a[i+1]=a[i]+a[i-1];
	}
	int c;
	cin >> c;
	while(cin >> c){
		bool f=0,d=0;
		cout << c << " = ";
		while(c>0){
			for(int i=39;i>=0;i--){
				if(c>=a[i]){
					c-=a[i];
					cout << "1";
					if(c==0){
						while(i--){
							cout << "0";
						}
					}
					f=1;d=1;
					i--;
				}
				else if(c<a[i]&&f!=0)
					cout << "0";
				if(f!=0&&d==1&&i>=0){
					cout << "0";
					d=0;
				}
			}
		}
		cout << " (fib)\n";
	}
} 
