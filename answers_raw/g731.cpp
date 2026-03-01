#include <iostream>
using namespace std;
long long a[20000][2],n,tmp;
char d;
long long gcd(long long x,long long y){
	while(x%y){
		x%=y;
		swap(x,y);
	}
	return y;
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> a[n][0] >> d >> a[n][1];
	++n;
	while(cin >> d){
		cin >> a[n][0] >> d >> a[n][1];
		++n;
	}
	for(int i=0;i<n-1;++i){
		cout << "=";
		a[i][0]*=a[i+1][1];
		a[i+1][0]*=a[i][1];
		a[i+1][0]+=a[i][0];
		a[i+1][1]*=a[i][1];
		tmp=gcd(a[i+1][1],a[i+1][0]);
		a[i+1][0]/=tmp;
		a[i+1][1]/=tmp;
		for(int j=i+1;j<n;++j){
			cout << a[j][0] << "/" << a[j][1];
			if(j<n-1){
				cout << "+";
			}
			else{
				cout << "\n";
			}
		}
	}
}
