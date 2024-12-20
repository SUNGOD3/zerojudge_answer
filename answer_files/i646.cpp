#include <iostream>
using namespace std;
int a[8],n;
bool used[8];
void dfs(int x,int y){
	if(y==n){
		for(int i=0;i<n;++i)
			cout << (char)(a[i]+'a');
		cout << "\n";
		return;
	}
	for(int i=0;i<n;++i)
		if(!used[i]){
			used[i]=1;
			a[y]=i;
			dfs(i+1,y+1);
			used[i]=0;
		}
}
int main(){
	while(cin >> n){
		if(n==0)break;
		for(int i=0;i<n;++i){
			used[i]=1;
			a[0]=i;
			dfs(i+1,1);
			used[i]=0;
		}
	}
}
