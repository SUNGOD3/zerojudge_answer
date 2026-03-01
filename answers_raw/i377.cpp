#include <iostream>
using namespace std;
int n,m,w[8][2]={{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}},ax,ay,tp,dis='a'-'A';
char a[80][80];
string s;
bool judge(int x,int y,int z,int stp){
	if(stp==s.size())return 1;
	if(x<=0||y<=0||x>n||y>m||a[x][y]!=s[stp])return 0;
	return judge(x+w[z][0],y+w[z][1],z,stp+1);
}
int main(){
	cin >> n >> m;
	for(int i=1;i<=n;++i)
		for(int j=1;j<=m;++j){
			cin >> a[i][j];
			if(a[i][j]>='A'&&a[i][j]<='Z')
				a[i][j]+=dis;
		}
	cin >> s;
	for(int i=0;i<s.size();++i)
		if(s[i]>='A'&&s[i]<='Z')
			s[i]+=dis;
	for(int i=1;i<=n&&!ax;++i)
		for(int j=1;j<=m&&!ax;++j)
			for(int k=0;k<8&&!ax;++k)
				if(judge(i,j,k,0)){
					ax=i;
					ay=j;
					tp=k;
				}
	if(!ax)
		cout << "NO";
	else
		cout << ax << " " << ay << "\n" << ax+w[tp][0]*(s.size()-1) << " " << ay+w[tp][1]*(s.size()-1);
	return 0;
}
