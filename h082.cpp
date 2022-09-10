#include <iostream>
using namespace std;
struct py{
	long long s,t,id,l;
};
long long sa[1005],ta[1005];
py a[1005],b[1005],c[1005];
long long n,m;
int main(){
	cin >> n >> m;
	for(int i=0;i<n;++i){
		cin >> sa[i];
	}
	for(int i=0;i<n;++i){
		cin >> ta[i];
	}
	for(int i=0;i<n;++i){
		cin >> a[i].id;
		a[i].s=sa[a[i].id-1];
		a[i].t=ta[a[i].id-1]; 
	}
	while(n>1){
		int i=0,j=0,k=0;
		while(i<n-1){
			if(a[i].s*a[i].t>=a[i+1].s*a[i+1].t){
				b[j]=a[i];
				b[j].s=a[i].s+a[i+1].s*a[i+1].t/(a[i].t*2);
				b[j].t=a[i].t+a[i+1].s*a[i+1].t/(a[i].s*2);
				c[k]=a[i+1];
				c[k].s=a[i+1].s+a[i+1].s/2;
				c[k].t=a[i+1].t+a[i+1].t/2;
			}
			else{
				b[j]=a[i+1];
				b[j].s=a[i+1].s+a[i].s*a[i].t/(a[i+1].t*2);
				b[j].t=a[i+1].t+a[i].s*a[i].t/(a[i+1].s*2);
				c[k]=a[i];
				c[k].s=a[i].s+a[i].s/2;
				c[k].t=a[i].t+a[i].t/2;
			}			
			c[k].l++;
			i+=2;
			++j;
			++k;
		}
		if(n%2){
			b[j++]=a[n-1];
		}
		for(int i=0;i<j;++i){
			a[i]=b[i];
		}
		for(int i=j,ii=0;ii<k;++ii){
			if(c[ii].l>=m){
				--n;
				continue;
			}
			a[i++]=c[ii];
		}
	}
	cout << a[0].id;
} 
