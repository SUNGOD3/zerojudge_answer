#include <iostream>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int n;
	cin >> n;
	int ans[n]={0},t,tmp[n];
	for(int i=0;i<n;++i){
		cin >> t;
		ans[i]=t;
	}
	while(cin >> t){
		int l[n]={1},sc=0;
		tmp[t-1]=1;
		for(int i=1;i<n;++i){
			l[i]=1;
			cin >> t;
			tmp[t-1]=i+1;
		}
		for(int i=0;i<n;++i)
			for(int j=i+1;j<n;++j)
				if(ans[tmp[i]-1]<ans[tmp[j]-1])
					l[j]=max(l[i]+1,l[j]);
		for(int i=0;i<n;++i)
			if(l[i]>sc)
				sc=l[i];
		cout << sc << "\n"; 
	}
} 
