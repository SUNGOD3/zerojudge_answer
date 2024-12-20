#include <iostream>
#include <algorithm>
using namespace std;
long long int n,m,a[100001],f,v;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n >> m;
	for(int i=0;i<n;++i)
		cin >> a[i];
	sort(a,a+n);
	for(int i=0;i<m;++i){
		cin >> f;
		bool c=1;
		for(int q=0,p=1;p<n&&c;){
			long long int dif=a[p]-a[q];
			if(dif<f||p==q)
				++p;
			else if(dif>f)
				++q;
			else
				c=0;
		}
		if(c)
			cout << "NO\n";
		else
			cout << "YES\n";
	}
}

