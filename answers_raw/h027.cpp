#include <iostream>
using namespace std;
int a[105][105],b[105][105],s,t,n,m,r,tt,ansx,ansy=10000000;
int main(){
	cin >> s >> t >> n >> m >> r;
	for(int i=0;i<s;++i){
		for(int j=0;j<t;++j){
			cin >> a[i][j];
			tt+=a[i][j];
		}
	} 
	for(int i=0;i<n;++i)
		for(int j=0;j<m;++j)
			cin >> b[i][j];
	for(int i=0;i<n-s+1;++i){
		for(int j=0;j<m-t+1;++j){
			int ct=0,tot=0;
			for(int ii=0;ii<s;++ii){
				for(int jj=0;jj<t;++jj){
					if(a[ii][jj]!=b[i+ii][j+jj]){
						++ct;
					}
					tot+=b[i+ii][j+jj];
				}
			}
			if(ct<=r){
				++ansx;
				ansy=min(ansy,abs(tot-tt));
			}
		}
	}
	if(ansx)
		cout << ansx << "\n" << ansy ;
	else
		cout << "0\n-1";
} 
