#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int n;
	string a[5];
	while(cin >> n){
		if(n==0)break;
		map <string, int> arr;
		map <string, int>::iterator it;
		int ans=1,p=0;
		while(n--){
			for(int i=0;i<5;++i)
				cin >> a[i];
			sort(a,a+5);
			string t;
			for(int i=0;i<5;++i)
				t+=a[i];
			++arr[t];
			ans=max(ans,arr[t]);
		}
		for(it=arr.begin();it!=arr.end();++it)
			if(it->second==ans)
				p+=it->second;
		cout << p << "\n";
	}
} 
