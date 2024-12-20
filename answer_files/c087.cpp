#include <stdio.h>
#include <math.h>
int GCD(int x,int y){
	if(x%y==0)
		return y;
	else
		return GCD(y,x%y);
} 
int main(){
	int n,i,j;
	float m,count;
	while(scanf("%d",&n)>0){
		int a[n];
		if(n!=0){
			for(i=0;i<n;i++)
				scanf("%d",&a[i]);
			for(i=0,count=0;i<n;i++){
				for(j=i+1;j<n;j++)
					if(GCD(a[i],a[j])==1) count++;
			}
			m=n;
			if(count==0)
				printf("No estimate for this data set.\n");
			else
				printf("%.6f\n",sqrt(((m*(m-1))/2)*6/count));
		}
	}
}

