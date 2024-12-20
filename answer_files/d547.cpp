#include <iostream>
using namespace std;
int main(){
	int n,m;
	cin >> n >> m;
	++m;
	bool a[m]={0};
	int b[m];
	for(int i=1;i<m;++i)
		cin >> a[i];
	while(n--){
		for(int i=0;i<m;++i)
			cin >> b[i];
		bool c[m]={0};
		if(b[m-1]>=b[m-2])
			c[m-1]=1;
		for(int i=m-2;i>0;--i){
			int as=abs(b[i]-b[i+1]);
			if(as>=b[i-1])
				c[i]=1;
		}
		bool ans=0;
		for(int i=0;i<m;++i){
			if(a[i]!=c[i]){
				ans=1;
				break;
			}
		}
		if(ans==0){
			for(int i=0;i<m;++i)
				cout << b[i] << " ";
			cout << "\n";
		}
	}
	
} 
