#include <stdio.h>
int main(){
	int b=0,c=1;
	int a[30]={1,1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597,2584,4181,6765,10946,17711,28657,46368,75025,121393,196418,317811,514229,832040};
	scanf("%d",&b);
	while(scanf("%d",&b)>0){
		c=0;
		while(1){
			if(a[c]==b){
				printf("%d\n",c+1);break;
			}
			else if(a[c]>b){
				printf("-1\n");break;
			}
			c++;
		}
	}
}
