#include <iostream>
#include <algorithm>
using namespace std;
long long int a[50000]={0};
long long int bs (long long int min,long long int max,long long int key,int times){
	long long int m = (min+max)/2;
	if(min>max)
		return m;
	long long int sum=-1,count=0;
	bool chat=1;
	for(int i=0;i<key;i++){
		if(a[i]>sum){
			sum=a[i]+m;
			count++;
		}
		if(count>times){
			chat=0;
			break;
		}
	}
	if(chat==0)
		return bs ( m+1, max, key, times);
	else
		return bs ( min, m-1, key, times);	
}
int main(){
	int N,K;
	while(cin >> N >> K){
		for(int i=0;i<50000;i++)
			a[i]=0;
		for(int i=0;i<N;i++)
			cin >> a[i];
		sort(a,a+N);
		long long int max=a[N-1]-a[0];
		cout << bs(1,max,N,K)+1 << '\n';
	}
} 
