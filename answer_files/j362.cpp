#include <iostream>
using namespace std;
int n,ans,sum;
string s;
int main(){
	cin >> n >> s;
	if(s=="print"){
		for(int i=1;i<=n;++i){
			if(n%i==0)ans+=i,++sum,cout << i << "\n";
		}
		cout << n << "���]�ƪ��ӼƬO" << sum << "�A" << n << "���]�ƪ��`�M�O" << ans;
	}
	else{
		for(int i=2;i<n;++i){
			if(n%i==0)ans+=i,++sum,cout << i << "\n";
		}
		cout << n << "���]�ƪ��ӼƬO" << sum << "�A" << n << "���]�ƪ��`�M�O" << ans;
	}

}
