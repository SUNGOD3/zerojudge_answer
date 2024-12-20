#include <iostream>
using namespace std;
int main(){
	std::ios::sync_with_stdio(false);
    cin.tie(NULL);
	int a;
	while(cin >> a){
		int i=1,ans=1;
		while((4+4*i)*i/2<a)
			i++;
		a-=(4+4*(i-1))*(i-1)/2;
		while(a>ans*i)
			ans++;
		if(ans==1)
			cout << "Pen\n";
		else if(ans==2)
			cout << "Pineapple\n";
		else if(ans==3)
			cout << "Apple\n";
		else
			cout << "Pineapple pen\n";
	}
} 
