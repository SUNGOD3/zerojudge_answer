#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	std::ios::sync_with_stdio(false);
    cin.tie(NULL);
	int a[10],sum=0;
	while(cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4]>>a[5]>>a[6]>>a[7]>>a[8]>>a[9]){
		for(int i=0;i<10;i++)
			sum+=a[i];
		sum/=4;
		sort(a,a+10);
		a[3]=sum-a[0]-a[9];
		a[5]=a[8]-a[3];
		a[6]=a[1]-a[3];
		a[2]=a[0]-a[6];
		a[4]=a[9]-a[5];
		cout << a[6] << " " << a[2] << " " << a[3] << " " << a[4] << " " << a[5] << endl;
		sum=0;
	}
} 
