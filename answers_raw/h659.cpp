#include <iostream>
using namespace std;
int k,w,s,e,m;
int main(){
	cin >> k >> w >> s >> e;
	m=20+(w/2)*5;
	for(int i=3;i<=k;++i)
		m+=5;
	for(int i=s+1;i<=e;++i)
		if(i>18)
			m+=185+(i-19)*10;
	cout << m;
} 
