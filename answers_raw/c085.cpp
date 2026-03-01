#include <iostream>
using namespace std;
int main(){
	int chat[10001]={0};
	int a,b,c,d,i=1;
	while(cin >> a >> b >> c >> d){
		if(a==0&&b==0&&c==0&&d==0)
			break;
		for(int i=0;i<10001;i++)
			chat[i]=0;	
		int ans=0;
		while(chat[d]!=2){
			d=(a*d+b)%c;
			chat[d]++;
			ans++;
		}	
		cout << "Case " << i << ": " << ans-1 << "\n";
		i++;
	}
} 
