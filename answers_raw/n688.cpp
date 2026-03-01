#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);
    int n, k, sum = 0;
    cin >> n >> k;
    int a[n], ct = 0, mi=0x7fffffff;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] < 0) ++ct;
        mi = min(mi, abs(a[i]));
    }
    sort(a, a + n);
    if(k <= ct){
        for(int i = 0; i < k; i++) sum -= a[i];
        for(int i = k; i < n; i++) sum += a[i];
        cout << sum ;
    }
    else{
        for(int i = 0; i < ct; i++) sum -= a[i];
        for(int i = ct; i < n; i++) sum += a[i];
        if((k - ct) % 2) sum -= 2 * mi;
        cout << sum ;
    }
    return 0;
}