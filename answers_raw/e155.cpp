#include <iostream>
#include <string>
using namespace std;
string ans[51];
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	for(int i=1;i<51;i++){
		ans[i]+="Discarded cards:";
		bool b[i],c=1;
		for(int j=0;j<=i;j++){
			b[j]=0;
		}
		int k=1,n=1;
		while(k<i){
			if(c==1&&b[n]==0){
				b[n]=1;
				c=0;
				ans[i]+=' ';
				int num=n;
				if(num>=10){
					ans[i]+=num/10+48;
					num%=10;
				}
				ans[i]+=num+48;
				if(k!=i-1)
				ans[i]+=',';
				k++;
			}
			else if(c==0&&b[n]==0){
				c=1;
			}
			n++;
			if(n>i){
				n-=i;
			}
		}
		for(int j=1;j<=i;j++){
			if(b[j]==0){
				ans[i]+='\n';
				ans[i]+="Remaining card: ";
				if(j>=10){
					ans[i]+=j/10+48;
					j%=10;
				}
				ans[i]+=j+48;
				ans[i]+='\n';
				break;
			}
		}
	}
	int n;
	while(cin >> n){
		cout << ans[n];
	}
} 
