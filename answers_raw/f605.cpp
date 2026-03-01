#include <iostream>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int n,d,s=0,m=0,a,b,c;
	cin >> n >> d;
	while(n--){
		cin >> a >> b >> c;
		if(max(a,max(b,c))-min(a,min(b,c))>=d){
			++s;
			m+=(a+b+c)/3;
		}
	}
	cout << s << " " << m;
} 
