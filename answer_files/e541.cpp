#include <iostream>
using namespace std;
int n[10001];
int main(){
	int a,b,c=0,k;
	while(cin >> a >> b){
		if(a==0&&b==0)break;
		for(int i=0;i<10001;++i)
			n[i]=0;
		while(a--){
			cin >> k;
			n[k]++;
		}		
		cout << "CASE# " << ++c << ":\n";
		while(b--){
			cin >> k;
			if(n[k]==0)
				cout << k << " not found\n";
			else{
				int ans=1;
				for(int i=0;i<k;++i)
					ans+=n[i];
				cout << k << " found at " << ans << "\n";
			} 	
		}
	}
} 
