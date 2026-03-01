#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main(){
	stack<int> s;
	string a,b;
	int x=0,i=0;
	while(getline(cin,a)){
		for(i=0,b.clear();i<a.length();i++){
			while(a[i]<=57&&a[i]>=48){
				b+=a[i];
				i++;
			}
			x=0;
			while(b.length()>0){
				for(int i=0;i<b.length();i++){
					x+=b[i]-48;
					x*=10;
				}
				x/=10;
				s.push(x);
				b.clear();
			}			
			x=0;
			if(a[i]=='+'){
				x=s.top();
				s.pop();
				s.top()+=x;
			}
			else if(a[i]=='-'){
				x-=s.top();
				s.pop();
				s.top()+=x;
			}
			else if(a[i]=='*'){
				x+=s.top();
				s.pop();
				s.top()*=x;
			}
			else if(a[i]=='/'){
				x+=s.top();
				s.pop();
				s.top()/=x; 
			}
			else if(a[i]=='%'){
				x+=s.top();
				s.pop();
				s.top()%=x;
			}
		}
		cout << s.top() << endl;
	}
} 
