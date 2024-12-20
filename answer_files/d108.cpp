#include <iostream>
using namespace std;
int m[10]={6,2,5,5,4,5,6,3,7,6},n,ans;
void dfs(int x1,int y1,int sum,int tmp,int type){
	if(tmp>n||sum>x1+y1)return;
	if(type==1){
		for(int i=0;i<10;++i){
			if(x1!=0)dfs(x1*10+i,y1,sum,tmp+m[i],1);
		}
		for(int i=0;i<10;++i){
			dfs(x1,i,sum,tmp+m[i],2);
		}
	}
	else if(type==2){
		for(int i=0;i<10;++i){
			if(y1!=0)dfs(x1,y1*10+i,sum,tmp+m[i],2);
		}
		for(int i=0;i<10;++i){
			dfs(x1,y1,i,tmp+m[i],3);
		}
	}
	else{
		if(tmp==n&&x1+y1==sum){
		//	cout << x1 << " " << y1 << " " << sum << "\n";
			++ans;
			return;
		}
		for(int i=0;i<10;++i){
			if(sum!=0)dfs(x1,y1,sum*10+i,tmp+m[i],3);
		}
	}
}
int main(){
	while(cin >> n){
		ans=0;
		n-=4;
		for(int i=0;i<10;++i){
			dfs(i,0,0,m[i],1);
		}
		cout << ans << "\n";
	}
} 
