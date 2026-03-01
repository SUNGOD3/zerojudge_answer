#include <iostream>
#include <stack>
using namespace std;
inline int p(char x){
	if(x=='+'||x=='-'){
		return 1;
	}
	else if(x=='*'||x=='/'){
		return 2;
	}
	else{
		return 0;
	}
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	string input;
	while(getline(cin,input)){
		stack <char> back;
		for(int i=0,il=input.length();i<il;++i){
			if(input[i]!=' '){
				if(input[i]=='('){
					back.push('(');
				}	
				else if(input[i]=='+'||input[i]=='-'||input[i]=='*'||input[i]=='/'){
					while(!back.empty()&&p(back.top())>=p(input[i])){
						cout << back.top() << " ";
						back.pop();
					}
					back.push(input[i]);
				}
				else if(input[i]==')'){
					while(!back.empty()&&back.top()!='('){
						if(back.top()!='('&&back.top()!=')')cout << back.top() << " ";
						back.pop();
					}
					back.pop();
				}
				else{
					cout << input[i] << " ";
				}
			}
		}
		while(!back.empty()){
			if(back.top()!='('&&back.top()!=')')cout << back.top() << " ";
			back.pop();
		}
		cout << "\n";
	}
}
