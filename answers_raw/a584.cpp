#include <iostream>
#include <map>
#include <queue> 
using namespace std;
int n,it,f,d,ans;
string input,goal;
map <string,int> p;
queue <int> fd;
bool a[501][501];
int used[25001];
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
						p[h]=it++; 
					}
				}
				else{
					if(p.find(tmp)==p.end()){
						p[tmp]=it++;
					}
					a[p[h]][p[tmp]]=a[p[tmp]][p[h]]=1;
				}
				tmp.clear();
			}
		}
	}
	cin >> input >> goal;
	f=p[input];
	used[f]=0;
	fd.push(f);
	while(fd.empty()==0){
		int x = fd.front();
		fd.pop();
		for(int i=0;i<it;++i){
			if(a[x][i]&&used[i]==0){
				used[i]=used[x]+1;
				fd.push(i);
			}
		}
	}
	cout << used[p[goal]];
}
