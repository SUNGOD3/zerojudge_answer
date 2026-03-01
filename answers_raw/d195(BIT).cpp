#include <stdio.h>
int a[100001],BIT[100001],MAX_N;
inline int read(){
	int a(0);
	char c('0');
	while(c>='0'){
		a=(a<<3)+(a<<1)+c-'0';
		c=getchar_unlocked();
	}
	return a;
}
int lowbit(int x){
    return x&(-x);
}
void edit(int i, int delta){
    for (int j = i; j <= MAX_N; j += lowbit(j))
        BIT[j] += delta;
}
int sum (int k){
    int ans = 0;
    for (int i = k; i > 0; i -= lowbit(i))
        ans += BIT[i];
    return ans;
}
int main(){
    int n;
    while(n=read()){
    	if(n==0)break;
    	MAX_N=n;
		int ans=0,mi=100001;	
		for(int i=0;i<100001;++i)
			BIT[i]=0;
    	for(int i=0;i<n;++i)
    		a[i]=read();
		for(int i=n-1;i>=0;--i){
			if(mi>=a[i])
				mi=a[i];
			else
				ans+=sum(a[i]);
			edit(a[i],1);
		}
		if(ans%2)
			printf("Marcelo\n");
		else
			printf("Carlos\n");
	}
}
