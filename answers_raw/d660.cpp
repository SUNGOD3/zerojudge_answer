#include <iostream>

using namespace std;

int main(){
	
	int n=0,b=0,c=0,d=0;
	int high=0,low=0;
	while(cin >> n){
		for(int i=1;i<=n;i++){
			cin >> b;
			for(int j=1;j<=b;j++){
				d=c;
				cin >> c;
				if(j!=1){
					if(c>d){
						high++;
					}
					else if(c<d){
						low++;
					}
				}
			}
			cout << "Case " << i << ": " << high << " " << low << endl;
			high=0;
			low=0;
		}
	}
	
	
	
} 
