#include <stdlib.h>
#include <stdio.h>
int main(){
	int n, t;
	while (scanf("%d%d",&n,&t) != EOF) {
		int total[20] = {0};
		int m, s;
		int i, j;
		for (i = 0; i < n; i++)
			for (j = 0; j < t; j++) {
				scanf("%d:%d", &m, &s);
				total[j] += (m * 60) + s;
			}
		for (i=0;i<t-1;i++)
			for (j=i+1;j<t;j++) {
				if (total[i] > total[j]) {
					total[i]^=total[j];
					total[j]^=total[i];
					total[i]^=total[j];
				}
			}
		for (i = 0; i < t; i++)
			printf("%d\n", total[i]);
	}
}

 
