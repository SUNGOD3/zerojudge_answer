#include <iostream>
#include <cmath>
using namespace std;
int main(){
	std::ios::sync_with_stdio(false);
    std::cin.tie(0);
	int a[4792],k=1;
	bool c=true;
	a[0]=2;
	for(int i=3;i<=46341;i+=2){
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
		c=true;
	}
	int q=0;
	while(cin >> q){
		if(q==1){
			c=true;
		}
		else{
			for(int i=0;a[i]<=sqrt(q);i++){
				if(q%a[i]==0){
					c=false;
					break;
				}
			}
		}
		if(c==true){
			cout << "質數"; 
		}
		else{
			cout << "非質數"; 
			c=true;
		}
		cout << endl;
	}
}
