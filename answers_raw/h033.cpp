#include <iostream>
using namespace std;
string s,d,a;
bool judge(string x){
	for(int i=0,j=x.size()-1;i<x.size();++i,--j){
		if(x[i]!=x[j])return 0;
	}
	return 1;
}
int main(){
	cin >> s >> d;
	for(int i=0;i<s.size();++i){
		bool ac=1;
		for(int j=0;j<d.size()&&ac;++j){
			if(s[i]==d[j])ac=0;
		}
		if(ac)a+=s[i];
	}
	if(judge(a)){
		cout << "Yes";
	}
	else{
		cout << "No";
	}
} 
