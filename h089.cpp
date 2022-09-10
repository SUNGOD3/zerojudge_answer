#include <iostream>
using namespace std;
void Towers(int n,char a,char b,char c){
	if(n==1){
		cout<<"from "<<a<<" to "<<c<<'\n';
	}
	else{
		Towers(n-1,a,c,b);
		cout<<"from "<<a<<" to "<<c<<'\n';
		Towers(n-1,b,a,c);
	}
}
int main() {
	cin.tie(0);cout.tie(0); ios::sync_with_stdio(false);
	int n;
	cin>>n;
	Towers(n,'A','B','C');
}
