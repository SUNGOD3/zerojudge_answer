#include <iostream>
#include <string>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	string k,q;
	cin >> k >> q;
	while(k.length()<q.length()){
		k+=k;
	}
	int ql=q.length();
	bool a[ql];
	for(int i=0;i<ql;i++){
		if(q[i]>='A'&&q[i]<='Z'){
			a[i]=1;
			q[i]+=32;
		}
		else
			a[i]=0;
		if(k[i]>='A'&&k[i]<='Z'){
			k[i]+=32;
		}
	}
	char t;
	for(int i=0;i<ql;i++){
		if(a[i]==1){
			t=(q[i]-k[i]+26)%26+'A';
		}
		else{
			t=(q[i]-k[i]+26)%26+'a';
		}
		cout << t;
	}
} 
