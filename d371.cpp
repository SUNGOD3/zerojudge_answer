#include <iostream>
#include <queue>
using namespace std;
long long int ans,n,s,k;
priority_queue <long long int,vector <long long int> ,greater<long long int > > p;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n;
	for(int i=0;i<n;++i){
		cin >> k;
		p.push(k);
	}
	for(int i=0;i<n-1;++i){
		long long int x=p.top(),y;
		p.pop();
		y=p.top();
		p.pop();
		ans+=x+y;
		p.push(x+y);
	}
	cout << ans;
} 
