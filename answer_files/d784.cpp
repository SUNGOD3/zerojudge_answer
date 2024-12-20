#include <iostream>
using namespace std;
int main(){
	int a;
	cin >> a;
	while(a--){
		int b,max=-10000;
		cin >> b;
		int c[b+1]={0},ans[b+1]={0};
		for(int i=0;i<b;i++){
			cin >> c[i];
			ans[i]=-10000;
		}
		for(int i=0;i<b;i++){
			for(int j=i+1;j<=b;j++){
				if(c[i]>ans[i])
					ans[i]=c[i];
				c[i]+=c[j];
			}
		}
		for(int i=0;i<b;i++){
			if(ans[i]>max)
				max=ans[i];
		}
		cout << max << "\n";
	}
} 
