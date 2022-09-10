#include <iostream>
using namespace std;
int main(){
	string a;
	cin >> a;
	int al=a.length(),nn=0,ans=al*3,en=0,nall=0;
	bool n=0;
	for(int i=0;i<al;++i){
		if(a[i]>='0'&&a[i]<='9'){
			n=1;
			++nn;
			++nall;
		}
		else{
			if(nn>1)
				ans-=(nn-1)*2;
			nn=0;
		}
		if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
			++en;
	}
	if(nn>1)ans-=(nn-1)*2;
	ans+=en*3;
	ans+=nall*2;
	if(al>=8&&en!=0&&n==1)
		ans+=10;
	else
		ans-=5;
	if(en==0&&n)
		ans-=al;
	if(en&&n==0)
		ans-=al;
	cout << ans ; 
} 
