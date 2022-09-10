#include <iostream>
using namespace std;
int s[101],n,a;
bool br=0;
int main(){
	while(cin >> a){
		if(a==-1){
			cin >> a ;
			if(a==-1){
				br=1;
				break;
			}
			else{
				cin >> n;
				s[a]+=n;
			}
		}
		else{
			cin >> n;
			s[a]+=n;
		}
		if(br==1){
			break;
		}
	}
	for(int i=0;i<101;i++){
		if(s[i]!=0){
			cout << i << " " << s[i] << "\n";
		}
	}
} 
