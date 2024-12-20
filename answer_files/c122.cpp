#include <iostream>
#include <algorithm>
using namespace std;
long long int ans[5843],it;
void find(long long int n){
	if(n>2000000000||it>=5843)return;
	for(int i=0;i<it;++i){
		if(ans[i]==n)return;
	}
	ans[it]=n;
	++it;
	find(n*2);
	find(n*3);
	find(n*5);
	find(n*7);
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	find(1);
	sort(ans,ans+it);
	while(cin >> it){
		if(it==0)break;
		int l=it%100,m=it%10;
		if(l==11||l==12||l==13)
			cout << "The " << it << "th humble number is ";
		else if(m==1)
			cout << "The " << it << "st humble number is ";
		else if(m==2)
			cout << "The " << it << "nd humble number is ";
		else if(m==3)
			cout << "The " << it << "rd humble number is ";
		else
			cout << "The " << it << "th humble number is ";
		cout << ans[it-1] << ".\n";
	} 
} 
