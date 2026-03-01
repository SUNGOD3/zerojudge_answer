#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int t,N;
	cin >> t;
	while(t--){
		cin >> N;
		int a[N]={0};
		cin >> a[0] >> a[1] >> a[2] >> a[3];
		for(int i=4;i<N;i++)
			a[i]=a[i-1]+a[i-4];
		sort(a,a+N);
		cout << a[N/2] << "\n";
	}
} 
