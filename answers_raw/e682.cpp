#include <iostream>
using namespace std;
string a[105],b[105];
int c[105][105],d[105][105][105];
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	string gt;
	while(cin >> gt){
		for(int i=0;i<101;++i){
			a[i].clear();
			b[i].clear();
			for(int j=0;j<101;++j){
				c[i][j]=0;
				for(int k=0;k<101;++k)
					d[i][j][k]=0;
			}
		}
		a[1]=gt;
		int ait=2,bit=1;
		if(a[1]!="#"){
			while(cin >> a[ait]){
				if(a[ait]=="#")break;
				++ait;
			}
		}
		while(cin >> b[bit]){
			if(b[bit]=="#")break;
			++bit;
		}
		for(int i=1;i<ait;++i){
			for(int j=1;j<bit;++j){
				if(a[i]==b[j]){
					c[i][j]=c[i-1][j-1]+1;
					for(int k=0;k<c[i-1][j-1];++k)
						d[i][j][k]=d[i-1][j-1][k];
					d[i][j][c[i-1][j-1]]=i;
				}
				else{
					if(c[i-1][j]>c[i][j-1]){
						c[i][j]=c[i-1][j];
						for(int k=0;k<c[i-1][j];++k)
							d[i][j][k]=d[i-1][j][k];
						d[i][j][c[i-1][j]]=i;
					}
					else{
						c[i][j]=c[i][j-1];
						for(int k=0;k<c[i][j-1];++k)
							d[i][j][k]=d[i][j-1][k];
						d[i][j][c[i][j-1]]=j;
					}
				}
			}
		}
		for(int i=0;i<c[ait-1][bit-1];++i){
			cout << a[d[ait-1][bit-1][i]] ;
			if(i!=c[ait-1][bit-1]-1)
				cout << " ";
			else
				cout << "\n";
		}
	}
} 
