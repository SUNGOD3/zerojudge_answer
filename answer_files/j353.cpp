#include <iostream>
using namespace std;
int x,y,ct[101];
int main(){
	while(cin >> x >> y){
		if(x==1){
			++ct[y];
		}
		else if(x==0){
			ct[y]=0;
		}
		else{
			int s=0;
			for(int i=0;i<=100;++i){
				s+=ct[i];
			}
			cout << s ;
			return 0;
		} 
	}
}
