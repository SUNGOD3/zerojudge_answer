#include <iostream>
using namespace std;
int a[11],n,k,tmp[11],t2[11],count,fd,ans[11];
void dfs(int it,int w){
	t2[w]=tmp[it];
	if(w==k-1){
		++count;
		int ch=1;
		for(int i=0;i<k;++i)
			if(a[i]!=t2[i])ch=0;
		if(ch)
			fd=count;
		if(fd&&count==fd+1)
			for(int i=0;i<k;++i)
				ans[i]=t2[i];
		return;
	}
	for(int i=it+1;i<n;++i){
		dfs(i,w+1);
	}
}
int main(){
	cin >> n >> k;
	for(int i=0;i<n;++i)
		tmp[i]=i+1;
	for(int i=0;i<k;++i)
		cin >> a[i];
	for(int i=0;i<n;++i)
		dfs(i,0);
	cout << fd << "\n";
	if(fd==count)
		cout << "no next combination";
	else
		for(int i=0;i<k;++i)
			cout << ans[i] << " ";
} 
