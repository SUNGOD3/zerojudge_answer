#include <iostream>
using namespace std;
int n,ans,x,ap;
int main(){
	cin >> n;
	while(n--){
		cin >> x;
		int mp=1,y=x;
		for(int i=2;i<=x;++i){
			while(x%i==0){
				mp=max(mp,i);
				x/=i;
			}
		}
		if(ap<mp||(ap==mp&&y>ans)){
			ans=y;
			ap=mp;
		}
	}
	cout << ans;
}
