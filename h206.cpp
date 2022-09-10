#include <iostream>
using namespace std;
int a[1025],n;
int dfs(int l,int r,int b){
	if(l==r)return a[l]; 
	int m=(l+r)/2,lv=dfs(l,m,b+1),rv=dfs(m+1,r,b+1);
	if(b%2)return max(lv,rv);
	return min(lv,rv);
}
int main(){
	cin >> n;
	for(int i=0;i<n;++i)
		cin >> a[i];
	cout << dfs(0,n-1,1);
} 
