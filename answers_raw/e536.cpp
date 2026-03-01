#include <iostream>
#include <set>
#include <vector>
using namespace std;
int a[1001],n,m,ca,k;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> n){
		if(n==0)break;
		for(int i=0;i<n;++i)
			cin >> a[i];
		cin >> m;
		cout << "Case " << ++ca << ":\n";
		set <int> ans;
		for(int i=0;i<n;++i)
			for(int j=i+1;j<n;++j)
				ans.insert(a[i]+a[j]);
		vector <int> vct;
		for (set<int>::iterator it = ans.begin(); it != ans.end(); it++) 
   		 	vct.push_back(*it);
		n = vct.size();
		while(m--){
			cin >> k;
			int it=(lower_bound(vct.begin(),vct.end(),k)-vct.begin());
			if(it!=0&&(it==n||vct[it]-k>k-vct[it-1]))
				--it;
			cout << "Closest sum to " << k << " is " << vct[it] << ".\n";
		}
	}
} 
