#include <iostream>
using namespace std;
int main (){
	std::ios::sync_with_stdio(false);
    std::cin.tie(0);
	int a[12],b[12];
	int c=0,ca=1;
	while(cin >> c){
		if(c<0){
			return 0;
		}
		else{
			cout << "Case " << ca << ":" << endl;
			ca++; 
		}
		for(int i=0;i<12;i++){
			cin >> a[i] ;
		}
		for(int i=0;i<12;i++){
			cin >> b[i] ;
		}
		for(int i=0;i<12;i++){
			if(b[i]>c){
				cout << "No problem. :(" << endl;
			}
			else{
				cout << "No problem! :D" << endl;
				c-=b[i];
			}
			c+=a[i];
		}
	}
} 
