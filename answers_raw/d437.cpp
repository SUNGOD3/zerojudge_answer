#include <iostream>
using namespace std;
long long n,a[51];
int main(){
	while(cin >> n){
		long long ans[51]={1};
		for(int i=0;i<n;++i)
			cin >> a[i];
		for(int i=0;i<n;++i){
			long long nxt[51]={0};
			for(int j=0;j<n;++j){
				nxt[j+1]=ans[j];
				nxt[j]+=ans[j]*a[i];
			}
			for(int j=0;j<=n;++j)
				ans[j]=nxt[j];
		}
		for(int i=n,j=0;i>=0;--i,++j){
			if(ans[i]==0&&i)continue;
			if(i!=n){
				bool j1=0;
				if(ans[i]<0){
					j1=1;
					ans[i]*=-1;
				}
				if((j+j1)%2){
					if(ans[i]==0)cout << "+ ";
					else cout << "- ";
				}
				else
					cout << "+ ";
			}
			if((ans[i]!=1&&ans[i])||i==0)cout << ans[i];
			if(i>1)
				cout << "x^" << i << " ";
			else if(i==1)
				cout << "x ";
			else
				cout << " ";
		}
		cout << "= 0\n";
	}
}
