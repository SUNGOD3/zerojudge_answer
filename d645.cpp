#include <iostream>
using namespace std;
int main(){
	int a,b,v,w,t;
	while(cin >> a >> b){
		int c[b+1][a+1],ans=0;
		for(int i=0;i<=a;++i){
			for(int j=0;j<=b;++j){
				c[j][i]=0;
			}
		}
		for(int i=0;i<a;++i){
			cin >> v >> w >> t;
			for(int j=b;j>=0;--j){
				if(j==0||c[j][i]!=0){
					if(t==-1){
						for(int k=0;j+w*k<=b;++k)
							c[j+w*k][i+1]=max(c[j+w*k][i+1],max(c[j][i]+v*k,c[j+w*k][i]));
					}
					else{
						for(int k=0;k<=t&&j+w*k<=b;++k)
							c[j+w*k][i+1]=max(c[j+w*k][i+1],max(c[j][i]+v*k,c[j+w*k][i]));
					}
				}
			}
		}
		for(int j=b;j>=0;--j){
			if(c[j][a]>ans){
				ans=c[j][a];
			}
		}
		cout << ans << "\n";
	}
} 
