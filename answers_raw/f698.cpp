#include <iostream>
#include <stack>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	string input;
	getline(cin,input);
	input+=' ';
	stack <long long int> num;
	int il=input.length();
	for(int i=0;i<il;++i){
		if(input[i]=='+'){
			long long int tmp=num.top();
			num.pop();
			num.top()+=tmp;
		}
		else if(input[i]=='-'&&input[i+1]==' '){
			long long int tmp=num.top();
			num.pop();
			num.top()-=tmp;
		}
		else if(input[i]=='*'){
			long long int tmp=num.top();
			num.pop();
			num.top()*=tmp;
		}
		else if(input[i]=='/'){
			long long int tmp=num.top();
			num.pop();
			num.top()/=tmp;
		}
		else if(input[i]>='0'||input[i]=='-'){
			long long int t=1;
			if(input[i]=='-'){
				t=-1;
				++i;
			}
			long long int ntmp=0;
			while(input[i]>='0'&&input[i]<='9'){
				ntmp*=10;
				ntmp+=input[i++]-'0';
			}
			num.push(ntmp*t);
		}
	}
	cout << num.top();
} 
