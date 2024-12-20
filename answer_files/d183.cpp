#include <bits/stdc++.h>
using namespace std;
int a[15];        //存每個number出現的次數 

bool check(int c,int d){
    memset(a,0,sizeof(a));
    //判斷是否>5位
    if(d > 98765) return false;
    //判斷是否出現重複 
    for(int i = 0;i < 5;i++){       //需要循環5次,判斷每一位 
        a[c % 10]++;a[d % 10]++;
        c /= 10;d /= 10;
    }

    for(int i = 0;i < 10;i++){
        if(a[i] != 1) return false;
    }
    return true;
}

int main(void){
    int n,kase = 0;
    while(scanf("%d",&n) == 1 && n){
        if(kase++ > 0) printf("\n");

        bool flag = false;
        for(int i = 1234;i < 99999;i++){
            if(check(i,n * i)){
                printf("%05d / %05d = %d\n",n*i,i,n);
                flag = true;
            }
        }

        if(flag == false){
            printf("There are no solutions for %d.\n",n);
        }
    }   
    return 0;
}
