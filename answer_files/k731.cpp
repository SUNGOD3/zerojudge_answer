#include <iostream>
using namespace std;
int n,x,y,r,l,b,w=3,lx,ly;
int main(){
	cin >> n;
	for(int i=0;i<n;++i){
		cin >> x >> y;
		int nw;
		if(x>lx)nw=3;
		else if(x<lx)nw=2;
		else if(y>ly)nw=0;
		else nw=1;
		if(w==0){//u
			if(nw==1)++b;
			else if(nw==2)++l;
			else if(nw==3)++r;
		}
		else if(w==1){//d
			if(nw==0)++b;
			else if(nw==2)++r;
			else if(nw==3)++l;
		}
		else if(w==2){//l
			if(nw==1)++l;
			else if(nw==0)++r;
			else if(nw==3)++b;
		}
		else{//r
			if(nw==1)++r;
			else if(nw==2)++b;
			else if(nw==0)++l;
		}
		w=nw;
		lx=x;
		ly=y;
	} 
	cout << l << ' ' << r << " " << b;
} 
