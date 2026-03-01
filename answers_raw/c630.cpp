#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
struct lg{
	float v,a,b;
};
inline bool cmp(lg x,lg y){
	if(x.v>y.v||(x.v==y.v&&x.a>y.a))return 1;
	return 0;
}
lg ans[10000];
int it=0;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> ans[it].a >> ans[it].b){
		ans[it].v=log(ans[it].a)*ans[it].b;
		++it;
	}
	sort(ans,ans+it,cmp);
	for(int i=0;i<it;++i)
		cout << ans[i].a << " " << ans[i].b << "\n";
} 
