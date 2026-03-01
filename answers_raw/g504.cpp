#include <iostream>
#include <queue>
using namespace std;
long long n,m,x,y,ans,nt;
priority_queue <long long,vector <long long>,greater <long long> > p;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n >> m;
	for(int i=0;i<n;++i){
		cin >> x >> y;
		if(i==0)m+=x;
		if(x>m)break;
		while(p.empty()==0&&p.top()<=x){
			ans-=p.size()*(p.top()-nt);
			nt=p.top();
			p.pop();
		}
		ans-=p.size()*(x-nt);
		ans+=y;
		nt=x;
		p.push(x+y);
	}
	//cout << ans << "\n";
	while(p.empty()==0&&p.top()<=m){
		ans-=p.size()*(p.top()-nt);
		nt=p.top();
		p.pop();
	}
	//cout << ans << "\n";
	cout << ans-p.size()*(m-nt);
} 
