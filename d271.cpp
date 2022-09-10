#include <iostream>
using namespace std;
unsigned long long n,x,y,z,a[1000005];
unsigned long long mod(unsigned long long xx,unsigned long long yy,unsigned long long mm){
	if(xx==1)return 1;
	if(yy==0)return 1;
	if(yy==1)return xx;
	unsigned long long tmp=mod(xx,yy/2,mm)%mm;
	if(yy%2){
		return (tmp*tmp)%mm*xx%mm;
	}
	else{
		return (tmp*tmp)%mm;
	}
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n;
	for(int ca=0;ca<n;++ca){
		cin >> x >> y >> z;
		if(z==1){
			cout << "0\n";
		}
		else{
			unsigned long long f=1%z,la=0,tmp=0,it=1;
			while(f!=1||la!=0||it==1){
				a[it++]=f;
				tmp=f;
				f+=la;
				la=tmp;
				f%=z;
			}
			--it;
			cout << a[mod(x%it,y,it)] << "\n";	
		}
	}
} 
