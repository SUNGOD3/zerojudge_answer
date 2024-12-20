#include <iostream>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int a,b;
	while(cin >> a >> b){
		bool c[a]={0},d[b]={0};
		char n;
		for(int i=0;i<a;i++){
			for(int j=0;j<b;j++){
				cin >> n;
				if(n=='#'){
					c[i]=1;
					d[j]=1;
				}
			}
		}	
		for(int i=0;i<a;i++){
			for(int j=0;j<b;j++){
				if(c[i]==1||d[j]==1){
					cout << '#';
				}
				else{
					cout << 'X';
				}
			}
			cout << "\n";
		}
	}
} 
