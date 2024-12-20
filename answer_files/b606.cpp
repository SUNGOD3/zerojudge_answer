#include <iostream>
#include <queue>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int n,t;
	while(cin >> n){
		if(n==0)break;
		priority_queue< int,vector<int>,greater<int> > a;
		int ans=0;
		for(int i=0;i<n;++i){
			cin >> t;	
			a.push(t);
		}
		int k=a.size();
		while(k-->1){
			int tmp=0;
			tmp+=a.top();
			a.pop();
			tmp+=a.top();
			a.pop();
			a.push(tmp);
			ans+=tmp;
		}
		cout << ans << "\n";
	}
} 
