#include <iostream>
using namespace std;
int k;
string ans[10002]={"0","1"};
void dp(int al,int now){
	if(now==10001)return;
	bool add=1;
	for(int i=0;i<al;++i){
		if(ans[now][i]!='9'){
			add=0;
		}
	}
	if(add==1){
		++now;
		ans[now]+="1";
		for(int i=0;i<al;++i)
			ans[now]+='0';
		dp(al+1,now);
		return;
	}
	else{
		for(int i=al-1;i>0;--i){
			if(ans[now][i]+1<='9'&&abs(ans[now][i]+1-ans[now][i-1])<=1){
				ans[now+1]=ans[now];
				ans[now+1][i]++;
				for(int j=i;j<al;++j)
					if(ans[now+1][j]>'0')
						ans[now+1][j+1]=ans[now+1][j]-1;
					else
						ans[now+1][j+1]='0';
				dp(al,now+1);
				return;
			}
		}
		ans[now+1]=ans[now];
		ans[now+1][0]++;
		for(int i=0;i<al;++i)
			if(ans[now+1][i]>'0')
				ans[now+1][i+1]=ans[now+1][i]-1;
			else
				ans[now+1][i+1]='0';
		dp(al,now+1);
		return;
	}
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	dp(1,1);
	while(cin >> k)
		cout << ans[k] << "\n";
}
