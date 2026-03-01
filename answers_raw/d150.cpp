#include <iostream>
#include <algorithm>
using namespace std;
bool cmp(int a,int b){
	return a>b;
}
int main(){
	int t;
	cin >> t;
	while(cin >> t){
		int a[t]={0},sum=0;
		for(int i=0;i<t;i++)
			cin >> a[i];
		sort(a,a+t,cmp);
		for(int i=2;i<t;i+=3)
			sum+=a[i];
		cout << sum << "\n";	
	}
} 
