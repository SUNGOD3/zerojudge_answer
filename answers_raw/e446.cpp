#include <iostream>  
#include <algorithm>   
int main(){  
	std::ios::sync_with_stdio(false);
    std::cin.tie(0);
	int a;
	scanf("%d",&a);
	int b[a-1]={0};
    for(int i=0;i<a;i++)
    	b[i]=i+1;
    do{  
        for(int i=0;i<a;i++)
			printf("%d ",b[i]);
		printf("\n");
    }while(std::next_permutation(b,b+a));  
}  

