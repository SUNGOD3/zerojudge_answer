#include <iostream>
#include <string>
using namespace std;
int main(){
	std::ios::sync_with_stdio(false);
    cin.tie(NULL);
	int a;
	while(cin >> a){
		for(;a>0;a--){
			char c[4];
			for(int i=0;i<4;i++)
				cin >> c[i];
			if(c[0]=='0'&&c[0]==c[2]&&c[1]=='1'&&c[1]==c[3])
				cout << 'A';
			else if(c[0]=='0'&&c[0]!=c[2]&&c[1]=='1'&&c[1]==c[3])
				cout << 'B';
			else if(c[0]=='0'&&c[0]!=c[2]&&c[1]=='0'&&c[1]==c[3])
				cout << 'C';
			else if(c[0]=='1'&&c[0]!=c[2]&&c[1]=='1'&&c[1]==c[3])
				cout << 'D';
			else if(c[0]=='1'&&c[1]==c[2]&&c[2]==c[3]&&c[3]=='0')
				cout << 'E';
			else if(c[0]=='1'&&c[0]==c[1]&&c[2]=='0'&&c[2]==c[3])
				cout << 'F';
		}
		cout << endl;
	}
} 
