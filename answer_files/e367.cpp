#include <iostream>
using namespace std;
int ab[100001];
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int bf=0;
	for(int i=1;i<=100001;++i){
		bf^=i;
		ab[i]=ab[i-1]^bf;
	}
	int a,b;
	while(cin >> a >> b)
		cout << (ab[b]^ab[a-1]) << "\n";
} 
