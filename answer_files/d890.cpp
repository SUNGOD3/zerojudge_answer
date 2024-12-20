#include <iostream>
using namespace std;
int main(){
	int n,k,total=0,sum;
	cin >> n >> k;
	int a[n];
	for(int i=0;i<n;++i){
		cin >> a[i];
		total+=a[i];
	}
	sum=total;
	total/=2;
	int b[total+1]={0};
	for(int i=0;i<n;++i){
		for(int j=total-a[i];j>=0;--j){
			if(b[j]||j==0){
				b[j+a[i]]=1;
			}
		}
	}
	if(n==1){
		cout << "0 " << a[0];
	}
	for(int i=total;i>=0;--i){
		if(b[i]){
			cout << i << " " << sum-i;
			break;
		}
	}
} 
