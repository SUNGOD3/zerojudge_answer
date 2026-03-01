#include <iostream>
using namespace std;
int main(){
	int m,a;
	while(cin >> m >> a){
		int sum[m+1]={0},n;
		sum[m]=1;
		while(a--){
			cin >> n;
			for(int i=m;i>=0;i--){
				if(sum[i]!=0&&i-n>=0){
					if(sum[i-n]==0)
						sum[i-n]=sum[i]+1;
					else if(sum[i-n]!=0&&sum[i-n]>sum[i]+1)
						sum[i-n]=sum[i]+1;
				}
			}
		}
		cout << sum[0]-1;
	}
} 
