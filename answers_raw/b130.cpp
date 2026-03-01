#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
    std::cin.tie(0);
	int a,c;
	while(cin >> a){
		int b[a];
		c=a;
		for(int i=0;i<a;i++){
			cin >> b[i];
		}
		for(int i=0;i<a;i++){
			for(int j=i+1;j<a;j++){
				if(b[i]==b[j]){
					b[i]=0;
					c--;
				}
			}
		}
		sort(b,b+a);
		cout << c << endl;
		for(int i=0;i<a;i++){
			if(b[i]!=0){
				cout << b[i] << " ";
			}
		}
		cout << endl;
	}
} 
