#include <iostream>
using namespace std;
string in,po,pre;
int l,index[301];
void dfs(int it,int it2){
	if(it2<0||it>it2)return;
	int ma=-1,mit=-1;
	for(int i=it;i<=it2;++i){
		if(index[in[i]]>ma){
			ma=index[in[i]];
			mit=i;
		}
	}
	pre+=in[mit];
	dfs(it,mit-1);
	dfs(mit+1,it2);
}
int main(){
	cin >> in >> po;
	l=in.length();
	for(int i=0;i<l;++i)
		index[po[i]]=i;
	dfs(0,l-1);
	cout << pre ;
} 
