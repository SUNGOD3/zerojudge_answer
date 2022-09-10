#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
struct Prop{
    char name[82];
    double cost;
    int mark;
    Prop(){mark = -1;};
};
inline bool operator < (const Prop &p1, const Prop &p2){
    if(p1.mark != p2.mark)
        return p1.mark < p2.mark;
    return p1.cost > p2.cost;
}
int n,p;
int r;
string order[1024];
Prop prop;
string item[1024];
int main(){
    for(int t = 1 ; ; t++)
    {
        Prop ans;
        
        scanf("%d%d", &n, &p);
        if(n==0 && p==0)
            return 0;
        getchar();
        for(int i = 0 ; i < n ; i++)
            getline(cin, order[0]);
        for(int i = 0 ; i < p ; i++){
            gets(prop.name);
            scanf("%lf%d", &prop.cost, &prop.mark);
            
            getchar();
            
            for(int j = 0 ; j < prop.mark ; j++)
                getline(cin, item[j]);
            
            if(ans < prop)
                ans = prop;
        }
        if(t > 1)
            putchar('\n');
        printf("RFP #%d\n",t);
        printf("%s\n",ans.name);
    }
    return 0;
}
