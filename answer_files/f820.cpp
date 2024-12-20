#include <iostream>
using namespace std;
int a[32],n,t,tmp;
int main(){
	cin >> n;
	for(int i=1;i<=n;++i)
		cin >> a[i];
	cin >> t;
	tmp = a[t];
	a[0]=a[n+1]=100001;
	if(a[t+1]>a[t-1])
		while(a[t]>=a[t-1])
			--t;
	else
		while(a[t]>=a[t+1])
			++t;
	cout << t;
} 
