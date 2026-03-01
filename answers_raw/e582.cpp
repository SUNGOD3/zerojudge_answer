#include <iostream>
using namespace std;
struct p{
	string x;
	int k;
};
p ans[4][13];
char aaa[4]={'S','W','N','E'};
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	char a,a1,a0;
	while(cin >> a){
		if(a=='#')break;
		for(int i=0;i<4;++i)
			for(int j=0;j<13;++j){
				ans[i][j].x="";
				ans[i][j].k=0;
			}
		for(int j=0;j<13;++j){
			for(int i=0;i<4;++i){
				cin >> a1 >> a0;
				ans[i][j].x=a1;ans[i][j].x+=a0;
				if(a1=='D')
					ans[i][j].k=100;
				else if(a1=='S')
					ans[i][j].k=200;
				else if(a1=='H')
					ans[i][j].k=300;
				if(a0<='9')
					ans[i][j].k+=(a0-48)*4; 
				else if(a0=='T')
					ans[i][j].k+=40;
				else if(a0=='J')
					ans[i][j].k+=44;
				else if(a0=='Q')
					ans[i][j].k+=48;
				else if(a0=='K')
					ans[i][j].k+=52;
				else
					ans[i][j].k+=56;
			}
		}
		for(int i=0;i<4;++i)
			for(int j=0;j<13;++j)
				for(int kk=j+1;kk<13;++kk)
					if(ans[i][j].k>ans[i][kk].k)
						swap(ans[i][j],ans[i][kk]);
		int st=2;
		if(a=='N')
			st=1;
		else if(a=='E')
			st=0;
		else if(a=='S')
			st=3;
		for(int i=0;i<4;++i){
			if(i)cout << "\n";
			cout << aaa[i] << ":";
			for(int j=0,itt=(st+i)%4;j<13;++j)
				cout << " " << ans[itt][j].x;
		}
		cout << "\n";
	}
} 
