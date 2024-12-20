#include <iostream>
#include <set> 
using namespace std;
int n,ans;
string a[50005];
set <string> st;
int main(){
	cin.tie(0); ios::sync_with_stdio(0);
	cin >> n;
	for(int i=0;i<n;++i){
		cin >> a[i];
		st.insert(a[i]);
	} 
	for(int i=0;i<n;++i){
		for(int A=1;A*2<a[i].size();++A){
			int B=a[i].size()-A*2,cnt=0;
			for(int j=0;j<A;++j){
				if(a[i][j]!=a[i][j+B+A]){
					cnt=1;
					break;
				}
			}
			if(cnt)continue;
			string tmp;
			for(int j=A;j<A+B;++j)
				tmp+=a[i][j];
			ans+=st.count(tmp);
		}
	}
	cout << ans;
} 
