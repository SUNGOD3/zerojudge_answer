#include <iostream>
#include <algorithm>
using namespace std;
struct inf{
	string id;
	string name;
	int time;
};
bool cmp(inf x,inf y){
	if(x.id[8]>y.id[8])
		return 0;
	if(x.id[8]<y.id[8])
		return 1;
	if(x.id[0]>y.id[0])
		return 0;
	if(x.id[0]<y.id[0])
		return 1;
	if(x.time>y.time)
		return 0;
	return 1;
}
int main(){
	int n;
	cin >> n;
	inf a[n];
	for(int i=0;i<n;++i){
		cin >> a[i].id >> a[i].name;
		a[i].time=i;
	}
	sort(a,a+n,cmp);
	for(int i=0;i<n;++i)
		cout << a[i].id[8] << ": " << a[i].name << "\n";
} 
