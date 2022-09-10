#include <iostream>//zj 的都過了，你們的測資很讚喔 
using namespace std;
int ans=0,n=0;
struct bomb{
	int no=0,x,y;
}a[10001];
int main(){
	int d;
	cin >> d >> d >> d;
	while(d--){
		cin >> a[n].x >> a[n].y;
		for(int i=0;i<n;i++)
			if(abs(a[i].x-a[n].x)<3&&abs(a[i].y-a[n].y)<3)
				a[n].no=ans;
		if(a[n].no==0){
			ans++;
			a[n].no=ans;
		}
		n++;
	}
	cout << ans << "\n";
} 
