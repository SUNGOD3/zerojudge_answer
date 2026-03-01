#include <iostream>
using namespace std;
int a[105],n,s,ma,mat,mi=1001,mit;
int main(){
	cin.tie(0); ios::sync_with_stdio(0);
	cin >> n;
	for(int i=0;i<n;++i){
		cin >> a[i];
		if(a[i]>ma){
			ma=a[i];
			mat=i;
		}
		if(a[i]<mi){
			mi=a[i];
			mit=i;
		}
		s+=a[i];
	}
	s/=n;
	//cout << s << " " << ma << " " << mat << " " << mi << " " << mit << "\n"; 
	ma-=s;
	a[mat]-=ma;
	a[mit]+=ma;
	for(int i=0;i<n;++i){
		cout << a[i] << " ";
	}
}
