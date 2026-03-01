#include <iostream>
#include <map>
using namespace std;
int n;
long long int arr[201];
int main() {
	while(cin >> n){
		long long int ans=0;
		for(int i=0;i<n;++i)
			cin >> arr[i];
		map <long long int,long long int> left;
		for(int a=0;a<n;++a)
			for(int b=0;b<n;++b)
				for(int c=0;c<n;++c)
					++left[arr[a]*arr[b]+arr[c]];
		for(int d=0;d<n;++d)
			if(arr[d])
				for(int e=0;e<n;++e)
					for(int f=0;f<n;++f)
						ans+=left[arr[d]*(arr[e]+arr[f])];
		cout << ans << "\n";
	}
}
