#include <iostream>
using namespace std;
string a;
int main(){
	int t;
	while(cin >> t){
		if(t==0)break;
		int ans[6]={1,2,3,5,4,6};//正 上 左 下 右 後 
		while(t--){
			cin >> a;
			if(a[0]=='s'){
				int tmp=ans[0];
				ans[0]=ans[1];
				ans[1]=ans[5];
				ans[5]=ans[3];
				ans[3]=tmp;
			}	
			else if(a[0]=='e'){
				int tmp=ans[0];
				ans[0]=ans[2];
				ans[2]=ans[5];
				ans[5]=ans[4];
				ans[4]=tmp;
			}
			else if(a[0]=='n'){
				int tmp=ans[0];
				ans[0]=ans[3];
				ans[3]=ans[5];
				ans[5]=ans[1];
				ans[1]=tmp;
			}
			else{
				int tmp=ans[0];
				ans[0]=ans[4];
				ans[4]=ans[5];
				ans[5]=ans[2];
				ans[2]=tmp;
			}
		}
		cout << ans[0] << "\n";
	}
} 
