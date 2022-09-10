#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main (){
	//ios::sync_with_stdio(0);cin.tie(0);
	long long int a,b,tem;
	while(cin >> a >> b){
		vector<vector<long long int> > c;//°ª=a,¼e=b
		vector<long long int> d;
		c.resize(a); 
		d.resize(b);
		for(int i=0;i<a;i++){
			for(int j=0;j<b;j++){
				scanf("%lld",&d[j]);
			}
			c[i]=d;
		}
		printf("\n");
		//------------------------------
		/*	for(int i=0;i<a;i++){
				for(int j=a-(a-i)+1;j<a;j++){
					for(int l=0;l<b;l++){
						if(c[i][l]>c[j][l]){
							for(int k=0;k<b;k++){
								tem=c[i][k];
								c[i][k]=c[j][k];
								c[j][k]=tem;
							}
						}
					}
				}
			}*/
			
			
		sort(c.begin(),c.end());

		//------------------------------
		for(int i=0;i<a;i++){
			for(int j=0;j<b;j++){
				printf("%lld ",c[i][j]);
			}
			printf("\n");
		}
	}
	
} 
