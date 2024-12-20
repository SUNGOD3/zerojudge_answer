#include <iostream>
using namespace std;
int m,n;
string a[105],s;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> m >> n;
	for(int i=0;i<m;++i)
		cin >> a[i];
	cin >> s;
	for(int i=m-1;i>=0;--i){
		int o=0;
		string t;
		for(int j=n-1;j>=0;--j){
			if(a[i][j]=='1'){//54321 -> 15432
				++o;
				t+=s[j];
			}
			else{//54321 -> 43215
				t=s[j]+t;
			}
		}
		s=t;
		if(o%2)
			for(int j=0;j<n/2;++j)
				swap(s[j],s[n/2+j+n%2]);
	}
	cout << s;
} 
