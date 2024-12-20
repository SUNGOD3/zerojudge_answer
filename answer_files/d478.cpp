#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
    cin.tie(NULL);
	int a,b,ans,i,k,mina,minb,maxa,maxb,ba,bas;
	cin >> a >> b;
	b*=2;
	ba=b;
	for(;a>0;a--){
		b=ba;
		int c[b];
		for(i=0;i<b;i++)
			cin >> c[i];
		mina=c[0];
		minb=c[b/2];
		maxa=c[b/2-1];
		maxb=c[b-1];	
		for(i=0,bas=0;i<b;i++){
			if((c[i]<mina||c[i]<minb)||(c[i]>maxa||c[i]>maxb)){
				bas++;
				c[i]=-1;
			}
		}
		b-=bas;
		int d[b];
		for(i=0,k=0;i<ba;i++){
			if(c[i]!=-1){
				d[k]=c[i];
				k++;
			}
		}
		sort(d,d+b);
		for(i=0,ans=0;i<b-1;i++){
			if(d[i]==d[i+1]){ 
				ans++;
				i++;
			} 
		}
		cout << ans << endl;
	}
}
