#include <iostream>
//#include <stdlib.h>
using namespace std;
int arr[2000000] = {0};
int fun(int x){
	if(arr[x])
		return arr[x];
	if(x==1){
		arr[x]=1;
		return 1; 
	}
	if(x%2==0){
		arr[x] = fun(x/2); 
		return arr[x];
	} 
	arr[x-1] = fun(x-1);
	arr[x+1] = fun(x+1);
	return arr[x-1]+arr[x+1];
}

int main(){
	int x=0;
//	memset(arr,10000,-1);
	while(cin >> x){
		cout << fun(x);
	}
	return 0;
} 
