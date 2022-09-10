#include <iostream>
#include <string>
using namespace std;
int main(){
	int a,c;
	string b;
	cin >> a;
	for(int i=1;i<=a;i++){
		int count=0;
		cin >> c;
		cin >> b;
		if(b[0]=='.'){
			b[0]='#';
			b[1]='#';
			b[2]='#';
			count++;	
		}
		for(int i=1;i<c-1;i++){
			if(b[i]=='.'){
				b[i]='#';
				b[i+1]='#';
				b[i+2]='#';
				count++;	
			}
		}
		if(b[c-1]=='.'){
			count++;
		}
		cout <<"Case " << i <<": " << count << "\n";
	}
} 
