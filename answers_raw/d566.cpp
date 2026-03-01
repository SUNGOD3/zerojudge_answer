#include <iostream>
#include <map>
using namespace std;
int main(){
	int p;
	float ac=0,aac=0;
	cin >> p;
	string n,s,ap[p][2];
	map <string ,string> all;
	for(int i=0;i<p;++i)
		cin >> ap[i][0] >> ap[i][1];
	for(int i=p-1;i>=0;--i){
		n=ap[i][0];
		s=ap[i][1];
		if(all.find(n)==all.end()){
			if(s=="AC"){
				++ac;	
			}
			all[n]=s;
		}
		else{
			if(all[n]!="AC"){
				all[n]=s;
			}
		}
	}
	for(auto i=all.begin();i!=all.end();++i){
		if(i->second=="AC"){
			++aac;
		}
	}
	cout << ac/aac*100 << "%";
} 
