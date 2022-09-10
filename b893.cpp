#include <iostream>
using namespace std;
int main(){
	long long int a,b,c,d,e,f;
	while(cin>>a>>b>>c>>d>>e>>f){
		if(!a&&!b&&!c&&!d&&!e&&!f){
			cout << "Too many... = =\"\n";
			continue;
		}
		bool ans=0;
		long long int tmp=0,tmp2=0;
		for(int x=-36;x<=36;++x){
			tmp=a*x*x*x*x*x+b*x*x*x*x+c*x*x*x+d*x*x+e*x+f;
			if(!tmp){
				cout << x << " " << x << "\n"; 
				ans=1;
			}
			else if(tmp2*tmp<0){
				cout << x-1 << " " << x << "\n";
				ans=1;
			}
			tmp2=tmp;
		}
		if(!ans)
			cout << "N0THING! >\\\\\\<\n";
	}
} 
