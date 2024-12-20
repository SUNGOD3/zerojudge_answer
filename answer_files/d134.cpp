#include <iostream>
using namespace std;
unsigned long long int DP[101][101];
int main(){
	for(int i=0;i<101;++i){
		DP[i][0]=1;
		DP[i][i]=1;
		DP[i][1]=i;
		DP[i][i-1]=i;
	}
	for(int i=2;i<101;++i)
		for(int j=2;j<=i;++j)
			if(!DP[i][j])
				DP[i][j]=DP[i-1][j-1]+DP[i-1][j];
	int n,m;
	while(cin >> n >> m){
		if(!n&&!m)break;
		cout << n << " things taken " << m << " at a time is " <<  DP[n][m] << " exactly.\n"; 
	}
}
