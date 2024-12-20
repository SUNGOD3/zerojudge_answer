#include <iostream>

using namespace std;

int main(){
	
	long long int n=0;
	long long int a,b,c=0;
	cin >> n;
		for(long long int i=1;i<=n;i++){
			cin >> a >> b >> c;
			cout << "Case " << i << ": " ; 
			if(a>0&&b>0&&c>0){
				if(a+b>c&&b+c>a&&a+c>b){
					if(a==b&&b==c){
						cout << "Equilateral"; 
					}
					else if(c==a){
						cout << "Isosceles";
					}
					else if(a==b){
						cout << "Isosceles";
					}
					else if(b==c){
						cout << "Isosceles";
					}
					else {
						cout << "Scalene";
					}
				}
				else {
					cout << "Invalid";
				}
			}
			else{
				cout << "Invalid";
			}
			cout << endl;
		}
}
