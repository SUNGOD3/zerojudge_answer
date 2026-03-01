#include <iostream>
#include <vector>
#include <map>
using namespace std;
int n,p=5,k=4,t,st;
vector <int> a={0,9999};
map <int,vector <int>> mp;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	for(int i=1;i<=1000;++i){
		if(i<=4){
			++a[0];
		}
		else if(i==p){
			a.clear();
			for(int j=2;j<k;++j){
				a.push_back(j);
			}
			a.push_back(9999);
			p+=k;
			++k;
		}
		else{
			for(int j=0;j<a.size();++j){
				if(a[j]+1!=a[j+1]){
					++a[j];
					break;
				}
			}
		}
		mp[i]=a;
	}
	cin >> t;
	while(t--){
		if(st)cout << "\n";
		st=1;
		cin >> n;
		for(int i=0;i<mp[n].size()-1;++i){
			if(i)cout << " ";
			cout << mp[n][i];
		}
		cout << "\n";
	}
}
