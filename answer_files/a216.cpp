#include <iostream>

using namespace std;

int main (){
	
	long long int n,f,g=0;//f(n) = n + f(n-1);g(n) = f(n) + g(n-1) 
	while(cin >> n){
		long long int day=1;
		f=g=1;
		while(day<n){
			day++;
			f=day+f;
			g=f+g;
		}
		cout << f << " " << g << endl;
	}
	
	
} 
