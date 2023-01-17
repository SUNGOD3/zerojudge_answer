#include <iostream>
#include <set>
using namespace std;
int n;
int main(){
	cin.tie(0); ios::sync_with_stdio(0);
	while(cin >> n){
		if(n==0)break;
		set <int> st;
		while(!st.count(n)){
			st.insert(n);
			n*=n;
			n=n%1000000;
			n/=100;
		}
		cout << st.size() << "\n";
	}
} 
