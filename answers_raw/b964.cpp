#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	
	int p=0,max=101,min=(-1);
	bool max1=false,min1=false;
	while(cin >> p){
		int g[p];
		for(int i=0;i<p;i++){
			cin >> g[i];
		}
		sort(g,g+p);
		for(int i=0;i<p;i++){
			if(g[i]<60){
				if(g[i]>min){
					min=g[i];
					min1=true;
				}
			}
			else if(g[i]>=60){
				if(g[i]<max){
					max=g[i];
					max1=true;
				}
			}
			
			cout << g[i] ;
			if(i!=p-1){
				cout << " ";
			}
		}
		cout << endl;
		if(min1==true){
			cout << min << endl;
		}
		else{
			cout << "best case" << endl;
		}
		if(max1==true){
			cout << max << endl;
		}
		else{
			cout << "worst case" << endl;
		}
		max=101;
		min=(-1);
		max1=false;
		min1=false;
		
	}
} 
