#include <iostream>
using namespace std;
int a[8],ct;
bool jd(int x,int y){
	for(int i=0;i<x;++i)
		if(a[i]==y||abs(i-x)==abs(a[i]-y))return 0;
	return 1;
}
void dfs(int x,int y){
	if(x==8){
		cout << ++ct << ": ";
		for(int i=0;i<8;++i)
			cout << a[i]+1;
		cout << "\n";
		return;
	}
	for(int i=0;i<8;++i)
		if(jd(x,i))
			dfs(x+1,a[x]=i);
}
int main(){
	for(int i=0;i<8;++i)
		dfs(1,a[0]=i);
} 
