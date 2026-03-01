#include <iostream>
using namespace std;
long long n,num[305],op[305];
string s;
int main(){
	cin >> n;
	getline(cin,s);
	while(n--){
		getline(cin,s);
		s+='.';
		long long v=0,vs=0,f=0,fs=0,nt=0,ot=0,i=0,k=1;
		if(s[0]=='-'){
			++i;
			k=-1;
		}
		for(;i<s.size();++i){
			if(s[i]>='0'&&s[i]<='9'){
				v*=10;
				v+=s[i]-'0';
				if(fs)op[ot++]=f;
				vs=1;
				f=fs=0;
			}
			else{
				if(vs)num[nt++]=v;
				++f;
				fs=1;
				v=vs=0;	
			}
		}
		for(int i=0;i<nt-1;++i){
			if(op[i]==1){
				num[i+1]*=num[i];
			}
			else{
				num[i+1]*=(-num[i]);
			}
		}
		cout << num[nt-1]*k << "\n";
	}
}
