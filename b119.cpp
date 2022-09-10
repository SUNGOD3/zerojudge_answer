#include <iostream>
using namespace std;
int main(){
	double s,t,n;
	while(cin >> s >> t >> n){
		double x,sum=0,mon=0;
		while(n--){
			cin >> x;
			sum+=x;
		}
		if(sum>t*0.2){
			mon+=t*0.2*s*0.7;
			sum-=t*0.2;
			if(sum>t*0.2){
				mon+=t*0.2*s*0.8;
				sum-=t*0.2;
				if(sum>t*0.2){
					mon+=t*0.2*s*0.9;
					sum-=t*0.2;
				}
				else{
					mon+=sum*s*0.9;
					sum=0;
				}
			}
			else{
				mon+=sum*s*0.8;
				sum=0;
			}
		}
		else{
			mon+=sum*s*0.7;
			sum=0;
		}
		mon+=sum*s;
		printf("%.0lf\n",mon-t*s*0.3);
	}
} 
