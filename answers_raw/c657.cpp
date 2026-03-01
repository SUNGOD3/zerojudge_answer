#include <iostream>
#include <string>
using namespace std;
int main(){
	string a;
	while(cin>>a){
		int max=0,n=1;
		char ans;
		for(int i=0;i<a.length()-1;i++){
			if(a[i]==a[i+1]){
				n++;
				if(n>max){
					max=n;
					ans=a[i];
				}
			}
			else
				n=1;
		}
		cout << ans << " " << max << endl;
	}
}
