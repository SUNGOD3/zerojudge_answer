#include <iostream>
using namespace std;
int m,n,x,y;
int main(){
	cin >> m >> n;
	int a[m+1]={0},ans=0;
	while(n--){
		cin >> x >> y;
		y*=x;
		for(int i=m-x;i>=0;--i){
			if(a[i]||!i){
				a[i+x]=max(a[i+x],a[i]+y);
				ans=max(ans,a[i+x]);
			}
		}
	} 
	cout << ans;
} 
