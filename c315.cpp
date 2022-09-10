#include <iostream>

using namespace std; 

int main (){
	
	int N=0;
	int a,b=0;
	int x,y=0;
	while(cin >> N){
		for(int i=1;i<=N;i++){
			cin>> a>> b;
			if(a==0){
				y+=b;
			}
			else if(a==1){
				x+=b;
			}
			else if(a==2){
				y-=b;
			}
			else if(a==3){
				x-=b;
			}
		}
		
		cout << x << " " << y << endl;
	}
}
