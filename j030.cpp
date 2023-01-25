#include <iostream>
#include <cmath>
using namespace std;
int t;
int main(){
	cin >> t;
	for(int ca=1;ca<=t;++ca){
		double s=0,x;
		for(int i=0;i<12;++i){
			cin >> x;
			s+=x;
		}
		s/=12.0;
		if(s>=1000.0){
			if(s-((int)s)/1000*1000>=100)
				printf("%d $%d,%.2f\n",ca,(int)s/1000,s-(int)(s/1000)*1000);
			else if(s-((int)s)/1000*1000>=10)
				printf("%d $%d,0%.2f\n",ca,(int)s/1000,s-(int)(s/1000)*1000);
			else 
				printf("%d $%d,00%.2f\n",ca,(int)s/1000,s-(int)(s/1000)*1000);
		}
		else printf("%d $%.2f\n",ca,s);
	}
}

