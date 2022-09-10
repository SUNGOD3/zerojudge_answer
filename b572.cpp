#include <iostream>

using namespace std;

int main (){
	
	int h1,m1,h2,m2;
	int M;
	int n;
	
	while(cin >> n){
		for(int i=1;i<=n;i++){
			cin >> h1 >> m1 >> h2 >> m2 >> M;
			m1+=M;
			while(m1>=60){
				h1++;
				m1-=60;
			}
			if(h1>h2){
				cout << "No" << endl;
			}
			else if(h1==h2&&m1>m2){
				cout << "No" << endl;
			}
			else{
				cout << "Yes" << endl;
			}
		}
	}
	
} 
