#include <iostream>
using namespace std;
int a[1001],ma,n,d;
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]>ma){
            cout << ma;
            return 0;
        }
        cin >> d;
        ma=max(ma,a[i]+d);
    }
    cout << ma;
    return 0;
}