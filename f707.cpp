#include <iostream>
using namespace std;
int ans,input;
bool seven(int x,int y){
	if(x%7==0&&y%7)return 0;
	if(x%7&&y%7==0)return 1;
	if(x%7==0){
		if(x%70<y%70)return 1;
	}
	else{
		if(x%77>y%77)return 1;
	}
	return 0;
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> input){
		if(input==0)break;
		if(ans==0)
			ans=input;
		else if(seven(ans,input))
			ans=input;
	}
	cout << ans;
} 
