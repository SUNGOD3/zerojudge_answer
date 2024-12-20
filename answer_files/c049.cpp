#include <iostream>
using namespace std;
int n;
int main(){
	bool a=0;
	while(cin >> n){
		if(a)cout << "\n";
		a=1;
		int ans1=0,ans2=0;
		float nn=(n*2.0-1)/2.0;
		nn*=nn;
		for(int i=0;i<n;++i)
			for(int j=0;j<n;++j)
				if(i*i+j*j<=nn)
					++ans1;
		for(int i=1;i<=n;++i)
			for(int j=1;j<=n;++j)
				if(i*i+j*j<=nn)
					++ans2;
		cout << "In the case n = " << n << ", " << (ans1-ans2)*4 << " cells contain segments of the circle.\nThere are " << ans2*4 << " cells completely contained in the circle.\n";
	}
} 
