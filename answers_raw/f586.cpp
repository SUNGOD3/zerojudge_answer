#include <iostream>
#include <cmath>
using namespace std;
int n,v;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n;
	for(int i=0;i<n;++i){
		cin >> v;
		if(v==1){
			cout << "1\n";
		}
		else{
			int ans=0,z=1;
			for(int j=2;j<=sqrt(v)&&z;++j){
				if(v%j==0){
					++ans;
					v/=j;
				}
				if(v%j==0){
					z=0;
				}
			}
			if(z){
				if(ans%2){
					cout << "1\n";
				} 
				else{
					cout << "-1\n";
				}
			}
			else{
				cout << "0\n";
			}
		} 
	}
} 
