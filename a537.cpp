#include <iostream>
#include <string>
#include <map>
using namespace std;
int main(){
	int p[2001]={1,1},con=1;
	for(int i=2;i<=45;i++)
		for(int j=i+i;j<2001;j+=i)
			p[j]=1;
	string a;
	cin >> a;
	while(cin >> a){
		map <char,int> m;
		bool d=0;
		for(int i=a.length()-1;i>=0;i--)
			m[a[i]]++;
		cout << "Case " << con << ": ";
		con++;
		for(auto i=m.begin();i!=m.end();i++){
			if(p[i -> second]==0){
				cout << i -> first;
				d=1;
			}
		}	
		if(d==0)cout << "empty";
		cout << "\n";
	}
} 
