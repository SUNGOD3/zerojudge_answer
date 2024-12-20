#include <iostream>
using namespace std;
int main(){
	int a,b,n;
	cin >> n;
	for(int i=1,sum=0;i<=n;i++,sum=0){
		cin >> a >> b;
		for(int j=a;j<=b;j++)
			if(j%2==1)
				sum+=j;
		cout << "Case " << i << ": " << sum << "\n";
	}
} 
