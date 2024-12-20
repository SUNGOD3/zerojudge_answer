#include <iostream>

using namespace std;

int main(){
	int a=0,b=0,c=1,sum=0;
	while(cin >> a){
	if(a>0){
		int d[a];
		for(int i=0;i<a;i++){
			cin >> d[i];
			b+=d[i];
		}
		b/=a;
		for(int i=0;i<a;i++){
			if(d[i]-b<0){
				sum+=(d[i]-b)*(-1);
			}
			else{
				sum+=(d[i]-b);
			}
		}
		cout << "Set #" << c << endl;
		cout << "The minimum number of moves is " << sum/2 << "." << endl;
		cout << endl;
		sum=0;
		a=0;
		b=0;
		c++;
	}
	}
	
} 
