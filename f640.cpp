#include <iostream>
#include <stack>
using namespace std;
int f(int x){
	return 2*x-3;
}
int g(int x,int y){
	return 2*x+y-7;
}
int h(int x,int y,int z){
	return 3*x-2*y+z;
}
stack <int> sk;
int ans=0;
int main(){
	string a;
	getline(cin,a);
	int al=a.length();
	for(int i=al-1;i>=0;--i){
		if(a[i]=='f'){
			int tmp=f(sk.top());
			sk.pop();
			sk.push(tmp);
		}
		else if(a[i]=='g'){
			int tmp=sk.top();
			sk.pop();
			int tmp2=sk.top();
			sk.pop();
			sk.push(g(tmp,tmp2));
		}
		else if(a[i]=='h'){
			int tmp=sk.top();
			sk.pop();
			int tmp2=sk.top();
			sk.pop();
			int tmp3=sk.top();
			sk.pop();
			sk.push(h(tmp,tmp2,tmp3));
		}
		else if(a[i]>='0'&&a[i]<='9'){
			int tmp=0,v=1;
			while(a[i]>='0'&&a[i]<='9'){
				tmp+=(a[i]-'0')*v;
				v*=10;
				--i;
			}
			if(a[i]=='-')tmp*=-1;
			sk.push(tmp);
		}
	}
	cout << sk.top();
} 
