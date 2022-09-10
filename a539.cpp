#include <iostream>
using namespace std;
int main(){
	int b;
	while(cin>>b){
		int c = 0,a[b]={};
		for(int h=0;h<b;h++)
			cin>>a[h];
		for(int i=0;i<b;i++){
				bool flag = 0;
			for(int j=0;j<b-1;j++){
				if(a[j]>a[j+1]){
					swap(a[j],a[j+1]);
					c++;
				}
			}
		for(int o = 1;o<b;o++)
			if(a[o]<a[o-1])
				flag = 1;
		if(flag==0)
			break;
		}
		
		cout<<"Minimum exchange operations : "<< c <<'\n';
	}
}
