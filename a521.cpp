#include <bits/stdc++.h>   
using namespace std;   
int main(){   
    string s;   
    while(cin >> s){   
        int ST=0,i,tt;   
        bool k=1;   
        while(++ST<=10000&&k){   
            char tmp[101]={};   
            for(i=0,tt=0;s[i];++i) {   
                int num = (s[i]-'A')+ST;   
                sprintf(tmp+tt,"%d",num);   
                while(tmp[tt]!='\0')   
                    ++tt;   
            }   
            for(i=0;i<tt;++i)   
                tmp[i] -= '0';   
            while(tt>1){   
                for(i=0;i<tt-1;++i){   
                    tmp[i]=tmp[i]+tmp[i+1];   
                    if(tmp[i]>=10)tmp[i]-=10;   
                }   
                tt--;   
                if(tt==2&&tmp[0]==1&&tmp[1]==0&&tmp[2]==0){   
                    cout<<ST<<"\n";   
                    k=0;
					break;   
                }   
            }   
        }   
        if(k)   
            puts(":(");   
    }   
    return 0;   
}  
