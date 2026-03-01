#include <iostream>
#include <cstring>

using namespace std;

int main(){
	
	string str1;
	
	while(cin >> str1){
		
		for(int i=0;i<str1.size()/2;){
		
			if(str1[0]==str1[str1.size()-1]){
				str1.erase(0,1);
				str1.erase(str1.size()-1,1);
			}else{
			    break;
			}
			
			
		}
		if(str1.size()<=1){
			cout << "yes" << endl;
		}
		if(str1.size()>1){
			cout << "no" << endl;
		}
	}
}
