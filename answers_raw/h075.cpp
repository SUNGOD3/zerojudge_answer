#include <iostream>
#include <algorithm>
using namespace std;
long long a[105],x,y,z,id,n;
int main(){
	cin >> n;
	for(int i=0;i<n;++i){
		cin >> id >> x >> y >> z;
		a[i] = (x*5+y*3+z*2)*1600000000+x*8000000+y*40000+z*200+(100-id);
	}
	sort(a,a+n);
	for(int i=n-1;i>=0;--i){
		int s=a[i]/1600000000;
		if(s%10==0)
			cout << 100-a[i]%200 << " " << s/10 << "\n";
		else
			cout << 100-a[i]%200 << " " << s/10 << "." << s%10 << "\n";
	}
} 
