#include <iostream>
#include <algorithm>
using namespace std;
int a[1005],ans;
bool cmp(int x,int y){
	if(abs(x)>abs(y))return 1;
	return 0;
}
int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;++i)
		cin >> a[i];
	sort(a,a+n,cmp);
	for(int i=0;i<n;++i)
		if(i&&a[i]*a[i-1]<0)
			++ans;
	cout << ans;
} 
