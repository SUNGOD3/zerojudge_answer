#include <bits/stdc++.h>
using namespace std;
int a[15];        //�s�C��number�X�{������ 

bool check(int c,int d){
    memset(a,0,sizeof(a));
    //�P�_�O�_>5��
    if(d > 98765) return false;
    //�P�_�O�_�X�{���� 
    for(int i = 0;i < 5;i++){       //�ݭn�`��5��,�P�_�C�@�� 
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
