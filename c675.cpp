#include <iostream>
using namespace std;
int a[10001],b[15752];
inline bool four(int k){
	while(k){
		if(k%10==4)return 1;
		k/=10;
	}
	return 0;
}
char x;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int it=0;
	for(int i=0;i<10001;++i,++it){
		while(four(it))
			++it;
		a[i]=it;
		b[it]=i;
	}
	while(cin >> x >> it)
		if(x=='T')
			cout << a[it] << "\n";
		else
			cout << b[it] << "\n";
} 
