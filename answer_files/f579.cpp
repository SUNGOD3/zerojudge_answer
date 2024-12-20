#include <iostream>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int a,b,n,k,aa=0,bb=0,ans=0;
	cin >> a >> b >> n;
	while(n){
		cin >> k;
		if(!k){
			--n;
			if(aa>0&&bb>0)++ans;
			aa=bb=0;
		}
		if(a==k)
			++aa;
		else if(b==k)
			++bb;
		else if(k==-a)
			--aa;
		else if(k==-b)
			--bb;
	}
	cout << ans;
} 
