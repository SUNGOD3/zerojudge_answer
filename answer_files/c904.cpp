#include <iostream>
#include <algorithm>
using namespace std;
double a[1000][2]={0},b[1000]={0};
double bs(double min,double max,int k,int n){
	double m=(max+min)/2,sum=0;
	if(max<min)
		return m;	
	for(int i=0;i<n;i++)
		b[i]=a[i][1]-m*a[i][0];
	sort(b,b+n);
	for(int i=0;i<k;i++)
		sum+=b[n-i-1];
	if(sum>=0)
		return bs(m,max-0.0001,k,n);
	return bs(min+0.0001,m,k,n);		
}
int main(){
	int N,M,K;
	double max=0;
	cin >> N >> M;
	for(int i=0;i<N;i++){
		cin >> a[i][0] >> a[i][1];
		max+=a[i][1];
	}
	for(int i=0;i<M;i++){
		cin >> K;
		printf("%.2f\n",bs(0,max,K,N));
	}
} 
