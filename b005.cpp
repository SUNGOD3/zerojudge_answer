#include <iostream>
using namespace std;
int main(){
	int a;
	while(cin >> a){
		bool b[a][a],ans=0;
		for(int i=0;i<a;i++)
			for(int j=0;j<a;j++)
				cin >> b[i][j];
		int x=0,y=0,xb=-1,yb=-1;
		for(int i=0;i<a;i++){
			for(int j=0;j<a;j++)
				x+=b[i][j];
			if(x%2){
				if(xb!=-1)
					ans=1;
				xb=i;
				x=0;
			}
		}
		for(int j=0;j<a;j++){
			for(int i=0;i<a;i++)
				y+=b[i][j];
			if(y%2){
				if(yb!=-1)
					ans=1;
				yb=j;
				y=0;
			}
		}
		if(ans==1)
			cout << "Corrupt\n" ;	
		else if(xb==-1&&yb==-1)
			cout << "OK\n";
		else
			cout << "Change bit (" << xb+1 << "," << yb+1 << ")\n";
	}
} 
