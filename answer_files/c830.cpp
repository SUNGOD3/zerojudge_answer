#include <iostream>
#include <string>
using namespace std;
int main(){
	string a,b;
	while(cin >> a >> b){
		int al=a.length(),bl=b.length(),ai=0,bi=0;
		int xa=0,ya=0,xb=0,yb=0;
		while(a[ai]!='.'&&ai<al){
			xa*=7;
			xa+=a[ai]-48;
			ai++;
		}
		while(b[bi]!='.'&&bi<bl){
			xb*=7;
			xb+=b[bi]-48;
			bi++;
		}
		xa+=xb;
		if(a[ai]=='.'){
			ai++;
		}
		else{
			a+='.0';
			al++;
			ai++;
		}
		if(b[bi]=='.'){
			bi++;
		}
		else{
			b+='.0';
			bl++;
			bi++;
		}
		string ad,bd;
		while(ai<al){
			ad+=a[ai];
			ai++;
		}
		while(bi<bl){
			bd+=b[bi];
			bi++;
		}
		int adl=ad.length(),bdl=bd.length();
		while(adl>bdl){
			bd+='0';
			bdl++;
		}
		while(bdl>adl){
			ad+='0';
			adl++;
		}
		for(int i=adl-1;i>0;i--){
			if(ad[i]+bd[i]-96>6){
				ad[i-1]++;
				ad[i]-=7;
			}
			ad[i]+=bd[i]-48;
		}
		if(ad[0]+bd[0]-96>6){
			ad[0]-=7;
			ad[0]+=bd[0]-48;
			xa++;
		}
		else{
			ad[0]+=bd[0]-48;
		}
		string ans;
		if(xa==0)cout << 0;
		while(xa>0){
			ans+=xa%7+48;
			xa/=7;
		}
		for(int j=ans.length()-1;j>=0;j--){
			cout << ans[j];
		}
		for(int j=0;j<ad.length();j++){
			if(ad[j]!='0'){
				cout << '.' << ad;
				break;
			}
		}
		cout << "\n";
	}
} 
