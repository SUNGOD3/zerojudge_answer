#include <iostream>
using namespace std;
int a[7],n;
int main(){
	cin.tie(0); ios::sync_with_stdio(0);
	cin >> n;
	for(int ca=1;ca<=n;++ca){
		int sum=0;
		for(int i=0;i<7;++i){
			cin >> a[i];
			if(i<4)sum+=a[i];
		}
		sum+=(a[4]+a[5]+a[6]-min(a[4],min(a[5],a[6])))/2;
		cout << "Case " << ca << ": ";
		if(sum>=90){
			cout << "A\n";
		}
		else if(sum>=80){
			cout << "B\n";
		}
		else if(sum>=70){
			cout << "C\n";
		}
		else if(sum>=60){
			cout << "D\n";
		}
		else{
			cout << "F\n";
		}
	}
}
