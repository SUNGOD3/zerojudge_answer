#include <iostream>
#include <set>
using namespace std;
multiset <int> s;
int n;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> n){
		if(n==0)break;
		if(n==-1){
			if(s.empty()==0){
				cout << *s.begin() << " ";
				s.erase(s.begin());
			}
		}
		else if(n==-2){
			if(s.empty()==0){
				cout << *(--s.end()) << " ";
				s.erase(--s.end());
			}
		}
		else{
			s.insert(n);
		}
	}
	return 0;
} 
