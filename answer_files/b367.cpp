#include <iostream>
using namespace std;
int main(){
	int a,b;
	cin >> a;
	while(cin >> a >> b){
		int ab=a*b,c[ab];
		for(int i=0;i<ab;i++)
			cin >> c[i];
		bool ans=0;
		for(int i=0;i<ab&&ans==0;i++)
			if(c[i]!=c[ab-i-1])
					ans=1;
		(ans==0)?printf("go forward\n"):printf("keep defending\n");
	}
}
