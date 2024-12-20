#include <iostream>
using namespace std;
bool a[100001];
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int n,m,x,y,s=0;
	cin >> n >> m;
	while(m--){
		cin >> x >> y;
		for(int i=x;i<y;++i)
			a[i]=1;
	}
	while(s<n){
		int k=s;
		while(a[k]==0&&k<n)
			++k;
		if(k!=s)
			cout << s << " " << k << "\n"; 
		s=max(s+1,k);
	}
} 
