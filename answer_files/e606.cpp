#include <iostream>
#include <algorithm>
using namespace std; 
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int n;
	while(cin >> n){
		int a[n];
		for(int i=0;i<n;i++)
			cin >> a[i];
		sort(a,a+n);
		if(n&1){
			int mid=a[n/2],t=0;
			cout << mid << " ";
			for(int i=0;i<n;i++)
				if(a[i]==mid)
					t++;
			cout << t << " 1\n";
		}
		else{
			int mid1=a[n/2],mid2=a[n/2-1],t=0;
			cout << mid2 << " ";
			for(int i=0;i<n;i++)
				if(a[i]==mid1||a[i]==mid2)
					t++;
			cout << t << " " << mid1-mid2+1 << "\n";
		}
	}
}
