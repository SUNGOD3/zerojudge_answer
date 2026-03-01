#include <iostream>
#include <algorithm>
int b[40000];
int main(){
	int a;
	scanf("%d",&a);
	while(scanf("%d",&a)>0){
		for(int i=0;i<a;i++)
			scanf("%d",&b[i]);
		std::sort(b,b+a);
		if(a%2==0)
			printf("%d\n",b[a/2-1]);
		else
			printf("%d\n",b[a/2]);
	}
} 
