#include <stdio.h>
#include <string.h>
int main(){
	char ans[10]={'U','G','Y','T','I','U','G','Y','T','I'},input[20];
	while(scanf("%s",&input)>0)
		printf("%c\n",ans[input[strlen(input)-1]-48]);
} 
