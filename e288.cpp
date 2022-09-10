#include <iostream>
#include <string.h>
#include <map>
using namespace std;
int m,n;
long long int sum,re,tmp2;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> m >> n;
	char b[1005];
	for(int i=0;i<m;++i){
		re*=2;
		++re;
	}
	map <long long,int> ans;
	map <long long,int> :: iterator iter;
	while(n--){
		cin >> b;
		int bl = strlen(b);
		tmp2=0;
		for(int i=0;i<bl;++i){
			if(b[i]<='Z')
				tmp2 |= (1LL << (b[i] - 'A'));
			else
				tmp2 |= (1LL << (b[i] - 'a' +26));			
		} 
		if ((iter = ans.find(tmp2^re)) != ans.end())
			sum += iter->second;
		++ans[tmp2];
	}
	cout << sum;
} 
