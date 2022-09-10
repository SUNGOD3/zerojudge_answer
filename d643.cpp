#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
map < string , int > ans;
int al;
bool sth;
string a;
void fd(int k){
	int it=0;
	string s[al/k],tmp;
	for(int i=0;i<al;++i){
		tmp+=a[i];
		if((i+1)%k==0){
			s[it]=tmp;
			++it;
			tmp.clear();
		}
	}
	sort(s,s+it);
	for(int i=0;i<it;++i)
		tmp+=s[i];
	++ans[tmp];
	if(ans[tmp]==1){
		cout << tmp << "\n";
		sth=1;
	}
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> a;
	++ans[a];
	al=a.length();
	for(int i=1;i<al;++i)
		if(al%i==0)
			fd(i);
	if(sth==0)
		cout << "bomb!";
}
