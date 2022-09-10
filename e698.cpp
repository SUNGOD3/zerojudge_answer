#include <iostream>
using namespace std;
struct oreo{
	int x,y,xx,yy,dis;
	char o,re;
};
oreo a;
int n;
string s;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cout.tie(0);
	while(cin >> a.y >> a.x >> a.yy >> a.xx >> a.o >> a.re){
		a.dis=abs(a.y-a.yy);
		cin >> n;
		for(int ca=0;ca<n;++ca){
			cin >> s;
			for(int i=0;i<s.size();++i){
				if(s[i]=='O'){
					for(int i=0;i<a.x;++i){
						if(a.y<a.yy){
							for(int i=0;i<(a.dis+a.dis%2)/2;++i){
								cout << " ";
							}
						}
						for(int j=0;j<a.y;++j){
							cout << a.o;
						}
						cout << "\n";
					}
				}
				else{
					++i;
					for(int i=0;i<a.xx;++i){
						if(a.yy<a.y){
							for(int i=0;i<(a.dis+a.dis%2)/2;++i){
								cout << " ";
							}
						}
						for(int j=0;j<a.yy;++j){
							cout << a.re;
						}
						cout << "\n";
					}
				}
			}
			cout << "\n";
		} 
	} 
}
