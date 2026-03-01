#include <iostream>
using namespace std;
int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
	int a,b[50000],d=0,e=0,f;
	cin>>a;
	for(int c=0;c<a;c++){
		cin>>b[c];
	}
	for(int c=0;c<a;c++){
		if(b[c]!=-1){
			for(d=b[c];d!=-1;){
				f=d;
				d=b[d];
				b[f]=-1;
			}
			e++;
		}
	}
	cout<<e<<endl;
	return 0;
}

 
