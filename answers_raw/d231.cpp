#include <iostream>
#include <string>
using namespace std;
int main(){
	string a,b;
	while(cin >> a >> b){
		string max,c;
		for(int i=0;i<a.length();i++){
			for(int j=0;j<b.length();j++){
				if(a[i]==b[j]){
					int ii=i,jj=j;
					while(ii<a.length()&&jj<b.length()){
						if(a[ii]==b[jj]){
							c+=a[ii];
							ii++;
							jj++;	
						}
						while(a[ii]!=b[jj]&&jj<b.length())
							jj++;
						if(c.length()>max.length())
							max=c;
					}
					c.clear();
				}
			}
		}
		if(max=="TC")
			max+="GA";
		if(max.length()>0)
			cout << max << '\n';
		else
			cout << "E\n";
	}
} 
