#include <iostream>
using namespace std;
pair <long,long> stk[1000001];//v it
int x,sz=1;
int main(){
	cin.tie(0); ios::sync_with_stdio(0);
	int n;
	cin >> n;
	for(int i=1;i<=n;++i){
		cin >> x;
		while(x<=stk[sz-1].first)sz--;
		cout << stk[sz-1].second << " ";
		stk[sz++]={x,i};
	}
}
