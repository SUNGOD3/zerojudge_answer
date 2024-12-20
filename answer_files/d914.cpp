#include <iostream>
using namespace std;
int a1[21][21],a2[21][21],n,x,y,b,ans;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n;
	while(n--){
		cin >> x >> y >> b;
		a1[x][y]=b+1;
	}
	cin >> n;
	while(n--){
		cin >> x >> y >> b;
		a2[x][y]=b+1;
	}
	for(int i=0;i<21;++i){
		for(int j=0;j<21;++j){
			if(a1[i][j]+a2[i][j]==3){
				ans+=2;
			}
			else if((a1[i][j]&&!a2[i][j])||(!a1[i][j]&&a2[i][j])){
				++ans;
			}
		}
	}
	cout << ans;
} 
