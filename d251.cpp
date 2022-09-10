#include <iostream>
using namespace std;
int v[301];
int gt(string a){
	int al=a.length(),n=0;
	for(int i=0;i<al;++i){
		if(i<al&&v[a[i+1]]>v[a[i]]){
			n+=(v[a[i+1]]-v[a[i]]);
			++i;
		}
		else
			n+=v[a[i]];
	}
	return n;
}
void pt(int a){
	if(a>=50){
		cout << 'L';
		a-=50;
	}
	if(a>=40){
		cout << "XL";
		a-=40;
	}
	while(a>=10){
		cout << "X";
		a-=10;
	}
	if(a>=9){
		cout << "IX";
		a-=9;
	}
	while(a>=5){
		cout << "V";
		a-=5;
	}
	if(a>=4){
		cout << "IV";
		a-=4;
	}
	while(a){
		cout << "I";
		--a;
	}
}
int main(){
	v['I']=1;
	v['V']=5;
	v['X']=10;
	v['L']=50;
	string h,m;
	cin >> h >> m;
	int hh=gt(h),mm=gt(m);
	mm+=hh*60+450;
	hh=(mm/60)%24;
	mm%=60;
	pt(hh);
	cout << "\n";
	pt(mm);
} 
