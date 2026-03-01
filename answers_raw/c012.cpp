#include <bits/stdc++.h>
using namespace std;
int main(){  
	cin.tie(0); ios::sync_with_stdio(false);
    string a;  
    bool s=0;
    while(getline(cin,a)){
		if(s!=0)cout << "\n";
		else s=1;  
        int b[127]={0};  
        for(int i=0;i<127;i++)
        	b[i]=0;
        for(int i=0,al=a.length();i<al;i++)  
            b[a[i]]++;  
        for(int i=1;i<=1000;i++)  
            for(int j=126;j>=0;j--)  
                if(b[j]==i)cout << j << " " << i << "\n";  
    }  
}  
