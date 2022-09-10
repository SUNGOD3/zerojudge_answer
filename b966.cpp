#include <iostream>
using namespace std;
bool aa[10000000]={0};
int main(){
	int a,sum=0;
	cin >> a;
	int b,c;
	while(a--){
		cin >> b >> c;
		for(int i=b;i<c;i++){
			aa[i]=1;
		}
	}
	for(int i=0;i<10000000;i++){
		sum+=aa[i]; 
	}
	cout << sum << "\n";
} 
