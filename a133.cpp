#include <iostream>
using namespace std;
int main(){
	int a,b,ca=0;
	while(cin >> a >> b){
		if(a==0&&b==0)break;
		++ca;
		int c[a+1],d[b+1],li=0;
		int len[a+1][b+1];
		for(int i=1;i<=a;++i)
			cin >> c[i];
		for(int i=1;i<=b;++i)
			cin >> d[i];
		for (int i=0; i<=a; ++i)
			len[i][0] = 0;
    	for (int i=0; i<=b; ++i) 
			len[0][i] = 0;
		for(int i=1;i<=a;++i){
			for(int j=1;j<=b;++j){
				if(c[i]==d[j])
					len[i][j]=len[i-1][j-1]+1;	
				else
					len[i][j]=max(len[i-1][j],len[i][j-1]);
			}
		}
		cout << "Twin Towers #"<< ca  << "\nNumber of Tiles : " << len[a][b] << "\n\n";
	}
} 
