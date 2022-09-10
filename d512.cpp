#include <iostream>
#include <set>
using namespace std;
long long n,k;
set <long long> :: iterator it;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> n){
		set <long long> s={0};
		for(int i=0;i<n;++i){
			cin >> k;
			for(it=s.end();*it;){
				--it;
				s.insert(*it+k);
			}
		} 
		cout << s.size()-1 << "\n";
 	}
} 
