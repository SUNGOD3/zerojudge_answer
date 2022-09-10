#include <iostream>
using namespace std;
int a[101]={0};
int main(){
	int b;
	while(cin >> b){
		int w,v,max=0;
		for(int i=0;i<101;i++)
			a[i]=0;
		while(b--){
			cin >> w >> v;
			for(int i=0;i<=100;i++){
				if(a[i]!=0&&i-w>=0||i==100){
					if(a[i]+v>a[i-w])
						a[i-w]=a[i]+v;
				}
			}
		}
		for(int i=0;i<101;i++){
			if(a[i]>max)
				max=a[i];
		}
		cout << max << '\n';
	}
} 
