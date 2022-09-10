#include <iostream>
using namespace std;
int main(){
	int d=0,t,s,g,a=1;
	cin >> t >> g >> s;
	while(a<=s){
		if(g<=t){
			cout << d+1;
			break;
		}
		++d;
		if(d%10==9){
			++d;
			++a;
			continue;
		}
		if(d%3==0){
			t+=t/3;
		}
		else if(d){
			t+=t/10;
		}
	}
	if(t<g){
		cout << "unsalable";
	}
} 
