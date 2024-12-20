#include <iostream>
#include <string>
using namespace std;
struct car{
	string brand;
	string color;
};
int main(){
	int a,b;
	while(cin >> a >> b){
		car c[a];
		string cc,d;
		for(int i=0;i<a;i++)
			cin >> c[i].brand >> c[i].color;
		while(b--){
			cin >> cc >> d;
			if(cc=="brand")
				for(int i=0;i<a;i++)
					if(c[i].brand==d)
						cout << c[i].brand << " " << c[i].color << "\n";
			else
				for(int i=0;i<a;i++)
					if(c[i].color==d)
						cout << c[i].brand << " " << c[i].color << "\n";
		}
	}
} 
