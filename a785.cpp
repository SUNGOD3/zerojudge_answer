#include <iostream>
using namespace std;
int main(){
	string a;
	while(cin >> a){
		if(a=="END")break;
		int al=a.length(),it=0;
		string b,c;
		for(;a[it]!='-';++it)
			b+=a[it];
		for(++it;it<al;++it)
			c+=a[it];
		int bl=b.length(),cl=c.length();
		it=1;
		char f=b[bl-1];
		if(c[0]=='a'){
			if(f=='a')
				b[bl-1]='a';
			else if(f=='e')
				b[bl-1]='y';
			else if(f=='o')
				b[bl-1]='w';
		}
		else if(c[0]=='e'){
			if(f=='a')
				b[bl-1]='a';
			else if(f=='e'){
				b[bl-1]='e';
				b+='i';
			}
			else if(f=='o'){
				b[bl-1]='o';
				b+='u';
			}
		}
		else if(c[0]=='i'){
			if(f=='a'){
				b[bl-1]='a';
				b+='i';
			}
			else if(f=='e'){
				b[bl-1]='e';
				b+='i';
			}
			else if(f=='o'){
				b[bl-1]='o';
				b+='i';
			}
		}
		else if(c[0]=='y'){
			if(f=='a')
				b[bl-1]='a';
			else if(f=='e')
				b[bl-1]='y';
			else if(f=='o')
				b[bl-1]='w';
		}
		else if(c[0]=='o'&&c[1]=='u'){
			if(f=='a'){
				b[bl-1]='w';
				it=2;
			}
			else if(f=='e')
				b[bl-1]='o';
			else if(f=='o')
				b[bl-1]='o';
		}
		else if(c[0]=='o'){
			if(f=='a')
				b[bl-1]='w';
			else if(f=='e'){
				b[bl-1]='o';
				b+='u';
			}
			else if(f=='o'){
				b[bl-1]='o';
				b+='u';
			}
		}
		else if(c[0]=='w'){
			if(f=='a')
				b[bl-1]='w';
			else if(f=='e')
				b[bl-1]='w';
			else if(f=='o')
				b[bl-1]='w';
		}
		cout << b;
		for(;it<cl;++it)
			cout << c[it];
		cout << "\n";
	}
} 
