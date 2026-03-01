#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main(){
	string a,c;
	stack<char> d;
	stack<int> s;
	int i=0,x=0;
	while(getline(cin,a)){
		for(i=0,c.clear();i<a.length();i++){
			if(a[i]=='(')
				d.push('(');
			else if((a[i]=='+'||a[i]=='-'||a[i]=='*'||a[i]=='/'||a[i]=='%')){
				if(d.empty()==0){
					while((d.top()=='*'||d.top()=='/'||d.top()=='%')||((d.top()=='+'||d.top()=='-')&&(a[i]=='+'||a[i]=='-'))){
						c+=d.top();
						d.pop();
						if(d.empty()==1)
							break;
					}
				}
				d.push(a[i]);
			}
			else if(a[i]==')'){
				while ( d.top() != '(' ) {
					c+=d.top();
					d.pop();
               	} 
               	d.pop();
			}
			else
				c+=a[i];
		}
		while(d.empty()==0){
			c+=d.top();
			d.pop();
			c+=' ';
		}
		a.clear();
		for(i=0;i<c.length();i++){
			while(c[i]<='9'&&c[i]>='0'){
				a+=c[i];
				i++;
			}
			x=0;
			while(a.length()>0){
				for(int i=0;i<a.length();i++){
					x+=a[i]-48;
					x*=10;
				}
				x/=10;
				s.push(x);
				a.clear();
			}			
			x=0;
			if(c[i]=='+'){
				x=s.top();
				s.pop();
				s.top()+=x;
			}
			else if(c[i]=='-'){
				x-=s.top();
				s.pop();
				s.top()+=x;
			}
			else if(c[i]=='*'){
				x+=s.top();
				s.pop();
				s.top()*=x;
			}
			else if(c[i]=='/'){
				x+=s.top();
				s.pop();
				s.top()/=x; 
			}
			else if(c[i]=='%'){
				x+=s.top();
				s.pop();
				s.top()%=x;
			}
		}
		cout << s.top() << endl;
	}
} 
