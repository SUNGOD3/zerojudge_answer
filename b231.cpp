#include <iostream>
#include <algorithm>
using namespace std;
int n;
struct c{
	int x;
	int y;
};
bool cmp(c xx,c yy){
	if(xx.y>yy.y){
		return 1;
	}
	else if(xx.y==yy.y){
		if(xx.x>yy.x){
			return 1;
		}
	}
	return 0;
}
int main(){
	while(cin >> n){
		c a[n];
		int xt=0,ans=0;//Á`¦L¨ê®É¶¡,ans 
		for(int i=0;i<n;++i){
			cin >> a[i].x >> a[i].y;
		}
		sort(a,a+n,cmp);
		for(int i=0;i<n;++i){
			xt+=a[i].x;
			if(ans<xt+a[i].y)ans=xt+a[i].y;
		}
		cout << ans << "\n"; 
	}
} 
