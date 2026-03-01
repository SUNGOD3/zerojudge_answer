#include <iostream>
#include <iomanip>
#include <map>
using namespace std;
struct tp{
	bool a[4][4];
};
int ans[4][4];
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int n,m,x,y,total=0;
	string t;
	map <string,tp> name;
	cin >> n >> m;
	while(m--){
		cin >> t >> x >> y;
		if(name[t].a[x][y]==0){
			name[t].a[x][y]=1;
			ans[x][y]++;
			++total;
		}
	}
	for(int i=1;i<4;++i){
		if(i==1)
			cout << "navy:";
		else if(i==2)
			cout << "army:";
		else
			cout << "air:";
		cout << ans[i][3]+ans[i][1]+ans[i][2] << " ";	
	}
	cout << "\n";
	for(int i=1;i<4;++i){
		if(i==1)
			cout << "officer:";
		else if(i==2)
			cout << "sergeant:";
		else
			cout << "soldier:";
		cout << ans[3][i]+ans[1][i]+ans[2][i] << " ";	
	}
	cout << "\nsurvival rate: ";
	float t1=n,t2=total;
	cout << fixed  <<  setprecision(1) << t2/t1*100 << "%\n";
} 
