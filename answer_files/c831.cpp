#include <iostream>
using namespace std;
int main(){
    long long int x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    if(x3 > x4){
        x3 ^= x4;
        x4 ^= x3;
        x3 ^= x4;
    }
    if(y3 > y4){
        y3 ^= y4;
        y4 ^= y3;
        y3 ^= y4;
    }
    cout << min(x4-x3, x2-x4+x3-x1) + min(y4-y3, y2-y4+y3-y1) << endl;
    return 0;
}


