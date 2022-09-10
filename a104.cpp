#include <iostream>

using namespace std;

int main(){
	
	int n=0;
	int c=0;
	
	while(cin >> n){
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n-i-1;j++){
				if(a[j]>a[j+1]){
					c=a[j+1];
					a[j+1]=a[j];
					a[j]=c;
				}
			}
		}
		for(int i=0;i<n;i++){
			cout << a[i] << " "; 
	}
	cout << endl;
}
return 0;
} 
