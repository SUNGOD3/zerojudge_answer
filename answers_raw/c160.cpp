#include <iostream>
using namespace std;
int gcd(int a, int b){
	if (b)
        while((a %= b) && (b %= a));
	return a + b;
}
int main(){
	float a,b,ans=1000000;
	int l,ans1=0,ans2=0;
	cin >> a >> b >> l;
	float s=a/b;
	for(int i=1;i<=l;++i){
		for(int j=1;j<=l;++j){
			if(gcd(i,j)==1){
				float ii=i,jj=j,ss=ii/jj;
				if(ss>=s){
					ss-=s;
					if(ss<ans){
						ans1=i;
						ans2=j;
						ans=ss;
					}
				}
			}
		}
	}
	cout << ans1 << " " << ans2;
} 
