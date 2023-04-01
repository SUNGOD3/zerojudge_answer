#include <iostream>
using namespace std;
int n,sz;
string a[10005],x;
int main(){
	cin.tie(0);cout.tie(0); ios::sync_with_stdio(0);
	cin >> n;
	while(n--){
		cin >> x;
		if(x=="Sleep"){
			cin >> a[sz++];
		}
		else if(x=="Test"){
			if(sz==0)cout << "Not in a dream\n";
			else cout << a[sz-1] << "\n";
		}
		else{
			if(sz)--sz;
		}
	}
} 
