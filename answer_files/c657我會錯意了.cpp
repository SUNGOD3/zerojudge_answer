#include <iostream>
#include <string>
using namespace std;
int main(){
	int max,maxn,i;
	string a;
	while(cin >> a){
		int b[26]={};
		int c[26]={};
		for(i=0;i<a.length();i++)
			b[a[i]-97]++;
		for(i=0,max=0,maxn=0;i<26;i++){
			if(b[i]>max)
				max=b[i];
		}
		for(i=0;i<26;i++){
			if(b[i]==max)
				c[i]=b[i]+1;
		}
		for(i=0;i<a.length();i++){
			c[a[i]-97]--;
			if(c[a[i]-97]==1){
				cout << a[i] << " " << max << endl;;  
				break;
			}
		}
	}
} 
