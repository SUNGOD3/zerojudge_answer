#include <iostream>
#include <string>
using namespace std;
int main(){
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		int x=0,ss,a[n];
		string s;
		for(int i=0;i<n;++i){
			cin >> s;
			if(s=="LEFT")
				a[i]=-1;
			else if(s=="RIGHT")
				a[i]=1;
			else{
				cin >> s >> ss;
				a[i]=a[ss-1];
			}
			x+=a[i];
		}
		cout << x << "\n";
	}
}
