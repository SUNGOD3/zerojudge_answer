#include <iostream>
#include <string>
using namespace std;
int main(){
	string a,b,c;
	int n,A=0,B=0;
	while(cin >> c){
		cin >> n;
		for(;n>0;n--){
			a[0]=c[0];
			a[1]=c[1];
			a[2]=c[2];
			a[3]=c[3];
			cin >> b;
			if(b[0]==a[0]){
				a[0]='a';b[0]='a';A++;
			} 
			if(b[1]==a[1]){
				a[1]='a';b[1]='a';A++;
			} 
			if(b[2]==a[2]){
				a[2]='a';b[2]='a';A++;
			} 
			if(b[3]==a[3]){
				a[3]='a';b[3]='a';A++;
			} 
			if(A<4){
				if(b[0]!='a'){
					if(b[0]==a[1]){
						b[0]='a';a[1]='a';B++;
					}
					else if(b[0]==a[2]){
						b[0]='a';a[2]='a';B++;
					}
					else if(b[0]==a[3]){
						b[0]='a';a[3]='a';B++;
					}
				}
				if(b[1]!='a'){
					if(b[1]==a[0]){
						b[1]='a';a[0]='a';B++;
					}
					else if(b[1]==a[2]){
						b[1]='a';a[2]='a';B++;
					}
					else if(b[1]==a[3]){
						b[1]='a';a[3]='a';B++;
					}
				}
				if(b[2]!='a'){
					if(b[2]==a[1]){
						b[2]='a';a[1]='a';B++;
					}
					else if(b[2]==a[0]){
						b[2]='a';a[0]='a';B++;
					}
					else if(b[2]==a[3]){
						b[2]='a';a[3]='a';B++;
					}
				}
				if(b[3]!='a'){
					if(b[3]==a[1]){
						b[3]='a';a[1]='a';B++;
					}
					else if(b[3]==a[0]){
						b[3]='a';a[0]='a';B++;
					}
					else if(b[3]==a[2]){
						b[3]='a';a[2]='a';B++;
					}
				}
			}
			printf("%dA%dB\n",A,B);
			A=0;B=0;
		}
	}
} 
