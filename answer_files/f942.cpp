#include <iostream>
#include <map>
using namespace std;
map <int,int> mp,mp2;
string s;
int it;
int sh2(string t){
	int k=0;
	for(int i=0;i<t.length();++i){
		k+=(t[i]+i)%31;
	}
	return k;
}
int shash(string t){
	int k=0;
	for(int i=0;i<t.length();++i){
		k+=t[i];
	}
	return k;
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> s){
		++it;
		int tmp=shash(s),tmp2=sh2(s); 
		if(mp[tmp]&&mp2[tmp2]){
			cout << mp[tmp] << " " << it;
			break;
		}
		mp[tmp]=it;
		mp2[tmp2]=it;
	}
}
