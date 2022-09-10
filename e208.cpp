#include <iostream>
using namespace std;
int main(){
	int n,t,ca=1;
	char a;
	cin >> n;
	getchar();
	cout << "Case 1: ";
	while(a=getchar()){
		if(a<'A'&&a!='\n')break;
		else if(a=='\n'){
			cout << "\nCase " << ++ca << ": ";
		}
		else{
			cin >> t;
			while(t--){
				cout << a;
			}
		}
	}
}
