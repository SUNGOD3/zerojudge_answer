#include <iostream>

using namespace std;

int main(){
	
	long long int n,m,sum=0;
	int i=0;
	while(cin >> n >> m){
		if(m>=n){
			sum=n;
			n++;
		for(i=1;sum<=m;i++){
			sum+=n;
			n++;
		}
		cout << i << endl;}

		else if(m<n){
			cout << 1 << endl;
		}
		sum=0;
	}
	
	
} 
