#include <iostream>
using namespace std;
int main(){
	int n,x;
	while(cin >> n >> x){
		int a[10]={0},num=1;
		for(int i=1;i<=n;i++){
			num=i;
			while(num!=0){
				a[num%10]++;
				num/=10;
			}
		}
		cout << a[x] << "\n";
	}
} 
