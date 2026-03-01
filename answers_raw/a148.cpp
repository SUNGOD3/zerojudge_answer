#include <iostream>

using namespace std;

int main (){
	
	double g=0;
	double s=0;
	int n=0;
	
	
	while(cin >> n){
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
			g+=a[i];
		}
		s=g/n;
		if(s>59){
			cout << "no" << endl;
		}
		else{
			cout << "yes" << endl;
		}
		n=0;
		g=0;
		s=0;
	}
} 
