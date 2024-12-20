#include <iostream>
using namespace std;
int main(){
	int a;
	cin >> a;
	int b[a],ans=0;
	for(int i=0;i<a;++i)
		cin >> b[i];
	for(int i=0;i<a;++i){
		bool add=0;
		for(int j=0;j<a&&add==0;++j){
			if(j==i)continue;
			for(int k=j+1;k<a&&add==0;++k){
				if(k==i)continue;
				if(b[j]+b[k]==b[i])add=1;
			}
		}
		ans+=add;
	}
	cout << ans << "\n";
}
