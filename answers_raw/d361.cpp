#include <iostream>
using namespace std;
string a,b;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> a >> b){
		if(a=="0"&&b=="0")break;
		int n=a[a.length()-1]-48;
		if(a=="0")
			cout << "0\n";
		else if(b=="0")
			cout << "1\n";
		else if(n==0||n==5||n==6||n==1)
			cout << n << "\n";
		else if(n==2){
			int bl=b.length(),k;
			if(bl>=2)
				k=((b[bl-1]-48)+10*(b[bl-2]-48))%4;
			else
				k=(b[bl-1]-48)%4;
			if(k==0)
				cout << "6\n";
			else if(k==1)
				cout << "2\n";
			else if(k==2)
				cout << "4\n";
			else
				cout << "8\n";
		}
		else if(n==3){
			int bl=b.length(),k;
			if(bl>=2)
				k=((b[bl-1]-48)+10*(b[bl-2]-48))%4;
			else
				k=(b[bl-1]-48)%4;
			if(k==0)
				cout << "1\n";
			else if(k==1)
				cout << "3\n";
			else if(k==2)
				cout << "9\n";
			else
				cout << "7\n";
		}
		else if(n==4){
			int bk=(b[b.length()-1]-48)%2;
			if(bk)
				cout << "4\n";
			else
				cout << "6\n";
		}
		else if(n==7){
			int bl=b.length(),k;
			if(bl>=2)
				k=((b[bl-1]-48)+10*(b[bl-2]-48))%4;
			else
				k=(b[bl-1]-48)%4;
			if(k==0)
				cout << "1\n";
			else if(k==1)
				cout << "7\n";
			else if(k==2)
				cout << "9\n";
			else
				cout << "3\n";
		}
		else if(n==8){
			int bl=b.length(),k;
			if(bl>=2)
				k=((b[bl-1]-48)+10*(b[bl-2]-48))%4;
			else
				k=(b[bl-1]-48)%4;
			if(k==0)
				cout << "6\n";
			else if(k==1)
				cout << "8\n";
			else if(k==2)
				cout << "4\n";
			else
				cout << "2\n";
		}
		else if(n==9){
			int bk=(b[b.length()-1]-48)%2;
			if(bk)
				cout << "9\n";
			else
				cout << "1\n";
		}
	}
} 
