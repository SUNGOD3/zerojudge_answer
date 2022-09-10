#include <iostream>
#include <algorithm>
using namespace std;
int a[5],ans;
void dfs(int it,int sum){
	if(it==4||ans){
		if(sum==23)ans=1;
		return;
	}
	++it;
	dfs(it,a[it]+sum);
	dfs(it,sum-a[it]);
	dfs(it,a[it]*sum);
}
int main(){
	while(cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4]){
		if(!a[0]&&!a[1]&&!a[2]&&!a[3]&&!a[4])break;
		ans=0;
		sort(a,a+5);
		do{
			dfs(0,a[0]);
			if(ans)break;
		}while(next_permutation(a,a+5));
		if(ans)
			cout << "Possible\n";
		else
			cout << "Impossible\n";
	}
} 
