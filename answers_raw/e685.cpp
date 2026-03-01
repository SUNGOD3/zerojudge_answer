#include <iostream>
#include <stack>
using namespace std;
int al,nl,gl;
string a,goal;
inline void dfs(string ans,int sl,int i,int o,stack <char> stk,string now){
	if(sl&&ans[sl-1]!=goal[sl-1])return;
	else if(sl==gl){
		now[nl]='\n';
		cout << now;
		return;
	}
	if(i<al){
		stk.push(a[i]);
		dfs(ans,sl,i+1,o,stk,now+"i ");
		stk.pop();
	}
	if(o<al&&!stk.empty()){
		ans+=stk.top();
		stk.pop();
		dfs(ans,sl+1,i,o+1,stk,now+"o ");
	}
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(getline(cin,a)){
		getline(cin,goal);
		al=a.length();
		gl=goal.length();
		nl=(al<<2)-1;
		stack <char> stk;
		cout << "[\n";
		if(al==gl)dfs("",0,0,0,stk,"");
		cout << "]\n"; 
	}
} 
