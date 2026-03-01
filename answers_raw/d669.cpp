#include <iostream>

using namespace std;

int main (){
	int h1,m1,h2,m2=0;
	int sum=0,sum2=0;
	while(cin >> h1 >> m1 >> h2 >> m2){
		if(h1!=0||m1!=0||h2!=0||m2!=0){
			if(h1==0){
				h1+=24;
			}
			if(h2==0){
				h2+=24;
			}
			sum=h1*60+m1;
			sum2=h2*60+m2;
			if(sum2>=sum){
				cout << sum2-sum << endl; 
			}
			else{
				cout << 1440-(sum-sum2) << endl; 
			}
		}
		
	}
	
} 
