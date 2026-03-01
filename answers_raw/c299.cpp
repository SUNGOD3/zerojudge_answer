#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	
	int i=0;
	int max=0;
	bool ans=true;
	while(cin >> i){
		int n[i];
		for(int j=0;j<i;j++){
			cin >> n[j];
		}
		sort(n,n+i);
		cout << n[0] << " " << n[i-1] << " ";
		if(n[i-1]-n[0]!=i-1){
			ans=false;
		}
		if(ans==true){
			cout << "yes" << endl;
		}
		else{
			cout << "no" << endl;
		}
		ans=true;
		return 0;
	}
	
	
} 
