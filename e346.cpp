#include <iostream>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	long long int c,b;
	while(cin >> c){
		long long int a[c+1]={0},x,y;
		for(int i=1;i<=c;i++){
			cin >> a[i];
			if(i>1)
				a[i]+=a[i-1];
		}
		cin >> b;
		while(b--){
			cin >> x >> y;
			cout << a[y]-a[x-1] << "\n";
		}
	}
} 
