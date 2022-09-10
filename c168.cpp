#include <iostream>
using namespace std;
int main(){
	int n,a,ap,b,bp,c,cp;
	while(cin >> n){
		cin >> a >> ap >> b >> bp >> c >> cp;
		int min,i;
		for(i=1;a*i<n;i++){};
		min=ap*i;
		for(i=1;b*i<n;i++){};
		if(min>bp*i)
			min=bp*i;
		for(i=1;c*i<n;i++){};
		if(min>cp*i)
			min=cp*i;	
		cout << min << endl;
	}
}
