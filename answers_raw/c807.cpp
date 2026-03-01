#include <iostream>
#include <set>
using namespace std;
int n,is,k,l;
set <int> st;
set <int> :: iterator it,it2;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n;
	while(n--){
		cin >> is;
		if(is==1){
			cin >> k;
			st.insert(k);
		}
		else{
			cin >> k >> l;
			it = st.lower_bound(k);
			it2 = st.lower_bound(l+1);
			st.erase(it,it2);
		}
		if(st.size()<2)cout << st.size() << " ";
		if(st.size()==1)cout << *st.begin();
		else if(st.size()>1)cout << "2 " << *st.begin() << " " << *(--st.end());
		cout << "\n"; 
	}
} 
