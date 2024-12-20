#include <iostream>
using namespace std;
int a[100001];
int main(){
	for(int i=0;i<=100000;++i){
		int tmp=i,all=0;
		all+=i;
		while(tmp>0){
			all+=tmp%10;
			tmp/=10;
		}
		if(a[all]==0)a[all]=i;
	}	
	int n;
	cin >> n;
	while(cin >> n)
		cout << a[n] << "\n";
} 
