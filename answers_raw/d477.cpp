#include <iostream>
#include <cmath>
using namespace std;
int m,n,p;
string s,sub;
int main(){
	cin >> s >> m >> n >> p;
	if(n==1){
		for(int i=0;i<s.length();++i){
			if(s[i]>='a'&&s[i]<='z'){
				s[i]-=32;
			}
			else if(s[i]>='A'&&s[i]<='z'){
				s[i]+=32;
			}
		}
		s+="Immorta1";
	} 
	else if(n==2){
		for(int i=m-1;i<s.length();++i){
			sub+=s[i];
		}
		while(1){
			int it=s.find(sub);
			if(it<0)break;
			s.erase(it,sub.length());
		}
		sub="1013";
		while(1){
			int it=s.find(sub);
			if(it<0)break;
			s.erase(it,sub.length());
			s.insert(it,"hh4742");
		} 
	}
	else{
		for(int i=m-1;i<s.length();++i){
			sub+=s[i];
		}
		int it=abs(n-m)-1;
		s.erase(m-1,sub.length());
		s.insert(it,sub);
	}
	for(int i=0;i<s.length();++i){
		int tmp=p+1;
		while(tmp--){
			cout << s[i];
		}
	}
} 
