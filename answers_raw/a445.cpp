#include <iostream>
using namespace std;
int a[1000001]={0};
int ff(int n){
	if(a[n]==n)
		return n;
	return a[n]=ff(a[n]);
}
int main(){
	int N,M,Q;
	cin >> N >> M >> Q;
	for(int i=1;i<=N;i++)
		a[i]=i;
	while(M--){
		int x,y;
		cin >> x >> y;
		x = ff(x);
		y = ff(y);
		if(x!=y)
			a[y] = x; 
	}
	while(Q--){
		int x,y;
		cin >> x >> y;
		if(ff(x)==ff(y))
			printf(":)\n");	
		else
			printf(":(\n");
	}
} 
