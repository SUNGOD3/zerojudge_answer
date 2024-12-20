#include <iostream>
#include <algorithm>
using namespace std;
struct p{
	int no;
	float t;
};
bool cmp(p a,p b){
	return a.t<b.t;
}
int n;
int main(){
	while(cin >> n){
		p play[n];
		int en=n/8;
		p ans[8][en];
		for(int i=0;i<n;++i)
			cin >> play[i].no >> play[i].t;
		sort(play,play+n,cmp);
		for(int i=0;i<8;++i)
			for(int j=0;j<en;++j)
				ans[i][j]=play[i*en+j];
		for(int i=0;i<en;++i)
			cout << i+1 << " " << ans[6][i].no << " "  << ans[4][i].no << " " << ans[2][i].no << " " << ans[0][i].no << " " << ans[1][en-i-1].no << " " << ans[3][en-i-1].no << " " << ans[5][en-i-1].no << " " << ans[7][en-i-1].no << "\n";
	}
} 
