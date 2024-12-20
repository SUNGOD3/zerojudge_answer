#include <iostream>
#include <algorithm>
using namespace std;
struct cls{
	int begin;
	int end;
	int day;
}; 
bool cmp(cls x,cls y){
	if(x.day==y.day){
		if(x.end==y.end)
			return x.begin<y.begin; 
		return x.end<y.end;
	}
	return x.day<y.day;
}
int main(){
	int n,max,ans,maxd;
	while(cin >> n){
		max=0;ans=0;maxd=0;
		cls a[n];
		for(int i=0;i<n;i++)
			cin >> a[i].day >> a[i].begin >> a[i].end ;
		sort(a,a+n,cmp);
		for(int i=0;i<n;i++){
			//cout << a[i].day << " " << a[i].begin << " " << a[i].end << "\n";
			if(a[i].day!=maxd){
				maxd=a[i].day;
				max=a[i].end;
				ans++;	
			}
			else if(a[i].begin>=max){
				max=a[i].end;
				ans++;
			}
		}
		cout << ans << "\n";
	}
}
