#include <iostream>
using namespace std;
int main(){
	int n,m;
	cin >> n >> m;
	if(m==0||n%m==0)cout << "OK!";
	else cout << n%m;
}
