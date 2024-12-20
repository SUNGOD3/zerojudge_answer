#include <iostream>
using namespace std;
int ans[101],tmp;
string a;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	for(int i=0;i<=100;++i){
		int it=i%10;
		if(it==2||it==8)
			(i%4==2)?tmp+=4:tmp+=6;
		else if(it==3||it==7)
			(i%4==3)?tmp+=10-it:tmp+=it;
		else if(it==4)
			tmp+=6;
		else
			tmp+=it;
		tmp%=10;
		ans[i]=tmp;
	}
	while(cin >> a){
		if(a=="0")break;
		int p=a[a.length()-1]-48;
		if(a.length()<=1)cout << ans[p] << "\n";
		else cout << ans[(a[a.length()-2]-48)*10+p] << "\n";
	}
} 
