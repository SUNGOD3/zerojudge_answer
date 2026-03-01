#include <iostream>
#include <vector>
using namespace std;
int n,mod=10007,a[3]={1,1,1};
vector <int> dp;
int main(){
	for(int i=1;;++i){
		long long tmp=(a[0]+a[1]+a[2])%mod; 
		if(a[0]==3&&a[1]==5&&a[2]==9&&i>=10)break;
		a[0]=a[1];
		a[1]=a[2];
		a[2]=tmp;
		dp.push_back(tmp);
	} 
	while(cin >> n){
		if(n<=3){
			cout << "1\n";
		}
		else{
			cout << dp[(n-4)%(dp.size()-3)] << "\n";
		}
	}
} 
