#include <iostream>
#include <string>

using namespace std;

int main(){
	long long int a=0,b=1;
	bool next=false;
	while(cin >> a){//a==1 b==2
		for(int i=a;i>0;i--){
			b*=2;
		}
		//---------------------------//
		int arr[a];
		for(int i=0;i<a;i++){
			arr[i]=0;
		}
		//---------------------------//
		for(int i=0;i<a;i++){
			cout << "0";
		}
		cout << endl;
		for(int i=b;i>1;i--){
			arr[a-1]++;//last++
			for(int j=a-1;j>=0;j--){//
				if(arr[j]>1){
					arr[j]-=2;
					arr[j-1]++;
				}
			}
			for(int k=0;k<a;k++){
				cout << arr[k];
			}
			cout << endl;
		}
		a=0;
		b=1;
	}
	
} 
