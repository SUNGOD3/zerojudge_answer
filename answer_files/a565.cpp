#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main(){
	std::ios::sync_with_stdio(false);
    cin.tie(NULL);
	string a;
	getline(cin,a);
	while(getline(cin,a)){
		int ans=0;
		stack<int> s;
		for(int i=0;i<a.length();i++){
			if(a[i]=='p'){
				s.push(a[i]);
			}
			else if(a[i]=='q'&&s.empty()==0){
				s.pop();
				ans++;
			}
		}
		cout << ans << endl; 
	}
}
