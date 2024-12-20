#include <iostream>
using namespace std;
int a[10000];
int s[10000];
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int N,M;
	while(cin >> N >> M){
		int max=0;
		for(int i=0;i<N;i++){
			cin >> a[i];
			s[i]=0;
		}
		for(int i=0;i<N;i++){
			for(int j=0;j<M;j++)
				(i+j>=N)?s[i]+=a[i+j-N]:s[i]+=a[i+j];
			if(s[i]>max)
				max=s[i];
		}
		cout << max << '\n';
	} 
} 
