#include <iostream>
using namespace std;
int x,y,ans[1500000][2],it;
string s;
int main(){
	cin.tie(0);
	cout.tie(0); ios::sync_with_stdio(false);
	cin >> s;
	for(int i=s.length()-1;i>=0;--i){
		if(s[i]=='F'){
			ans[it][0]=x;
			ans[it][1]=y;
			++it;
		}
		else if(s[i]=='A'){
			++y;
		}
		else{
			++x;
		}
	}
	for(int i=it-1;i>=0;--i){
		cout << ans[i][0] << " " << ans[i][1] << "\n";
	} 
} 
