#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;
int main(){
	int n;
	cin >> n;
	string a,b,c;
	string an[50];
	map <string,string> ans;
	while(n--){
		cin >> a >> b;
		ans[b]+=a;
		ans[b]+=' ';
	}
	cin >> c;
	if(ans.find(c)==ans.end()){
		cout << "No\n";
	}
	else{
		int j=0,t=0;
		string i=ans[c],d;
		for(int il=i.length();j<il;j++){
			if(i[j]!=' '){
				d+=i[j];
			}
			else{
				an[t]=d;
				d.clear();
				t++;
			}
		}
		sort(an,an+t);
		for(int i=0;i<t;i++){
			cout << an[i] << "\n";
		}
	}
} 
