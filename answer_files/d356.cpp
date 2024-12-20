#include <iostream>
using namespace std;
int main(){
	double a,b;
	while(cin >> a){
		double sum=0,ans=0;
		b=1;
		while(sum<=a){
			sum+=1/b;
			b++;
			ans++;
		}
		cout << ans << endl;
	}
} 
