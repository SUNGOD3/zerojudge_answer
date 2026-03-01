#include <iostream>
#include <string>

using namespace std;

int main (){

	string a;
	string b;
	int c=0;
	int d=0;
	int x=0;
	while(1){
		cin >> a >> b;
		if(a=="#"){
			break;
		}
		if(a==b){
			cout << "ZERO" << endl;
		}
		for(int i=0;i<b.length();i++){//I IV V IX X XL L XC C CD D CM M
			if(b[i]=='I'){d++;
				if(b[i+1]=='V'){d+=3;i++;
				}
				else if(b[i+1]=='X'){d+=8;i++;
				}
			}
			else if(b[i]=='V'){d+=5;
			}
			else if(b[i]=='X'){d+=10;
				if(b[i+1]=='L'){d+=30;i++;
				}
				else if(b[i+1]=='C'){d+=80;i++;
				}
			}
			else if(b[i]=='L'){d+=50;
			}
			else if(b[i]=='C'){d+=100;
				if(b[i+1]=='D'){d+=300;i++;
				}
				else if(b[i+1]=='M'){d+=800;i++;
				}
			}
			else if(b[i]=='D'){d+=500;
			}
			else if(b[i]=='M'){d+=1000;
			}
}
			for(int i=0;i<a.length();i++){
			if(a[i]=='I'){c++;
				if(a[i+1]=='V'){c+=3;i++;
				}
				else if(a[i+1]=='X'){c+=8;i++;
				}
			}
			else if(a[i]=='V'){c+=5;
			}
			else if(a[i]=='X'){c+=10;
				if(a[i+1]=='L'){c+=30;i++;
				}
				else if(a[i+1]=='C'){c+=80;i++;
				}
			}
			else if(a[i]=='L'){c+=50;
			}
			else if(a[i]=='C'){c+=100;
				if(a[i+1]=='D'){c+=300;i++;
				}
				else if(a[i+1]=='M'){c+=800;i++;
				}
			}
			else if(a[i]=='D'){c+=500;
			}
			else if(a[i]=='M'){c+=1000;
			}
}
 		x=c-d;
 		if(x<0){
 			x=-x;
		}
		while(x>=1000){
			cout << "M";
			x-=1000;}
		while(x>=900){
			cout << "CM";
			x-=900;}
		while(x>=500){
			cout << "D";
			x-=500;}
		while(x>=400){
			cout << "CD";
			x-=400;}
		while(x>=100){
			cout << "C";
			x-=100;}
		while(x>=90){
			cout << "XC";
			x-=90;}
		while(x>=50){
			cout << "L";
			x-=50;}
		while(x>=40){
			cout << "XL";
			x-=40;}
		while(x>=10){
			cout << "X";
			x-=10;}
		while(x>=9){
			cout << "IX";
			x-=9;}
		while(x>=5){
			cout << "V";
			x-=5;}
		while(x>=4){
			cout << "IV";
			x-=4;}
		while(x>=1){
			cout << "I";
			x--;}
		cout << endl;
		c=0;
		d=0;
		
}
	
	return 0;
} 
