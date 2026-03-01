#include <iostream>
using namespace std;
long long int a;
long long int bs(long long int l,long long int r){
	long long int m=(l+r)/2,mm=((1+m)*m)/2;
	if(mm==a)return m;
	if(l>r)return l;
	if(mm>a)
		bs(l,m-1);
	else
		bs(m+1,r);
}
int main(){
	while(cin >> a){
		if(a<0)a*=-1;
		long long int fd=bs(0,a);
		while(((fd*(fd+1)/2)-a)%2)
			++fd;
		cout << fd << "\n"; 
	}
} 
