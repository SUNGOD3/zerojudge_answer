#include <iostream>
using namespace std;
int main(){
	std::ios::sync_with_stdio(false);
    cin.tie(NULL);
	int a;
	while(cin >> a){
		if(a%10==0)
			cout << "©°";
		else if(a%10==1)
			cout << "¨¯";
		else if(a%10==2)
			cout << "¤Ð";
		else if(a%10==3)
			cout << "¬Ñ";
		else if(a%10==4)
			cout << "¥Ò";
		else if(a%10==5)
			cout << "¤A";
		else if(a%10==6)
			cout << "¤þ";
		else if(a%10==7)
			cout << "¤B";
		else if(a%10==8)
			cout << "¥³";
		else if(a%10==9)
			cout << "¤v";
		if(a%12==0)
			cout << "¥Ó";
		else if(a%12==1)
			cout << "¨»";
		else if(a%12==2)
			cout << "¦¦";
		else if(a%12==3)
			cout << "¥è";
		else if(a%12==4)
			cout << "¤l";
		else if(a%12==5)
			cout << "¤¡";
		else if(a%12==6)
			cout << "±G";
		else if(a%12==7)
			cout << "¥f";
		else if(a%12==8)
			cout << "¨°";
		else if(a%12==9)
			cout << "¤x";	
		else if(a%12==10)
			cout << "¤È";
		else if(a%12==11)
			cout << "¥¼";
		cout << endl;
	}
} 
