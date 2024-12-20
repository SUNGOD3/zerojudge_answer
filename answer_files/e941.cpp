#include <iostream>
#include <cmath>
using namespace std;
struct f{
	int s,m;
};
int n;
char tr,d;
f a[101];
f spfy(f x){
	if(x.s==0)x.m=1;
	for(int i=2;i<=1000&&i<=abs(x.m)&&i<=abs(x.s);++i){
		while(x.m&&x.s&&x.m%i==0&&x.s%i==0){
			x.m/=i;
			x.s/=i;
		}
	}
	return x;
}
f add(f x,f y){
	if(y.s==0)return x;
	x.s *= y.m;
	x.s += y.s*x.m;
	x.m *= y.m;
	return x;
}
int main(){
	cin >> a[n].s >> d >> a[n].m;
	++n;
	while(cin >> tr){
		cin >> a[n].s >> d >> a[n].m;
		if(tr=='-')
			a[n].s*=-1;
		++n;
	}	
	for(int i=0;i<n;++i){
		a[i+1]=add(a[i],a[i+1]);
		a[i+1]=spfy(a[i+1]);
	}
	cout << a[n].s << '/' << a[n].m ;
} 
