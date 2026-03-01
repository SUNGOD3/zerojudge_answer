#include <iostream>

using namespace std;

int main(){
	int a,b;
	while(cin >> a >> b){
		int c[a],d[b];
		for(int i=0;i<a;i++){
			scanf("%d",&c[i]);
		}
		for(int i=0;i<b;i++){
			scanf("%d",&d[i]);
		}
		for(int j=0;j<b;j++){
			for(int i=0;i<a;i++){
				if(d[j]==c[i]){
					printf("%d\n",i+1);
					i=a;
				}
				else if(d[j]<c[i]){
					printf("0\n");
					i=a;
				}
			}
		}
	}
} 
