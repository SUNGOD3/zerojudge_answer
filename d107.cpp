#include <iostream>
#include <string>
using namespace std;
int main(){
	string a;
	while(cin >> a){
		int b[26]={0},max=0,min=100;
		for(int i=0;i<a.length();i++){
			b[a[i]-97]++;
		}
		for(int i=0;i<26;i++){
			if(b[i]>max)
				max=b[i];
			if(b[i]<min&&b[i]!=0)
				min=b[i];
		}
		max-=min;
		if(max==2||max==3||max==5||max==7)
			cout << "Lucky Word\n" << max;
		else if(max%2==0||max%3==0||max%5==0||max%7==0||max==1)
			cout << "No Answer\n0" ;
		else
			cout << "Lucky Word\n" << max;
	}
}

