#include <iostream>
using namespace std;
int main(){
	int a,b,c,s,n,abc;
	while(cin >> a >> b >> c){
		abc=(a*10000+b*100+c)%9;
		(abc==0)?s=9:s=abc;
		cin >> n;
		int t[n],min=11;
		for(int i=0;i<n;++i){
			int x=0;
			cin >> a >> b >> c;
			abc=(a*10000+b*100+c)%9;
			(abc==0)?x=9:x=abc;
			t[i]=abs(x-s);
			if(t[i]<min)min=t[i];
		}
		for(int i=0;i<n;++i){
			if(t[i]==min){
				cout << i+1 << "\n";
				break;
			}
		}
	}
} 
