#include <iostream>
#include <string>
#include <math.h> 
using namespace std;
int main(){
	string a;
	while(getline(cin,a)){
		a+=' ';
		int b=0,max=0;
		bool c=0;
		if(a[0]==' '){		
			b++;
			c=0;
		}
		else
			c=1;
		for(int i=1;i<a.length();i++){
			if(a[i]==' '||i==a.length()-1){
				if(c==1){
					if(b>max)
						max=b;
					b=0; 
				}
				b++;
				c=0;
			}
			else{
				c=1;
			}
		}
		if(max==0)
			cout << 0 << endl;
		else
			cout << ceil(log2(max)) << endl;
	}
} 
