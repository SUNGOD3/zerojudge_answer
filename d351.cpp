#include <iostream>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	string a;
	while(getline(cin,a)){
		if(a!="___________"){
			int k=0;
			for(int i=1;i<=9;++i){
				if(i!=6)k*=2;
				if(a[i]=='o')
					k+=1;
			}
			char ans=k;
			cout << ans;
		}
	}
} 
