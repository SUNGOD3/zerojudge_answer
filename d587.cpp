#include <iostream>

using namespace std;

int main (){
	
	int n=0;
	int x=0;
	int b=0;
	int c=0;
	while (cin >> n){
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
			if(a[i]==1){
				x++;
			}
			if(a[i]==2){
				b++;
			}
			if(a[i]==3){
				c++;
			}
		}
		for(int i=0;i<x;i++){
			cout << 1 << " ";
		}
		for(int i=0;i<b;i++){
			cout << 2 << " ";
		}
		for(int i=0;i<c;i++){
			cout << 3 << " ";
		}
		cout << endl;
	int x=0;
	int b=0;
	int c=0;
	}
} 
