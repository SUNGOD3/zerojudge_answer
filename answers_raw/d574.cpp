#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int aa;
	while(cin >> aa){
		int a=aa;
		string ans,ans2;
		int con=1;
		char b,c;
		bool f=0;
		while(a--){
			cin >> b;
			ans2+=b;
			if(f==0){
				f=1;
				c=b;
				continue;
			}
			if(b==c)
				++con;
			else{
				string tmp;
				while(con>0){
					tmp+=con%10+48;
					con/=10;
				}
				reverse(tmp.begin(),tmp.end());
				ans+=tmp;
				ans+=c;
				c=b;
				con=1;
			}
		}
		string tmp;
		while(con>0){
			tmp+=con%10+48;
			con/=10;
		}
		reverse(tmp.begin(),tmp.end());
		ans+=tmp;
		ans+=c;
		con=1;
		if(aa>ans.length()){
			cout << ans << "\n";
		}
		else{
			cout << ans2 << "\n"; 
		}
	}
} 
