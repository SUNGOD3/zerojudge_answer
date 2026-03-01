#include <iostream>
#include <queue>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int n,m,t;
	while(cin >> n >> m){
		priority_queue <int> a;
		int mn=0,s=0;
		for(int i=0;i<n;++i){
			cin >> t;
			a.push(t);
		}
		mn=a.top();
		while(m--){
			cin >> t;
			while(t&&!s){
				if(a.top()>=t){
					int tmp=a.top()-t;
					t=0;
					a.pop();
					a.push(tmp);
				}
				else{
					t-=a.top();
					a.pop();
					a.push(0);
				}
				if(a.top()==0&&t)
					s=1;
			}
		}
		if(s)
			cout << "Oh My God\n";
		else
			cout << mn << " " << a.top() << "\n";
	}
}
