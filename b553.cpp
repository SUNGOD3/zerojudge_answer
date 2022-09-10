#include <iostream>
using namespace std;
int main(){
	int a,i;
	while(cin >> a){
		i=0;
		while(a!=1){
			if(a%2==0){
				a/=2;
				i++;
			}
			else if(a%2==1){
				a=a*3+1;
				i++;
			}
		}
		cout << i << endl;
	}
} 
