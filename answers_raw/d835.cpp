#include <iostream>
using namespace std;
int a[10001][2],b[10001][2],ita,itb;
char c;
int main(){
	while(cin >> c){
		if(c=='W'){
			++a[ita][0];
			++b[itb][0];
			if(a[ita][0]>=11&&a[ita][0]-a[ita][1]>=2)
				++ita;
			if(b[itb][0]>=21&&b[itb][0]-b[itb][1]>=2)
				++itb;
		}
		else if(c=='L'){
			++a[ita][1];
			++b[itb][1];
			if(a[ita][1]>=11&&a[ita][1]-a[ita][0]>=2)
				++ita;
			if(b[itb][1]>=21&&b[itb][1]-b[itb][0]>=2)
				++itb;
		}
		else if(c=='E')
			break;
	}
	for(int i=0;i<=ita;++i)
		cout << a[i][0] << ":" << a[i][1] << "\n"; 
	cout << "\n";
	for(int i=0;i<=itb;++i)
		cout << b[i][0] << ":" << b[i][1] << "\n"; 
}
