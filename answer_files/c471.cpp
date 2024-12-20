#include <iostream>
#include <algorithm>
using namespace std;
struct p{
	long long int f,w;
};
long long int n,ans,sum;
p a[1000001];
bool cmp(p x,p y){
	if(x.f*y.w>x.w*y.f){
		return 1;
	}
	return 0;
}
int main (){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n;
	for(int i=0;i<n;++i){
		cin >> a[i].w;
	}
	for(int i=0;i<n;++i){
		cin >> a[i].f;
	}
	sort(a,a+n,cmp);
	for(int i=0;i<n;++i){
		ans+=(sum)*a[i].f;
		sum+=a[i].w;
	}
	cout << ans ;
} 
