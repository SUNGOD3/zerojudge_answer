#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
 unsigned long long int n;
 while(scanf("%llu",&n)==1)
     printf("%.0lf\n",pow(n,1/3.0));
  return 0;
}
