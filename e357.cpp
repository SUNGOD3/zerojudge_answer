#include <iostream>

using namespace std;

int fun(int x){
	if(x==1){
		return 1;
	}
	else if(x%2==0){
		return fun(x/2);
	}
	else {
		return fun(x+1)+fun(x-1);
	}
}

int main(){
	int x=0;
	while(cin >> x){
		cout << fun(x);
	}
	return 0;
} 
