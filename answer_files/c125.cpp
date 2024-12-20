#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int n,ca;
struct p{
	double x,y;
};
p a[210];
double fl[210][210],ans;
double dis(int xx,int yy){
	double xd=a[xx].x-a[yy].x,yd=a[xx].y-a[yy].y;
	if(xd<0)xd*=-1;
	if(yd<0)yd*=-1;
	return sqrt(xd*xd+yd*yd);
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> n){
		if(n==0)break;
		ans=0;
		for(int i=0;i<210;++i)
			for(int j=0;j<210;++j)
				fl[i][j]=0;
		for(int i=0;i<n;++i)
			cin >> a[i].x >> a[i].y;
		for(int i=0;i<n;++i)
			for(int j=0;j<n;++j){
				if(i==j)fl[i][j]=0;
				else fl[i][j]=dis(i,j);
			}
		for(int k=0;k<n;++k)
			for(int i=0;i<n;++i)
				for(int j=0;j<n;++j){
					double ds=fl[i][k];
					if(ds<fl[k][j])ds=fl[k][j];
					if(fl[i][j]>ds){
						fl[i][j] = ds;
					}
				}
		cout << "Scenario #" << ++ca << "\nFrog Distance = " <<  fixed <<  setprecision(3)  << fl[0][1] << "\n\n"; 
	}
} 
