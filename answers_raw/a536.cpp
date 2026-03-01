#include <iostream>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
    int t,e,f,c,sum;
    while(cin>>t){
        for(int i=0;i<t;i++){
            cin>>e>>f>>c;
            sum=0;
            e += f;
            while(e/c){
                sum += e/c;
                e =e/c+e%c;
            }
            cout<<sum<<'\n';
        }
    }
}
