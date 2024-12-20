#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
    cin.tie(NULL);
	int a,i,c;
	cin >> a;
	while(cin >> a){
		int t[a];
		for(i=0;i<a;i++)
			cin >> t[i];
		c=0;
		sort(t,t+a);
		for(int i=0;i<a;i++){
			for(int j=i+1;j<a;j++){
				for(int k=j+1;k<a;k++){
					if(t[i]*t[i]+t[j]*t[j]==t[k]*t[k])
						c++;
				}
			}
		}
		cout << c << endl;
	}
} 
