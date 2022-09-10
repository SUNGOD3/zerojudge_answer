#include <iostream>
using namespace std;
int gcd(int m,int n){
	if(m%n==0)
		return n;
	return gcd(n,m%n);	
}
int main(){
	int a,b,c,d;
	char x;
	while(cin >> a >> b >> c >> d >> x){
		if(x=='+'){
			a*=d;
			c*=b;
			b*=d;
			a+=c;
		}
		else if(x=='-'){
			a*=d;
			c*=b;
			b*=d;
			a-=c;
		}
		else if(x=='*'){
			a*=c;
			b*=d;
		}
		else if(x=='/'){
			a*=d;
			b*=c;
		}
		bool ans=0;
		if(a*b<0)
			ans=1;
		if(a<0)
			a*=-1;
		if(b<0)
			b*=-1;
		if(a==0)
			printf("0\n");
		else if(a==b)
			printf("1\n");
		else if(a>b){
			if(ans==1)printf("-");
			if(a%b==0)
				printf("%d\n",a/b);
			else{
				int ans=gcd(a,b);
				printf("%d/%d\n",a/ans,b/ans);
			}
		}
		else{
			if(ans==1)printf("-");
			if(b%a==0)
				printf("1/%d\n",b/a);
			else{
				int ans=gcd(b,a);
				printf("%d/%d\n",a/ans,b/ans);
			}
		}		
	}
} 
