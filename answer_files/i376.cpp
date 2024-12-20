#include <iostream>
using namespace std;
int n,a[105][105],mai[105],mij[105],x=-1,y=-1;
int main(){
    cin.tie(0); ios::sync_with_stdio(0);
    cin >> n;
    for(int i=0;i<n;++i)
        for(int j=0;j<n;++j){
            cin >> a[i][j];
            mai[i]=max(mai[i],a[i][j]);
            mij[j]=(i==0?a[i][j]:min(mij[j],a[i][j]));
        }    
    for(int i=0;i<n&&x==-1;++i)
        for(int j=0;j<n&&y==-1;++j)
            if(a[i][j]==mai[i]&&a[i][j]==mij[j]){
                x=i;
                y=j;    
            }
    (x==-1&&y==-1)?cout << "NO":cout << x << " " << y;    
} 
