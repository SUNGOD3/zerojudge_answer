#include <iostream>
#include <queue>
using namespace std;
long long n,st,k,m;
priority_queue <long long,vector <long long>,greater <long long> > q;//min
priority_queue <long long> p;//max
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> k){
		//cout << st << " ";
		if(st==0){
			cout << k << "\n";
			n=k;
		}
		else if(st==1){
			cout << (k+n)/2 << "\n";
			m=k;
			p.push(min(n,m));//1
			q.push(max(n,m));//3
		}
		else if(st==2){
			if(k>q.top()){
				q.push(k);//3 4
				k=q.top();//k = 3
				q.pop();// 4
			}
			else if(k<p.top()){
				p.push(k);
				k=p.top();
				p.pop();
			}
			cout << k << "\n";
			n=k;
		}
		else if(st%2){
			//1 3 4 60
			if(k>=n){
				q.push(k);//4 60
				m=(n+q.top())/2;
			}
			//2 3 4 1
			else{
				p.push(k);
				m=(n+p.top())/2;
			}
			cout << m << "\n"; 
		}
		else{
			if(q.size()>p.size()){
				p.push(n);
				if(k>q.top()){
					q.push(k);
					k=q.top();
					q.pop();
				}
				p.push(k);
				n=p.top();
				p.pop();
			}
			else{
				q.push(n);
				if(k<p.top()){
					p.push(k);
					k=p.top();
					p.pop();
				}
				q.push(k);
				n=q.top();
				q.pop();
			}
			cout << n << "\n";
		}
		++st;
	}
}
