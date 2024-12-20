#include <iostream>
using namespace std;
int main(){
	int a;
	while(cin >> a){
		int b[a],sum=0;
		for(int i=0;i<a;i++)
			cin >> b[i];
		for(int i=0;i<a;i++){
			for(int j=i+1;j<a;j++){
				if(b[i]>b[j]){
					b[i]=b[i]^b[j];
					b[j]=b[i]^b[j];
					b[i]=b[i]^b[j];
					sum++;
				}
			}
		}
		cout << sum << "\n";
	}
} 
