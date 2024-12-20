#include <iostream>
#include <string>
using namespace std;
int main(){
	int k,ans=0;
	string a;
	cin >> k;
	cin >> a;
	int al=a.length();
	bool n[al];
	for(int i=0;i<al;++i)
		(a[i]>='a')?n[i]=0:n[i]=1;
	for(int i=0,rem=0;i+k<al;){
		int lcs=0;
		bool chat=n[i];
		rem=i;
		while(n[i]==chat&&i+k<al){
			for(int j=0;j<k;++j){
				if(n[i+j]!=chat){
					chat=n[i+j];
					break;
				}
			}
			if(chat==n[i]){
				chat=!chat;
				lcs+=k;
				if(lcs>ans)
					ans=lcs;
				i+=k;
			}
			else
				break;
		}
		i=rem+1;
	}
	if(k==1&&al==1)ans=1;
	cout << ans << "\n";
}
