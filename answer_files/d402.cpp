#include <iostream>
using namespace std;
int main(){
	char a;
	long long int aa=0,bb=0;
	while(a=getchar()){
		if(a>='0'&&a<='9'){
			aa+=a-48;
			while(a=getchar()){
				if(a<'0'||a>'9')
					break;
				aa*=10;
				aa+=a-48;
			}
			break;
		}
	}
	while(a=getchar()){
		if(a>='0'&&a<='9'){
			bb+=a-48;
			while(a=getchar()){
				if(a<'0'||a>'9')
					break;
				bb*=10;
				bb+=a-48;
			}
			break;
		}
	}
	cout << aa << " " << bb << " " << aa+bb;
} 
