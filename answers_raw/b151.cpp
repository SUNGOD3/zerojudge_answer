#include <iostream>
#include <queue>
using namespace std;
int n,tmp;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> n){
		priority_queue< int,vector<int>,greater<int> > a;
		for(int i=0;i<n;++i){
			cin >> tmp;
			a.push(tmp);
		}
		long long int ans=0;
		for(int i=1;i<n;++i){
			int x=a.top();
			a.pop();
			int y=a.top();
			a.pop();
			x+=y;
			ans+=x;
			a.push(x);
		}
		cout << ans << "\n";
	} 
}
 
