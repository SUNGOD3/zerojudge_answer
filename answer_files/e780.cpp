#include <iostream>
#include <string>
using namespace std;
int main(){
	int n,x=0,gift,ans=0;
	string a;
	cin >> n;
	while(n--){
		cin >> a;
		if(a=="Gift"){
			cin >> gift;
			if(x==gift)
				ans++;
		}
		else if(a=="L")
			x--;
		else
			x++;
	}
	cout << ans ;
} 
