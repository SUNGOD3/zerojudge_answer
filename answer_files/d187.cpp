#include <iostream>
#include <string>
using namespace std;
int main(){
	string a;
	int b;
	cin >> b;
	getline(cin,a);
	for(int k=1;k<=b;k++){
		getline(cin,a);
		int count=0;
		for(int i=0;i<a.length();i++){
			if(a[i]=='a'||a[i]=='d'||a[i]=='g'||a[i]=='j'||a[i]=='m'||a[i]=='p'||a[i]=='t'||a[i]=='w'||a[i]==' ')
				count++;
			else if(a[i]=='b'||a[i]=='e'||a[i]=='h'||a[i]=='k'||a[i]=='n'||a[i]=='q'||a[i]=='u'||a[i]=='x')
				count+=2;
			else if(a[i]=='c'||a[i]=='f'||a[i]=='i'||a[i]=='l'||a[i]=='o'||a[i]=='r'||a[i]=='v'||a[i]=='y')
				count+=3;
			else
				count+=4;
		}
		cout <<"Case #" << k << ": "<< count << "\n";
	} 
}
