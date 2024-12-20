#include <iostream>
#include <algorithm>
using namespace std;
struct arr{
	int an[21];
};
arr ans[2501];
int n,length[2501],m,t;
bool cmp(arr x,arr y){
	for(int i=0;i<n;++i){ 
		if(x.an[i]<y.an[i]){return 1;}
		else if(x.an[i]>y.an[i]){return 0;}
	} 
	return 0;
}
bool cmp2(arr x, arr y){
	for(int i=0;i<n;++i)
		if(x.an[i]<=y.an[i])return 0;
	return 1;
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> t;
	while(t--){
		cin >> m >> n;
		for(int i=0;i<m;++i){
			for(int j=0;j<n;++j)
				cin >> ans[i].an[j];
			sort(ans[i].an,ans[i].an+n);
		}
		sort(ans,ans+m,cmp);
		for (int i=0; i<m; i++) length[i] = 1;
	    for (int i=0; i<m; i++)
	        for (int j=0; j<i; j++)
	            if (ans[i].an[n-1]<ans[j].an[0]||cmp2(ans[i],ans[j]))
	                length[i] = max(length[i], length[j] + 1);
	    int l = 0;
	    for (int i=0; i<m; i++)
	        l = max(l, length[i]);
		cout << l << "\n";
	}
}
