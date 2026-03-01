#include <iostream>
using namespace std;
int a[6];
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> a[0]){
		int ans=0,s=0;
		for(int i=1;i<6;++i){
			cin >> a[i];
			s+=a[i];
		}
		if(s+a[0]==0)break;
		ans+=a[5];
		ans+=a[4];
		a[0]-=a[4]*11;
		ans+=a[3];
		a[1]-=a[3]*5;
		ans+=a[2]/4;
		a[2]%=4;
		if(a[2]){
			ans+=1;
			int re=4-a[2];
			a[1]-=re*2-1;
			a[0]-=(36-a[2]*9-(re*2-1)*4);
		}
		if(a[1]<0){
			a[0]-=a[1]*-2;
			a[1]=0;
		}
		if(a[1]>0){
			ans+=a[1]/9;
			a[1]%=9; 
		}
		if(a[1]>0){
			++ans;
			a[0]-=(36-a[1]*4);
		}
		if(a[0]>0){
			ans+=a[0]/36;
			a[0]%=36;
		}
		if(a[0]>0){
			++ans;
		}
		cout << ans << '\n';
	}
} 
