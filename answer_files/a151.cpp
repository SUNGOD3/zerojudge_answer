#include <iostream>
using namespace std;
long long int bs(long long int min,long long int max,long long int n){
	long long int all=0,sum=n,m=(min+max)/2;
	if(max<min)
		return m;
	for(;n>m&&n>9;){
		n-=m;
		all+=m;
		n-=n/10;
	}
	all+=n;
	if(all*2>=sum)
		return bs(min,m-1,sum);
	return bs(m+1,max,sum);
}
int main(){
	long long int n;
	while(cin >> n)
		cout <<	bs(1,n/2,n)+1 << "\n";
} 
