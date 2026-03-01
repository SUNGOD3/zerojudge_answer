#include <iostream>
using namespace std;
int main(){
	std::ios::sync_with_stdio(false);
    cin.tie(NULL);
	int a;
	while(cin >> a){
		if((a%4==0&&a%100!=0)||a%400==0)
			cout << "a leap year" << endl;
		else
			cout << "a normal year" << endl;
	}
}
