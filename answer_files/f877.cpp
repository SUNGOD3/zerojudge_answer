#include <iostream>
using namespace std;
string x;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(getline(cin,x)){
		bool ans=1;
		for(int i=0;i<x.length()&&ans;++i)
			if(x[i]=='!')
				ans=0;
		if(ans)
			cout << "NO\n";
		else
			cout << "YES\n";
	}
} 
