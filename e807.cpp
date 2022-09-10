#include <iostream>
using namespace std;
double a[7][4],maxa=0,di=0,M,A,N,E,maxb;
int main(){
	for(int i=0;i<7;++i){
		double diy=0;
		for(int j=0;j<4;++j){
			cin >> a[i][j];
			diy+=a[i][j];
			if(diy>maxa){
				maxa=diy;
				di=i;
			}
		}
		M+=a[i][0];
		A+=a[i][1];
		N+=a[i][2];
		E+=a[i][3];
	}
	cout << di+1 << "\n";
	maxb=max(max(M,A),max(N,E));
	if(maxb==M){
		cout << "morning";
	}
	else if(maxb==A){
		cout << "afternoon";
	}
	else if(maxb==N){
		cout << "night";
	}
	else if(maxb==E){
		cout << "early morning";
	}
} 
