#include <iostream>
#include <string>
using namespace std;
int ans[26];
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int n,max=0;
	string a;
	cin >> n;
	getline(cin,a);
	while(n--){
		getline(cin,a);
		for(int i=a.length()-1;i>=0;i--){
			if(a[i]>='A'&&a[i]<='Z'){
				ans[a[i]-65]++;
				if(ans[a[i]-65]>max){
					max=ans[a[i]-65];
				}	
			}
			else if(a[i]>='a'&&a[i]<='z'){
				ans[a[i]-97]++;
				if(ans[a[i]-97]>max){
					max=ans[a[i]-97];
				}
			}
		}
	}
	int maxn=0;
	while(max!=0){
		maxn=0;
		for(int i=0;i<26;i++){
			if(ans[i]==max){
				char z='A'+i;
				cout << z << " " << ans[i] << "\n";					
				ans[i]=0;
			}
			else if(ans[i]!=max&&ans[i]>maxn){
				maxn=ans[i];
			}
		}
		max=maxn;
	}
} 
