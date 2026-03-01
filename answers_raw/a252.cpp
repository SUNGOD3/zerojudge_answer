#include <iostream>
using namespace std;
int lcs[101][101][101];
int main(){
	string a,b,c;
	cin >> a >> b >> c;
	a+=' ';
	b+=' ';
	c+=' ';
	int al=a.length(),bl=b.length(),cl=c.length();
	for(int i=1;i<al;++i){
		for(int j=1;j<bl;++j){
			for(int k=1;k<cl;++k){
				if(a[i-1]==b[j-1]&&b[j-1]==c[k-1])
					lcs[i][j][k]=lcs[i-1][j-1][k-1]+1;
				else 
					lcs[i][j][k]=max(max(lcs[i-1][j][k],lcs[i][j-1][k]),lcs[i][j][k-1]); 
			}
		}
	}
	cout << lcs[al-1][bl-1][cl-1];
} 
