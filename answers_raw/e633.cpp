#include <iostream>
using namespace std;
int t,a[105][105],r[105];
string s;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cout.tie(0);
	cin >> t;
	for(int ca=1;ca<=t;++ca){
		cin >> s;
		int ct=50,mi=50,ma=50,dd=1;
		for(int i=0;i<=100;++i){
			r[i]=0;
			for(int j=0;j<=100;++j)
				a[i][j]=0;
		}
		for(int i=0;i<s.size();++i){
			if(s[i]=='R'){
				a[i][ct]=1;
				r[ct]=i;
				ma=max(ma,ct);
				mi=min(ct,mi);
				++ct;
			}
			else if(s[i]=='F'){
				a[i][ct-1]=2;
				r[ct-1]=i;
				ma=max(ma,ct-1);
				mi=min(ct-1,mi);
				--ct;
			}
			else{
				a[i][ct]=3;
				r[ct]=i;
				ma=max(ma,ct);
				mi=min(ct,mi);
			}
		}
		cout << "Case #" << ca << ":\n";
		for(int j=0;j<s.size();++j)
			if(a[j][ma])dd=0;
		ma-=dd;
		for(int i=ma;i>=mi;--i){
			cout << "| ";
			for(int j=0;j<=r[i];++j){
				if(a[j][i]==1)
					cout << "/";
				else if(a[j][i]==2)
					cout << "\\";
				else if(a[j][i]==3)
					cout << "_";
				else
					cout << " ";
			}
			cout << "\n";
		} 
		cout << "+--";
		for(int j=0;j<s.size();++j)
			cout << '-';
		cout << "\n\n";
	}
} 
