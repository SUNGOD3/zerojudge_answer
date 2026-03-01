#include <iostream>
using namespace std;
int main(){
	int n,x,y,c=0;
	string a;
	while(cin >> a){
		cout << "Case " << ++c << ":\n";
		cin >> n;
		while(n--){
			cin >> x >> y;
			if(x>y){
				x^=y;
				y^=x;
				x^=y;
			}
			bool ans=a[x]-'0',flag=0;
			for(int i=x;i<=y;++i)
				if(a[i]-'0'!=ans){
					flag=1;
					break;
				}
			(flag)?cout << "No\n":cout << "Yes\n";
		}
	}
} 
