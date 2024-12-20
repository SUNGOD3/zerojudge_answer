#include <iostream>
using namespace std;
int p[10000001]={1,1},ans,t,x,y;
int main(){
	for(int i=2;i<=3163;++i)
		for(int j=i+i;j<=10000000;j+=i)
			p[j]=1;
	for(int i=0;i<=10000000;++i){
		if(p[i]==0)
			++ans;
		p[i]=ans;
	}
	cin >> t;
	while(t--){
		cin >> x >> y;
		if(y<x)swap(x,y);
		cout << p[y]-p[x-1] << "\n";
	}
} 
