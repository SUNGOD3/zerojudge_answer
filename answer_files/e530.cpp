#include <iostream>
using namespace std;
int pr[100001],it=0,n;
bool p[1299710]={1,1};
int main(){
	for(int i=2;i<=1141;++i)
		for(int j=i+i;j<=1299709;j+=i)
			p[j]=1;
	for(int i=2;i<=1299709;++i)
		if(!p[i]){
			pr[it]=i;
			++it;
		}
	while(cin >> n){
		if(!n)break;
		else if(!p[n])
			cout << "0\n";
		else
			for(int i=0;i<=100000;++i)
				if(pr[i]>n){
					cout << pr[i]-pr[i-1] << "\n";
					break;
				}
	}
}
