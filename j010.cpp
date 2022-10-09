#include <iostream>
using namespace std;
string x="H3LL0 MY L0V3, 1 M H499Y 83C4U53 500N 1 W1LL 83 70 Y0UR 51D3.7H15 71M3 W17H0U7 Y0U H45 833N 373RN4L. 1 1NV173 Y0U 70 7H3 2000N3 70 533 7H3 238R42 4ND 60R1L42.";
string y="HELLO MY LOVE, I M HAPPY BECAUSE SOON I WILL BE TO YOUR SIDE.THIS TIME WITHOUT YOU HAS BEEN ETERNAL. I INVITE YOU TO THE ZOOONE TO SEE THE ZEBRAS AND GORILAS.";
int mp[300];
string s;
int main(){
	cin.tie(0); ios::sync_with_stdio(0);
	for(int i=0;i<300;++i)mp[i]=i;
	for(int i=0;i<x.size();++i)mp[x[i]]=y[i];
	getline(cin,s); 
	while(getline(cin,s)){
		if(s==""){
			cout << "\n";
			continue;
		}
		for(int i=0;i<s.size();++i){
			if(s[i]=='2'){
				if(i&&s[i-1]=='4')cout << char(mp[s[i]]);
				else cout << 'Z';
			}
			else cout << char(mp[s[i]]);
		}
		cout << "\n";
	}
} 
