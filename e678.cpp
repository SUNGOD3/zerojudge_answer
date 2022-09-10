#include <iostream>
using namespace std;
long long int ans1[12]={1,2},ans2[12]={2,6};
int main(){
	int n;
	for(int i=2;i<12;++i){
		ans1[i]=(i+1)*(ans1[i-1]+ans1[i-2]);
		ans2[i]=ans2[i-1]*(i+2);
	}
	cin >> n;
	while(cin >> n)
		cout << ans1[n-2] << "/" << ans2[n-2] << "\n";
} 
