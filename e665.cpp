#include <iostream>
using namespace std;
int main(){
	int a;
	while(cin >> a){
		int i=1,r=0,g=0,b=0;
		while(a>0){
			for(int j=1;j<=i;j++){
				if(j%3==1)
					r++;
				else if(j%3==2)
					g++;
				else if(j%3==0)
					b++;		
			}
			a--;
			i*=2;
		}
		cout << r << " " << g << " " << b << endl;
	}
} 
