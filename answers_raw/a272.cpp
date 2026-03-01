#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	ios::sync_with_stdio(0);cin.tie(0);
	int s[20017],n;
	s[1]=1;
	s[2]=2;
	for(int i=3;i<20017;i++){
		s[i]=s[i-1]+s[i-2];
		s[i]%=10007;
	}
	while(cin>>n)
        cout<<s[n%20016]<<"\n"; 
    return 0; 
}
