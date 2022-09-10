#include <iostream>
#include <map>
using namespace std;
int n,it,f,d,ans;
string input,goal;
map <string,string> p;
map <string,int> fd;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n;
	getline(cin,input);
	for(int ca=0;ca<n;++ca){
		getline(cin,input);
		input+=' ';
		int s=0;
		string tmp,h;
		for(int i=0;i<input.length();++i){
			if(input[i]!=' '){
				tmp+=input[i];
			}
			else{
				if(s==0){
					s=1;
					h=tmp;
					if(p.find(h)==p.end()){
						p[h]="root"; 
					}
				}
				else{
					p[tmp]=h;
				}
				tmp.clear();
			}
		}
	}
	cin >> input >> goal;
	string tmp=input;
	fd[input]=ans=0;
	while(tmp!="root"){
		tmp = p[tmp];
		fd[tmp]=++ans;
		//cout << fd[tmp] << " " << tmp << "\n";
	}
	tmp = goal;
	ans=0;
	while(fd.find(tmp)==fd.end()){
		tmp = p[tmp];
		++ans;
	}
	cout << ans+fd[tmp];
}
