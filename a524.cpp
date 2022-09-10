#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int a,c;
	while(cin>>a){
		int b[a];
		for(c=0;c<a;c++)
			b[c]=a-c;
		do{
			for(c=0;c<a;c++)
				cout<<b[c];
			cout<<endl;
		}while(prev_permutation(b,b+a));
	}
}
