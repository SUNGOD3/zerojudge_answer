#include <iostream>
#include <vector>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	vector <string> a;
	string tmp;
	char t;
	while(t=getchar()){
		if(t=='0')break;
		if((t<='Z'&&t>='A')||(t<='z'&&t>='a'))
			tmp+=t;
		else{
			if(tmp.length()!=0){
				bool f=0;
				for(auto i=a.begin();i!=a.end();++i){
					if(*i==tmp){
						cout << a.end()-i ;
						a.erase(i);
						f=1;
						break;
					}
				}
				if(f==0)cout << tmp;
				a.push_back(tmp);
				tmp.clear();
			}
			cout << t;
		}
	}
} 
