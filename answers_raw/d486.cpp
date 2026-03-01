#include <iostream>
#include <queue>
using namespace std;
int n;
queue <int> q; 
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> n){
		if(n==0)break; 
		queue <int> empty;
		swap(empty,q);
		q.push(n);
		int s=1,i=0,t=0,ans=0;
		while(i<n){
			int k=q.front();
			cout << "f(" << k << ") ";
			--s;
			if(k>1){
				q.push(k-1);
				q.push(k-2);
				t+=2;
			}
			else{
				q.push(k);
				++t;
			}
			if(s==0){
				cout << "\n";
				if(i==n-1)ans=t;
				s=t;
				t=0;
				++i;
			}
			q.pop();
		}
		cout << "f(" << n << ") = " << ans << "\n";
	}
} 
