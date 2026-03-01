#include <iostream>
using namespace std;
string m,t,ans;
bool judge(){
	int x=0,o=0;
	for(int i=0;i<9;++i){
		if(t[i]=='X')++x;
		else if(t[i]=='O')++o;
		else return 1;
	}
	if(x!=4||o!=5)return 1;
	for(int i=0;i<9;i+=3){
		if(t[i]==t[i+1]&&t[i+1]==t[i+2])return 1;
	}
	for(int i=0;i<3;++i){
		if(t[i]==t[i+3]&&t[i]==t[i+6])return 1;
	}
	if(t[0]==t[4]&&t[4]==t[8])return 1;
	if(t[2]==t[4]&&t[4]==t[6])return 1;;
	return 0;
}
void dfs(int it){
	if(it==9){
		if(judge()==0)
			ans+=t;
		return;
	}
	if(m[it]=='-'){
		t[it]='O';
		dfs(it+1);
		t[it]='X';
		dfs(it+1);
	}
	else{
		dfs(it+1);
	}
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> m){
		t=m;
		ans="";
		dfs(0);
		int al=ans.length()/9;
		cout << al << "\n" ;
		for(int i=0;i<al;++i){
			for(int j=0;j<9;++j){
				cout << ans[i*9+j];
				if(j%3==2)cout << "\n";
			}
			cout << "\n";
			cout << "\n";
		}
	}
} 
