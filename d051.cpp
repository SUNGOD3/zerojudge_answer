#include <iostream>
#include <iomanip>
    using namespace std;
    int f;
    int main(){
    while(cin>>f) cout<<fixed<<setprecision(3)<<(f-32)/1.8<<endl;
    return 0;
}
