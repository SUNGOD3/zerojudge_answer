#include <stdio.h>  
#include <math.h>  
  
void radixConversion(int number, int radix);  
  
int main()  
{  
    int number, radix;  
  
    while (scanf("%d", &number) != -1)  
    {  
        radixConversion(number, 8);  
    }  
  	
    return 0;  
}  
  
/* PRESET CODE END - NEVER TOUCH CODE ABOVE*/  
  
void radixConversion(int number, int radix){
    int a=0;//���  
    int v=0;//�C������   
    int x=radix;//radix�����   
    if(number>0){
	    a=log(number)/log(radix)+1;//�����A�ڤW���d���o��//a=11;  
	    for(int i=0;i<a;i++){  
	        x=pow(radix,a-i-1);  
	        v=number/x;  
	        number=number-(v*x);  
	        if(v<10){  
	            printf("%d",v);  
	        }  
	        else{  
	            v-=10;  
	            printf("%c",'A'+v);  
	        }  
	    }  
	    printf("\n");  
	}
	else if(number==0){
		printf("%d\n",0);
	}
	else{
		printf("%d\n",-1);
	}
      
}  

