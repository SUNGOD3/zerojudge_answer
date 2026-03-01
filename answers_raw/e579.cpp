#include <iostream>
using namespace std;
int main(){
	int N,ans=0,i,P;
	cin >> N;
	while(cin >> N >> P){
		ans=0;
		int D[N]={};
		for(D[N];P>0;P--){
			cin >> D[N];
			for(i=D[N]-1;i<N;i+=D[N])
				D[i]=1;
		}
		for(i=0;i<N;i++){
			if(i%7!=6&&i%7!=5){
				if(D[i]==1)
					ans++;
			}
		}
		cout << ans << endl;
	}
} 
