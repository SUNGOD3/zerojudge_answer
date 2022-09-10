#include <iostream>
#include <string>
using namespace  std;
int main(){
	int a=-1,b,c,cs=1;
	while(a!=0||b!=0||c!=0){
		if(a!=-1){
			int max=0,n[a]={0},now=0,k;
			bool ans=0;
			for(int i=0;i<a;i++)
				cin >> n[i];
			while(b--){
				cin >> k;
				now+=n[k-1];
				n[k-1]*=-1;
				if(now>c)
					ans=1;
				if(ans!=1&&now>max)
					max=now;
			}
			cout << "Sequence " << cs << "\n";
			if(ans==1)
				cout << "Fuse was blown.";
			else{
				cout << "Fuse was not blown.\n";
				cout << "Maximal power consumption was " << max << " amperes.";
			}
			cs++;
		}
		cin >> a >> b >> c;
		if(cs!=1&&(a!=0&&b!=0&&c!=0))cout << "\n\n";
	} 
}
