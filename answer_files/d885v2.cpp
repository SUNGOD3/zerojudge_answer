#include <iostream>
#include <map>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
    int n,in;
    cin >> n;
    map<int,int> mp;
    while(n--){
		cin >> in;
        mp[in]++;
    }
    for(auto it: mp)
        cout << it.first << ' ' << it.second << endl;
}
