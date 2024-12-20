#include <iostream>
#include <string>
using namespace std;
int main(){
	std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    string a,b,tem;
    bool p=false;
    cin >> a >> b;
	while(b!="0"){
		if(a.length()<b.length()){
			tem=a;
			a=b;
			b=tem;
		}
		else{
			int k=b.length();
			for(int i=0;i<a.length()-k;i++){
				b.insert(0,"0");
			}
		}
		if(a.length()==b.length()){
			for(int i=0;i<a.length();i++){
				a[i]+=b[i]-48;
			}
			cin >> b;
			for(int i=1;i<a.length();i++){
				for(int j=1;j<a.length();j++){
					if(a[j]>=58){
						a[j-1]++;
						a[j]-=10;
					}
				}
			}
			if(a[0]>=58){
				p=true;
				a[0]-=10;
			}
			if(p==true){
				a.insert(0,"1");
				p=false;
			}
		}
	}
	cout << a << endl;
}
 
