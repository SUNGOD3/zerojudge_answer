#include <iostream>
using namespace std;
int a[17],n,sum,g,y,u[17];
void dfs(int it,int no,int no2){
	if(y)return;
	if(no==g&&no2==g){
		y=1;
		return;
	}
	else if(no==g){
		for(int i=0;i<n;++i){
			if(u[i]==0&&a[i]+no2<=g){
				u[i]=2;
				dfs(i,no,no2+a[i]);
				u[i]=0;
			}
		}
	}
	else{
		for(int i=it+1;i<n;++i){
			if(u[i]==0&&a[i]+no<=g){
				u[i]=1;
				dfs(i,no+a[i],no2);
				u[i]=0;
			}
		}
	}
}
int main(){
	cin >> n;
	for(int i=0;i<n;++i){
		cin >> a[i];
		sum+=a[i];
	}
	if(sum%3)
		cout << "NO";
	else{
		g=sum/3;
		for(int i=0;i<n;++i){
			u[i]=1;
			dfs(i,a[i],0);
			u[i]=0;
		}
		if(y)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
} 
