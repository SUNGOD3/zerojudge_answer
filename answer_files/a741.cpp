#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int ca=0;
	string a;
	while(cin >> a){
		++ca;
		int k,l,h,s,num,al=a.length(),start=0;
		while(al%7!=0){
			a='0'+a;
			++al;
		}
		a="00"+a;
		cout << setw(4) << ca << ".";
		for(int i=0;i<al;i+=7){
			k=(a[i]-'0')*10+(a[i+1]-'0');
			if(k){
				cout << " " << k << " kuti";
				start=1;
			}
			else if(start){
				cout << " kuti";
			}
			l=(a[i+2]-'0')*10+(a[i+3]-'0');
			if(l){
				cout << " " << l << " lakh";
				start=1;
			}
			h=(a[i+4]-'0')*10+(a[i+5]-'0');
			if(h){
				cout << " " << h << " hajar";
				start=1;
			}
			s=(a[i+6]-'0');
			if(s){
				cout << " " << s << " shata";
				start=1;
			}
		}
		num=(a[al]-'0')*10+a[al+1]-'0';
		if(num||!start)
			cout << " " << num;
		cout << "\n";
	}
} 
