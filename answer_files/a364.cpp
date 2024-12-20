#include <iostream>
using namespace std;
int ans[501][3],al=0;
int cc(int m,int n){
	if(m<n)return 0;
	if(n==1)return m;
	else if(n==2)return m*(m-1)/2;
	return m*(m-1)*(m-2)/6;
}
int main(){
	for(int a=2;al<501;++a){
		int t1=cc(a,3);
		for(int b=1;b<a&&al<501;++b){
			int t2=cc(b,2)+t1;
			for(int c=0;c<b&&al<501;++c){
				int tmp=t2+cc(c,1);
				if(tmp<501&&ans[tmp][0]==0){
					++al;
					ans[tmp][0]=a;
					ans[tmp][1]=b;
					ans[tmp][2]=c;
				} 
			}
		}
	}
	int n;
	while(cin >> n){
		int k;
		while(n--){
			cin >> k;
			for(int i=0;i<3;++i){
				cout << ans[k][i];
			} 
			cout << "\n";
		}
	}
} 
