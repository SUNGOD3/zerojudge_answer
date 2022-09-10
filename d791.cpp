#include <iostream>
using namespace std;
int a[21701];
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int p,e,iq,d,ca=0;
	while(cin >> p >> e >> iq >> d){
		if(p<0)break;
		int it=0;
		for(int i=0;i<=21700;++i)
			a[i]=0; 
		for(int i=p;i<=21700;i+=23)
			++a[i];
		for(int i=p-23;i>=0;i-=23)
			++a[i];
		for(int i=e;i<=21700;i+=28)
			++a[i];
		for(int i=e-28;i>=0;i-=28)
			++a[i];
		for(int i=iq;i<=21700;i+=33)
			++a[i];
		for(int i=iq-33;i>=0;i-=33)
			++a[i];
		for(int i=d+1;i<=21700;++i){
			if(a[i]==3){
				cout << "Case " << ++ca << ": the next triple peak occurs in " << i-d << " days.\n";
				break;
			}
		}
	}
} 
