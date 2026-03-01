#include <iostream>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int t,n;
	cin >> t;
	for(int c=1;c<=t;++c){
		cin >> n;
		string a[n],x;
		int b[n]={0},d;
		for(int i=0;i<n;++i)
			cin >> a[i] >> b[i];
		cin >> d >> x;
		bool ans=0;
		cout << "Case " << c << ":";
		for(int i=0;i<n;++i){
			if(a[i]==x){
				if(b[i]<=d){
					ans=1;
					cout << " Yesss\n";
				}
				else if(b[i]<=d+5){
					ans=1;
					cout << " Late\n";
				}
				break;
			}
		}
		if(!ans)
			cout << " Do your own homework!\n";
	}
} 
