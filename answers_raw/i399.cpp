#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int a[4]={},ct=0;
	for(int i=0;i<3;++i)
		cin >> a[i];
	sort(a,a+3);
	for(int i=0;i<2-ct;){
		if(a[i]==a[i+1]){
			++ct;
			a[i]=a[i+1];
			a[i+1]=a[i+2];
			a[i+2]=0;
		}
		else{
			++i;
		}
	}
	cout << 1+ct << " ";
	for(int i=2-ct;i>=0;--i)
		cout << a[i] << " ";
} 
