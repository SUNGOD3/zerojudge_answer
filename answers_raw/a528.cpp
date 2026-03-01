#include <iostream>
#include <string>
using namespace std;
int main(){
	std::ios::sync_with_stdio(false);
    std::cin.tie(0);
	int a;
	while(cin >> a){
		string b[a],tem;
		int c[a],tmp;
		for(int i=0;i<a;i++){
			cin >> b[i];
			if(b[i][0]=='-'){
				c[i]=-b[i].length();
			}
			else{
				c[i]=b[i].length();
			}
		}
		for(int i=0;i<a;i++){
			for(int j=i+1;j<a;j++){
				if(c[i]>c[j]){
					tmp=c[i];
					c[i]=c[j];
					c[j]=tmp;
					tem=b[i];
					b[i]=b[j];
					b[j]=tem;
				}
				else if(c[i]==c[j]&&c[i]>0){
					for(int k=0;k<b[i].length();k++){
						if(b[i][k]>b[j][k]){
							tem=b[i];
							b[i]=b[j];
							b[j]=tem;
						} 
					}
				}
				else if(c[i]==c[j]&&c[i]<0){
					for(int k=0;k<b[i].length();k++){
						if(b[i][k]<b[j][k]){
							tem=b[i];
							b[i]=b[j];
							b[j]=tem;
						} 
					}
				}
			}
		}
		for(int i=0;i<a;i++){
			cout << b[i] << endl;
		}
	}
}
