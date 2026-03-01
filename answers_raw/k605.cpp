#include <bits/stdc++.h>
using namespace std;
int n,id,x,ct=1;
vector <vector <int>> a;
string s;
map <int,string> mp;
int main(){
	cin.tie(0); ios::sync_with_stdio(0);
	cin >> n;
	for(int i=0;i<n;++i){
		cin >> id >> s;
		mp[id]=s;
		int sum=0;
		vector <int> ta(7);
		ta[1]=id;
		for(int j=2;j<=6;++j){
			cin >> x;
			sum+=x;
			ta[j]=x;
		} 
		ta[0]=-sum;
		a.push_back(ta);
	}
	sort(a.begin(),a.end());
	for(int i=0;i<n;++i){
		cout << a[i][1] << " " << mp[a[i][1]] << " ";
		for(int j=2;j<=6;++j){
			cout << a[i][j] << " ";
		}
		if(i&&a[i][0]!=a[i-1][0])ct=i+1;
		cout << -a[i][0] << " " << ct << "\n";
	}
}
