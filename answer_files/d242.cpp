#include <iostream>
#include <algorithm>
using namespace std;
int lis[500001],v[500001],a[500001],it,n,k;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> n){
		a[k]=n;
		if(it==0||n>lis[it-1]){
			lis[it]=n;
			++it;
			v[k]=it;
		}
		else{
			int tmp=(lower_bound(lis,lis+it,n)-lis);
			v[k]=tmp+1;
			lis[tmp]=n;
		}
		++k;
	}
	cout << it << "\n-\n";
	int itt=it;
	for(int i=k-1;i>=0&&it;--i){
		if(v[i]==it){
			lis[it]=a[i];
			--it;
		}
	}
	for(int i=1;i<=itt;++i)
		cout << lis[i] << "\n";
} 
