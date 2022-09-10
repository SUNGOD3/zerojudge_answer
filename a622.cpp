#include <iostream>
#include <string>
using namespace std;
char ans[50][50];
int main(){
	for(int i=0;i<50;i++){
		for(int j=0;j<50;j++){
			ans[i][j]='?';		
		}
	}
	int x=0,max=0;
	string a;
	while(getline(cin,a)){
		if(a.length()>max){
			max=a.length();
		}
		if(a=="END")break;
		while(a.length()<16){
			a+=' ';
		}
		int al=a.length();
		for(int i=0;i<al;i++){
			ans[i][x]=a[i];
		}
		x++;
	}
	for(int j=0;j<max;j++){
		for(int i=0;i<50;i++){
			if(ans[j][i]!='?'){
				cout << ans[j][i] << "  ";
			}
		}
		cout << "\n";
	}
} 
