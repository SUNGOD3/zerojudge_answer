#include <iostream>
using namespace std;
int a[31][2],n;
int main(){
	cin >> n;
	for(int i=0;i<n;++i)
		cin >> a[i][0];
	for(int i=0;i<n;++i)
		cin >> a[i][1];
	int l=-1,r=-1;
	for(int i=0;i<n;++i){
		if(a[i][0]==-1){
			l=r;
			r=i;
			if(l!=-1&&r!=-1&&r-l>2){
				int ma=-101,mait,mi=101,mit;
				for(int j=l+1;j<r;++j){
					if(a[j][0]>ma){
						ma=a[j][0];
						mait=j;
					}
					if(a[j][0]<mi){
						mi=a[j][0];
						mit=j;
					}
				}
				swap(a[mait][0],a[mit][0]);
				swap(a[mait][1],a[mit][1]);
			}
		}
	}
	for(int i=0;i<n;++i)
		cout << a[i][1] << " ";
} 
