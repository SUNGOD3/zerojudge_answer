#include <iostream>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int n;
	string a;
	while(cin >> n >> a){
		int al=a.length(),ans=0;
		for(int i=0;i<al;++i){
			string tmp;
			for(int j=i;j+n+1<al;++j){
				tmp+=a[j];
				string tt;
				for(int k=j+n+1,c=0+i;k<al&&c<=j;++k,++c)
					tt+=a[k];
				if(tt==tmp)
					++ans;
			}
		}
		cout << ans << "\n";
	}
} 
