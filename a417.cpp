#include <iostream>
using namespace std;
int main(){
	std::ios::sync_with_stdio(false);
    cin.tie(NULL);
	int a,c;cin >> c;
	while(cin >> a >> c){
		int b[a][a];
		if(a%2==1)
			b[a/2][a/2]=a*a;
		int lv=0,n=1,j;
		for(;n<a*a;lv++){
			for(j=lv;j<a-1-lv;j++){
				b[lv][j]=n;
				n++;
			} 
			for(j=lv;j<a-1-lv;j++){
				b[j][a-lv-1]=n;
				n++;
			}
			for(j=a-1-lv;j>lv;j--){
				b[a-lv-1][j]=n;
				n++;
			}
			for(j=a-1-lv;j>lv;j--){
				b[j][lv]=n;
				n++;
			}
		}
		for(lv=0;lv<a;lv++){
			for(j=0;j<a;j++){
				if(c==1)
					printf("%5d", b[lv][j]);
				else
					printf("%5d", b[j][lv]);
			}
			printf("\n");
		}
	}
} 
