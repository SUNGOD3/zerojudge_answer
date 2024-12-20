#include <iostream>
#include <algorithm>
using namespace std;
struct day{
	int s,e;
};
bool cmp(day x,day y){
	if(y.e<x.e||(y.e==x.e&&y.s>x.s))return 0;
	return 1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		day a[20];
		int it=0,ans=0,time=0;
		while(cin >> a[it].s >> a[it].e){
			if(a[it].s==0&&a[it].e==0)break;
			++it;
		}
		sort(a,a+it,cmp);
		for(int i=0;i<it;++i){
			if(a[i].s>=time){
				time=a[i].e;
				++ans;
			} 
		}
		cout << ans << "\n";
	}
} 
