#include <iostream>
using namespace std;
int main(){
	long long int sum;
	while(cin >> sum){
		long long int tol;
		tol=(sum+1)*sum/2;
		if(tol%2==1)
			cout << "0\n";
		else{
			long long int b[tol/2+1]={0};
			b[0]=1;
			for(int a=sum;a>=1;a--){
				for(int i=tol/2;i>=0;i--){
					if(b[i]!=0&&i+a<=tol/2){
						b[i+a]+=b[i];
					}
				}
			}
			cout << b[tol/2]/2 << "\n";
		}
	}
} 
