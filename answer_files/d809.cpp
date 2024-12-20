#include <iostream>
#include <iomanip>
using namespace std;
double b[201][2];
int main(){
	int a;
	while(cin >> a){
		for(int i=0;i<a;++i)
			cin >> b[i][0] >> b[i][1];
		double max=0;
		for(int i=0;i<a;++i){
			for(int j=i+1;j<a;++j){
				for(int k=j+1;k<a;++k){
					double t=0.5*(b[i][0]*b[j][1]+b[j][0]*b[k][1]+b[i][1]*b[k][0]-b[i][1]*b[j][0]-b[j][1]*b[k][0]-b[i][0]*b[k][1]);
					if(t<0)t*=-1;
					if(t>max)max=t;
				}
			}
		}
		cout << fixed << setprecision(2) << max << "\n";
	}
} 
