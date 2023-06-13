#include <bits/stdc++.h>
using namespace std;
int x,n,ct;
string a,b;
int main(){
	getline(cin,a);
	cin >> n;
	a+=' ';
	for(int i=0;i<a.size();++i){
		if(a[i]>='0'&&a[i]<='9'){
			int tmp=0;
			while(a[i]>='0'&&a[i]<='9'){
				tmp*=10;
				tmp+=a[i]-'0';
				++i;
			}
			if(tmp==n)++ct;
		}
	}
	cout << ct << "\n" << n*ct;
} 
