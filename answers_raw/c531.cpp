#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
	int a[50],i=0,b[50];
	string n;
	while(cin >> n){
		for(int j=0;j<n.length();j++){
			int p=0;
			while(n[j]!=','&&j<n.length()){
				p*=10;
				p+=n[j]-48;
				j++;
			}
			a[i]=p;
			i++;
		}
		int k=0;
		if(i==1)
		cout << a[i-1] << "\n";
		else{
			for(int z=0;z<i;z++){
				if(a[z]%2==0){
					b[k]=a[z];
					k++;
				}
			}
			sort(b,b+k);
			k=0;
			for(int z=0;z<i;z++){
				if(a[z]%2==0){
					a[z]=b[k];
					k++;
				}
			}
			for(int ii=0;ii<i;ii++){
				if(ii!=i-1)
				cout << a[ii] << ',';
			}
			cout << a[i-1] <<"\n";
		}
		i=0;
	} 
} 
