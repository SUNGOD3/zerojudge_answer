#include <iostream>
using namespace std;
int n,ans;
int main(){
	cin >> n;
	for(int a=1;a<=30;++a){
		int n1=a*20;
		for(int b=a+1;b<=30;++b){
			int n2=b*b;
			for(int c=b+1;c<=30;++c){
				int n3=c*3;
				for(int d=c+1;d<=30;++d){
					int n4=(c+d)*4;
					for(int e=d+1;e<=30;++e){
						int n5=(e-d)*5;
						if(n1+n2+n3+n4+n5==n){
							//cout << a << " " << b << " " << c << " " << d << " " << e << "\n"; 
							//cout << n1 << " " << n2 << " " << n3 << " " << n4 << " " << n5 << "\n"; 
							++ans;
						}
					}
				}
			}
		}
	}
	if(ans==0){
		cout << n*5-3;
	}
	else{
		cout << ans*ans*ans;
	}
} 
