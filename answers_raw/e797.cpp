#include <iostream>
#include <string>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int x,y;
	string a;
	cin >> x >> y;
	int xx=x;
	getline(cin,a);
	int ans[y]={0},al=(y-1)*2;
	while(x--){
		getline(cin,a);
		for(int i=0;i<=al;i+=2){
			ans[i/2]+=a[i]-48;
		}
	}
	cout << "AND:";
	for(int i=0;i<y;i++){
		if(ans[i]==xx)
		cout << " 1";
		else
		cout << " 0";
	}
	cout << "\nOR:";
	for(int i=0;i<y;i++){
		if(ans[i])
		cout << " 1";
		else
		cout << " 0";
	}
	cout << "\nXOR:";
	for(int i=0;i<y;i++){
		if(ans[i]%2)
		cout << " 1";
		else
		cout << " 0";
	}
} 
