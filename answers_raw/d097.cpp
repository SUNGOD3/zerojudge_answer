#include <iostream>

using namespace std;

int main(){
	int n=0;
	bool ans=true;
	while(cin >> n){
		int arr[n];
		int brr[n];
		int range=n-1;
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		for(int i=0;i<n-1;i++){
			if(arr[i+1]-arr[i]>0){
				if(arr[i+1]-arr[i]<1||arr[i+1]-arr[i]>range){
					ans=false;
					break;
				}
				else{
					brr[arr[i+1]-arr[i]]=0;
				}
			}
			else{
				if(arr[i]-arr[i+1]<1||arr[i]-arr[i+1]>range){
					ans=false;
					break;
				}
				else{
					brr[arr[i]-arr[i+1]]=0;
				}
			}
		}
		for(int i=1;i<n;i++){
			if(brr[i]!=0){
				ans=false;
			}
		}
		if(ans==true){
			cout << "Jolly" << endl;
		}
		else{
			cout << "Not jolly" << endl; 
		}
		ans=true;
	}
} 
