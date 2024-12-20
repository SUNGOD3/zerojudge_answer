#include <iostream>
#include <queue>
using namespace std;
priority_queue <long long int,vector<long long int>,greater<long long int> > ans;
long long int d,n,s,sum,tmp;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> d;
	for(int i=0;i<d;++i){
		cin >> n >> s;
		if(i)sum+=s;
		n+=sum;
		ans.push(n);
		tmp+=n;
		while(ans.top()<sum){
			tmp-=ans.top();
			ans.pop();
		}
		cout << tmp-ans.size()*sum << "\n";
	}
} 
