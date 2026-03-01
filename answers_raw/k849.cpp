#include <iostream>
using namespace std;
int x,y,nxt[1001],pre[1001];
int main(){
	cin >> x;
	while(cin >> x >> y){
		nxt[x]=y;
		pre[y]=x;
	}
	for(int i=0;i<1001;++i){
		if(nxt[i]&&!pre[i]){
			int tmp=i;
			while(tmp!=-1){
				cout << tmp << " ";
				tmp=nxt[tmp];
			}
		}
	}
	return 0;
} 
