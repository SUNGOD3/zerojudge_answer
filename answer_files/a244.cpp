#include <iostream>

using namespace std;

int main(){
	
	int N=0;
	long long int a,b,c=0;
	
	while(cin >> N){
		for(int i=1;i<=N;i++){
			a=0;
			b=0;
			c=0;
			cin >> a >> b >> c;
			if(a==1){
				cout << b+c << endl;
			}
			else if(a==2){
				cout << b-c << endl;
			}
			else if(a==3){
				cout << b*c << endl;
			}
			else if(a==4){
				cout << b/c << endl;
			}
			
		}
		
		
	}
	
} 
