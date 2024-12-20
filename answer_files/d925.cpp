#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char** argv) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int m,n,t,x,y,k;
	cin>>m>>n>>t;
    double ans=0;
    if(m>1&&n>1){
		while(t--){
			cin>>x>>y>>k;
            if((x==1&&y==1)||(x==1&&y==n)||(x==m&&y==1)||(x==m&&y==n))
                ans+=k<<1;
            else if(x==1||x==m||y==1||y==n)
                ans+=k<<2;
            else
                ans+=k*7;
        }
	}
	else{
		if(n!=1)
			while(t--){
				cin>>x>>y>>k;
            	if(y!=1&&y!=n)
           	    	ans+=k;
            }
        else if(m!=1)
        	while(t--){
        		cin>>x>>y>>k;
            	if(x!=1&&x!=m)
               	 ans+=k;
            }
        else
        	while(t--){
        		cin>>x>>y>>k;
            	ans-=k;
        	}
	}
    cout<<fixed<<setprecision(2)<<ans/(m*n)<<"\n";
    return 0;
}
