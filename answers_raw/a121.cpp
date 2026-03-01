#include <iostream>
#include <math.h>  

using namespace std;

int main(){
	long long int a=0,b=0;
	int i=0;
	bool c=true;
	while(cin >> a >> b){
		if(b>=a){
			for(long long int j=a;j<=b;j++){
				for(long long int k=2;k<=sqrt(j);k++){
					if(j%k==0){
						c=false;
						break;
					}
				}
				if(c==true){
					i++;
				} 
				c=true;
			}
			if(a==1||b==1){
				i--;
			}
			cout << i << endl;
			i=0;
		}
		else{
			cout << 0 << endl;
		}
	}  
	
	
} 
