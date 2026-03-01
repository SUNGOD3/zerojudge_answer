#include <iostream>
#include <algorithm>
using namespace std;
struct a{
	int a,b,c;
};
a ar[1001];
bool cmp(a x,a y){
	if(x.b*y.a>x.a*y.b)
		return 1;
	if(x.b*y.a==x.a*y.b){
		if(x.c>y.c)return 0;
		return 1;
	}
	return 0;
}
int main(){
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i=0;i<n;++i){
			cin >> ar[i].a >> ar[i].b;
			ar[i].c=i+1;
		}
		sort(ar,ar+n,cmp);
		for(int i=0;i<n;++i){
			cout << ar[i].c ;
			if(i!=n-1)cout << " ";
		}
		cout << "\n";
		if(t)cout << "\n";
	}
} 
