#include <iostream>
#include <cmath>
using namespace std;
int pri[65536]={1,1};
void p(){
	for(int i=2;i<sqrt(65536);i++){
		if(pri[i]==0){
			for(int j=i*2;j<65536;j+=i){
				if(pri[j]!=1)
					pri[j]=1;
			}
		}
	}
}
int GCD(int m,int n){
	if(m%n==0)
		return n;
	else
		return GCD(n,m%n);
} 
int main(){ 
	p();
    int a,b,c,j,g;  
    cin >> a;
    while(cin >> a >> c){
		b=a;  
        for(int i=2;i<=b;i++){//20=2*2*5 
            if(a%i==0){ 
        		cout << i ; 
            	a/=i; 
            	for(j=1;a%i==0;j++)
                    a/=i; 
                if(j>1)
                    cout << "^" << j; 
                if(a!=i && a!=1)
                    cout << "*"; 
                if(a==1)
                    cout << " , "; 
            }     
        } 
        if(a>c)
        	g=GCD(c,b);
		else
			g=GCD(b,c);
		printf("%d , ",g);
		if(pri[g]==0)
			cout << "Y\n";
		else
			cout << "N\n";
    }  
} 
