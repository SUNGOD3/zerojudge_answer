#include <iostream>
using namespace std;
int p[3513],it=0,ans[33000];
bool prime[33000]={1,1};
int main() {
    for(int i=2;i<=182;++i)
        if(!prime[i])
            for(int j=i+i;j<32768;j+=i)
                prime[j]=1;
    for(int i=2;i<32768;++i)
    	if(!prime[i]){
    		p[it]=i;
    		++it;
		}
	for(int i=0;i<it;++i)
		for(int j=i;j<it;++j){
			int k=p[i]+p[j];
			if(k<32768)
				++ans[k];
		}
    int n;
    while (cin >> n){
        if (n==0)break;
        cout << ans[n] << "\n";
    }
    return 0;
}
