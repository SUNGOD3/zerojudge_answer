#include <iostream>

using namespace std;


int main(){
	
	int GCD,a,b;
		while(cin>>a>>b){
			for(int i=1;i<=a&&i<=b;i++){
				if(a%i==0&&b%i==0){
					GCD=i; 
				}	
			}
	cout<<GCD<<endl;
	}

}
