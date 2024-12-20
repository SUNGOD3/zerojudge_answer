#include <iostream>
#include <algorithm>
using namespace std;
bool t;
string a,ans,buf;
int main(){
	cin >> a;
	for(int i=0;i<a.length();++i){
		if(a[i]=='+'||a[i]=='-'){
			reverse(buf.begin(),buf.end());
			ans+=buf;
			buf.clear();
			if(a[i]=='+')
				t=0;
			else
				t=1;
		}
		else{
			if(t==1)
				buf+=a[i];
			else
				ans+=a[i];
		}
	}
	reverse(buf.begin(),buf.end());
	ans+=buf;
	cout << ans;
} 
