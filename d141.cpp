#include <iostream>
using namespace std;
int main(){
	long long int t,a,b,c,d,e,f;
	char p;
	cin >> t;
	while(t--){
		cin >> a >> p >>  b >> c >> p >> d >> e >> p >> f;
		int ac=a-c,bd=b-d,ae=a-e,bf=b-f;
		if(ac*bf==bd*ae)
			cout << "collinear\n";
		else
			cout << "not collinear\n";
	}
} 
