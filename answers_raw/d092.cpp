#include <iostream>
#include <algorithm>
using namespace std;
struct c{
	int p;
	int v;
};
bool cmp(c a,c b){
	if(a.v==b.v)
		return a.p>b.p;
	return a.v>b.v;
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int n,x,y;
	while(cin >> n){
		if(n==0)break;
		c a[n];
		for(int i=0;i<n;i++){
			cin >> x >> y;
			if(x>y)
				a[i].p=1;
			else if(x<y)
				a[i].p=-1;
			else
				a[i].p=0;
			a[i].v=x+y;
		}
		sort(a,a+n,cmp);
		for(int i=0;i<n;i++){
			if(a[i].p==1)
				cout << '>';
			else if(a[i].p==0)
				cout << '=';
			else
				cout << '<';
			cout << a[i].v << " ";
		}
		cout << "\n";
	}
} 
