#include <iostream>
using namespace std;
char nmap[101][101];
int n,x,y;
void pf(int a,int b){
	nmap[a][b]='+';
	if(a-1>=0&&nmap[a-1][b]=='-')
		pf(a-1,b);
	if(a+1<n&&nmap[a+1][b]=='-')
		pf(a+1,b);
	if(b-1>=0&&nmap[a][b-1]=='-')
		pf(a,b-1);
	if(b+1<n&&nmap[a][b+1]=='-')
		pf(a,b+1);
}
int main(){
	cin >> n;
	for(int i=0;i<n;++i)
		for(int j=0;j<n;++j)
			cin>> nmap[i][j];
	cin >> x >> y;
	pf(x,y);
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j)
			cout << nmap[i][j];
		cout << "\n";
	}
} 
