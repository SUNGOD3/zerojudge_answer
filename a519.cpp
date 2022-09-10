#include <iostream>
using namespace std;
int main(){
	long long int a[82]={1,2},b;
	for(int i=1;i<=80;i++){
		a[i+1]=a[i]+a[i-1];
	}
	while(cin >> b){
		if(b>0)
		cout << a[b-1]  << "\n";
	}
} 
