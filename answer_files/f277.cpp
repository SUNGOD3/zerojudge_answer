#include <iostream>
#include <algorithm> 
using namespace std;
struct cls{
	string name,its;
	int c,num;
};
inline bool cmp(cls x,cls y){
	if(x.c>y.c||(x.c==y.c&&x.num>y.num))return 0;
	return 1;
}
int n;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n;
	cls a[n];
	for(int i=0;i<n;++i)
		cin >> a[i].name >> a[i].c >> a[i].num >> a[i].its;
	sort(a,a+n,cmp);
	for(int i=0;i<n;++i)
		cout << a[i].c << " " << a[i].num << " " << a[i].name << "\n" << a[i].its << "\n";
} 
