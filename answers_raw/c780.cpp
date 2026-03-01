#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <iostream>
using namespace std;
int n, m, maxi, a[9][9];
inline void func(int x, int y, int steps){
    int count = 0;
    bool flag = 0;
    if(x<n-1)
	    for (int i = x+1; i < n; ++i){
	        if (a[i][y]) ++count;
	        if (count == 2){
	            a[i][y] = 0;
	            func(i, y, steps+1);
	            a[i][y] = 1;
	            flag = 1;
	            break;
	        }
	    }
    count = 0;
    if(x>0)
	    for (int i = x-1; i >= 0; --i){
	        if (a[i][y]) ++count;
	        if (count == 2){
	            a[i][y] = 0;
	            func(i, y, steps+1);
	            a[i][y] = 1;
	            flag = 1;
	            break;
	        }
	    }
    count = 0;
    if(y<m-1)
	    for (int i = y+1; i < m; ++i){
	        if (a[x][i]) ++count;
	        if (count == 2){
	            a[x][i] = 0;
	            func(x, i, steps+1);
	            a[x][i] = 1;
	            flag = 1;
	            break;
	        }
	    }
    count = 0;
    if(y>0)
	    for (int i = y-1; i >= 0; --i){
	        if (a[x][i]) ++count;
	        if (count == 2){
	            a[x][i] = 0;
	            func(x, i, steps+1);
	            a[x][i] = 1;
	            flag = 1;
	            break;
	        }
	    }
    if (!flag && steps > maxi) maxi = steps;
}
int main(){
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            a[i][j] = 1;
    a[0][0] = 0;
    func(0, 0, 0);
    cout << maxi ;
}
