#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <iostream>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int c,x,y,z,w,n,m;
	cin >> c;
	string a;
	while(c--){
		cin >> x >> y >> z >> w >> n >> m;
		getline(cin,a);
		getline(cin,a);
		int p=0;
		bool die=0;
		if(m<=0)die=1;
		for(int al=a.length(),i=0;i<al;++i){
			if(a[i]!=' '){
				m-=p;
				if(m<=0)
					die=1;
				if(a[i]=='1')
					m+=x;
				else if(a[i]=='2')
					m+=y;
				else if(a[i]=='3')
					m-=z;
				else if(a[i]=='4'){
					m-=w;
					p+=n;
				}
				if(m<=0)
					die=1;
			}
		}
		if(die)
			cout << "bye~Rabbit\n";
		else
			cout << m << "g\n";
	}
} 
