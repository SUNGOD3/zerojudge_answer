#include <iostream>
#include <algorithm>
using namespace std;
struct card{
	char color;
	int num;
};
bool cmp(card a,card b){
	if(a.num==b.num)
		return a.color>b.color;
	return b.num<a.num;
}
int main(){
	int n;
	while(cin >> n){
		card a[n];
		for(int i=0;i<n;i++)
			cin >> a[i].color >> a[i].num;
		sort(a,a+n,cmp);
		cin >> n;
		cout << a[n-1].color << " " << a[n-1].num << "\n";
	}
} 
