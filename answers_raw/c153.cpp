#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
int n,s[51][51],lx,ly;
int main(){
    scanf("%d",&n);
    lx=1,ly=(n>>1)+1;
    s[lx][ly]=1;
    int k=n*n;
    for(int i=2;i<=k;i++){
        if(lx==1&&ly!=n)
            lx=n,ly++;
        else if(lx!=1&&ly==n)
            lx--,ly=1;
        else if(lx==1&&ly==n)
            lx++;
        else if(lx!=1&&ly!=n)
        {
            if(s[lx-1][ly+1]==0)lx--,ly++;
            else lx++;
        }
        s[lx][ly]=i;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<n;j++)
            printf("%d ",s[i][j]);
        printf("%d\n",s[i][n]);
    }
}
