#include <iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	string a;
	getline(cin,a);
	while(t--){
		getline(cin,a);
		a+=' ';
		int al=a.length(),d=0,total=0,tmp=0,fd[1001]={0},it=0,mi=99999999,ma=-99999999;
		bool f=0;
		for(int i=0;i<al;++i){
			if(a[i]==' '){
				total+=tmp;
				if(f==0){
					for(int j=0;j<it;++j){
						if(fd[j]==tmp){
							f=1;
							d=tmp;
							break;
						}
					}
					fd[it]=tmp;
				}
				++it;
				ma=max(ma,tmp);
				mi=min(mi,tmp);
				tmp=0;
			}
			else{
				tmp*=10;
				tmp+=a[i]-48;
			}
		}
		int sum=(ma+mi)*it/2;
		cout << sum-total+d << " " << d << "\n";
	}
} 
