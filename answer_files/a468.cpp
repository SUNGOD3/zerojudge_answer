#include <iostream>
using namespace std;
int t,d,y,m1,m2,d1,d2,y1,y2;
char g;
string m,b[12]={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
int main(){
	cin >> t;
	for(int ca=1;ca<=t;++ca){
		cin >> m >> d1 >> g >> y1;
		int x=0,y=0;
		for(int i=0;i<12;++i){
			if(b[i]==m){
				m1=i+1;
				break;
			}
		}
		if(m1<=2)
			--y1;
		x+=y1/4-y1/100+y1/400;
		cin >> m >> d2 >> g >> y2;
		for(int i=0;i<12;++i){
			if(b[i]==m){
				m2=i+1;
				break;
			}
		}
		if(m2<=2)
			--y2;
		y+=y2/4-y2/100+y2/400;
		if(m2==2&&d2==29)++y;
		cout << "Case " << ca << ": " << y-x << "\n";
	}
	
} 
