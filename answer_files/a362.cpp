#include <iostream>
#include <algorithm>
using namespace std;
struct a{
	int no;
	int h;
	int w;
};
bool cmp(a x,a y){
	return x.h < y.h || ((x.h==y.h)&&(x.w<=y.w));
}
int main(){
	int n;
	while(cin >> n){
		a b[n];
		for(int i=0;i<n;i++){
			b[i].no=i;
			cin >> b[i].h >> b[i].w;
		}
		for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                if(!cmp(b[j], b[j+1]))
                    swap(b[j], b[j+1]);
            }
        }
		int ans=0;
		for(int i=0;i<n;i++)
			ans+=abs(b[i].no-i);
		cout << ans << "\n";
	}
} 
