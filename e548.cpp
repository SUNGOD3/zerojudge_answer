#include <iostream>
#include <stack>
#include <queue>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int n,is,v;
	while(cin >> n){
		bool s=1,q=1,p=1;
		stack <int> ss;
		queue <int> qq;
		priority_queue <int> pp;
		for(int i=0;i<n;++i){
			cin >> is >> v;
			if(is==1){
				if(s)
					ss.push(v);
				if(q)
					qq.push(v);
				if(p)
					pp.push(v);
			}
			else{
				if(s){
					if(ss.empty()||ss.top()!=v)
						s=0;
					else
						ss.pop();
				}
				if(q){
					if(qq.empty()||qq.front()!=v)
						q=0;
					else
						qq.pop();
				}
				if(p){
					if(pp.empty()||pp.top()!=v)
						p=0;
					else
						pp.pop();
				}
			}
		}
		if(s+q+p>1)
			cout << "not sure\n";
		else if(s+q+p==0)
			cout << "impossible\n";
		else if(s)
			cout << "stack\n";
		else if(q)
			cout << "queue\n";
		else if(p)
			cout << "priority queue\n";
	}
} 
