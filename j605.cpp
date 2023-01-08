#include <bits/stdc++.h>
using namespace std;
int s,t,ms=-1,mt,x,err; 
int main(){
	int n;
	cin >> n;
	for(int i=1;i<=n;++i){
		cin >> t >> s;
		if(s==-1)err++;
		if(s>ms)ms=s,mt=t;
	}
	cout << max(0,ms-n-err*2) << " " << mt;
}
