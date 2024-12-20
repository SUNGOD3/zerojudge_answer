#include <iostream>
using namespace std;
int main(int argc, char** argv){
	int a,b,c=0;
	cin>>a>>b;
	while(b&&a){
		if(a>=12){
			a-=11;
			c++;
		}
		else{
			a++;
			b--;
		}
	}
	cout<<c<<endl;
}
