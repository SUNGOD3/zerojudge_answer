#include <iostream>
using namespace std;
int n,sum,x;
int main(){
	cin >> n;
	for(int i=0;i<n;++i){
		cin >> x;
		sum+=x*1000;
	}
	sum/=n;
	if(sum%10>=5){
		sum/=10;
		++sum;
	}
	else{
		sum/=10;
	}
	if(sum%100==0){
		cout << sum/100;
	}
	else if(sum%10==0){
		cout << sum/100 << "." << sum%100/10;
	} 
	else{
		cout << sum/100 << "." << sum%100;
	}
}
