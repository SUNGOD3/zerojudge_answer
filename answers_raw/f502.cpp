#include <iostream> 
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int n,k,ca;
	cin >> ca;
	while(ca--){
		cin >> n >> k;
		int a[201]={0},t,s=0;
		for(int i=0;i<n;++i){
			cin >> t;
			t=abs(t)%k;
			if(i==0)
				a[t]=1;
			else{
				int t2[201]={0};
				for(int j=0;j<=200;++j)
					if(a[j]){
						t2[(j+t)%k]=1;
						t2[abs(j-t)%k]=1;
					}
				for(int j=0;j<=200;++j)
					a[j]=t2[j];
			}
		}
		for(int i=0;i<=200;i+=k)
			if(a[i]){
				s=1;
				break;
			}
		if(s)
			cout << "Divisible\n";
		else
			cout << "Not divisible\n";
	}
}
