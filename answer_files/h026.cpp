#include <iostream>
using namespace std;
int f,n,y,rd=1,w,la=-1;
int main(){
	cin >> f >> n;
	while(rd<=n){
		cin >> y;
		cout << f << " ";
		if(f!=y){
			if((f==5&&y==0)||(f==2&&y==5)||(f==0&&y==2))w=1;
			else w=-1;
			break;
		}
		f=y;
		if(la==y){
			if(y==0)f=5;
			else if(y==5)f=2;
			else f=0;
		}
		la=y;
		++rd;
	}
	if(w==1){
		cout << ": Won at round " << rd;
	}
	else if(w==-1){
		cout << ": Lost at round " << rd;
	}
	else {
		cout << ": Drew at round " << rd-1;
	}
} 
