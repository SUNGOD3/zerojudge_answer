#include <iostream>
#include <cmath>

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
    std::cin.tie(0);
	int a[78498];
	int k=1;
	bool c=true;
	a[0]=2;
	//------------------------------------ 
	for(int i=3;i<=9999983;i+=2){
		for(int j=3;j<=sqrt(i);j+=2){
			if(i%j==0){
				c=false;
				break;
			}	
		}
		if(c==true){
			a[k]=i;
			k++;
		}
	}
	//------------------------------------«Øªí 
	int t=0,q=0,p=1;
	while(cin >> t){
		for(int i=1;i<=t;i++){
			cin >> q;
			for(int j=0;q<=a[j];j++){
				if(q%a[j]==0){
					p+=q;
					p+=q/a[j];
				}
			}
		}
	}
	
	
}
