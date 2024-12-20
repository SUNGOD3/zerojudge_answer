#include <iostream>
#include <algorithm>
using namespace std;
struct p{
	int l,r;
};p a[10001];
bool cmp(p x,p y){
	if(x.l<y.l||(x.l==y.l&&x.r<y.r))return 1;
	return 0;
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int n,sum=0,lit=0,rit=0;
	cin >> n;
	for(int i=0;i<n;++i)
		cin >> a[i].l >> a[i].r;
	sort(a,a+n,cmp);
	for(int i=0;i<n;++i){
		if(a[i].l>=rit){
			lit=a[i].l;
			rit=a[i].r;
			sum+=rit-lit;
		}
		else if(a[i].r>rit){
			sum+=a[i].r-rit;
			rit=a[i].r;
		}
	}
	cout << sum;
} 
