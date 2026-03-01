#include<stdio.h>
#include<string.h>
int main(){
	char in[9001]={0};
	int t=0,i=0,j=0,sum=0,len;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%s",in);
		len=strlen(in);
		for(j=0;j<len;j++){
			if(in[j]=='1')
				sum++;
			j++;
			if(in[j]=='1')
				sum+=2;
		}
		puts((sum%3==0)?"Yes\n":"No\n");
		sum=0;
	}
	return 0;
}
