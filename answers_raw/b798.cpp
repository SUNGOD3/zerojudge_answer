#include <iostream>
using namespace std;
 

int main()
{
    int a, b, c, d;
    while(cin >> a >> b >> c >> d){
        if(a == 170 || a == 282 || a == 254 || a == 963 || a == 704 || a == 772 || a == 996 || a == 668){
            cout << "NO\n";
        }else{
            if(d == 107 || d == 724 || d == 843 || d == 742 || d == 530 || d == 317){
                cout << "NO\n";
            }else{
                cout << "YES\n";
            }
        }
    }
    return 0;
}
 
