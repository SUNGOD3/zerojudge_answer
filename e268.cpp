#include <iostream>
#include <map>
using namespace std;
map <string ,string> sp;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int n,m;
	cin >> n >> m;
	string a,b;
	while(n--){
		cin >> a >> b;
		sp[a]=b;
	}
	while(m--){
		cin >> a;
		if(sp.find(a)==sp.end()){
			int al=a.length()-1;
			if(a[al]=='y'&&a[al-1]!='a'&&a[al-1]!='e'&&a[al-1]!='i'&&a[al-1]!='o'&&a[al-1]!='u'){
				a[al]='i';
				a+="es";
				cout << a << "\n";
			}
			else if(a[al]=='o'||a[al]=='s'||a[al]=='x'||(a[al]=='h'&&(a[al-1]=='c'||a[al-1]=='s'))){
				a+="es";
				cout << a << "\n";
			}
			else{
				a+="s";
				cout << a << "\n";
			}
		}
		else{
			cout << sp[a] << "\n";
		}
	}
} 
