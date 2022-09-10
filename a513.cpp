#include <iostream>
#include <queue>
using namespace std;
int ca,n,m,k,is;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> ca;
	for(int i=1;i<=ca;++i){
		cin >> n >> m;
		priority_queue <int> q;
		while(n--){
			cin >> k;
			q.push(k);
		}
		cout << "Case " << i << ":\n";
		while(m--){
			cin >> is;
			if(is==2){
				if(q.empty()){
					cout << "It's empty!\n";
				}
				else{
					cout << "Max: "<< q.top() << "\n";
					q.pop();
				}
			}
			else{
				cin >> k;
				q.push(k);
			}
		}
		if(q.empty()){
			cout << "It's empty!\n";
		}
		else{
			while(q.empty()==0){
				cout << q.top() << " ";
				q.pop();
			}
			cout << "\n";
		}
	}
} 
