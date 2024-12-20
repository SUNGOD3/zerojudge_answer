#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int GCD(int m,int n){
	if(m%n==0)
		return n;
	return GCD(n,m%n);
}
int main(){
	int a;
	cin >> a;
	string b;
	getline(cin,b);
	while(a--){
		getline(cin,b);
		int M[101]={},i=0,max=0;
		stringstream ss;
		ss<<b;
		while(1){
			ss>>M[i];
			i++;
			if(ss.fail()) break;
		}
		for(int i=0;M[i]!=0;i++){
			for(int j=i+1;M[j]!=0;j++){
				if(M[i]>M[j]){
					if(GCD(M[i],M[j])>max)
						max=GCD(M[i],M[j]);
				}
				else{
					if(GCD(M[j],M[i])>max)
						max=GCD(M[j],M[i]);
				}
			}
		}
		cout << max << endl; 
	}
} 
