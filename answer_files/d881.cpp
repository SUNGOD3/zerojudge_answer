#include <iostream>

using namespace std;

int main (){
	
	long long int n=1,m=1;
	int d,k=0;
	while(cin >> d){//1+2+5+10+17+26+37...
		k=d;//2
		for(int i=2;i<=50;i++){
			d+=k;//2
			if(i==2){
				d=1;
			}
			n+=d;//2
			m+=n;
		}
		cout << m << endl; 
		m=1;
		n=1;
		d=0;
		k=0;
		
	}
	
	
} 
