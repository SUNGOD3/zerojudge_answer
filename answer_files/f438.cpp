#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int t,s,a,f;
	cin >> t;
	while(t--){
		cin >> s >> a >> f;
		int x[f],y[f];
		for(int i=0;i<f;++i){
			cin >> x[i] >> y[i];
		}
		sort(x,x+f);
		sort(y,y+f);
		cout << "(Street: " << x[(f-1)/2] << ", Avenue: " << y[(f-1)/2] << ")\n";
	}
} 
