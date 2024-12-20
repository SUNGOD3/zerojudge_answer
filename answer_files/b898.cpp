#include <iostream>
#include <string>
using namespace std;
int main(){
	std::ios::sync_with_stdio(false);
    cin.tie(NULL);
	string a,b,c;
	int n=0;
	while(cin >> n){
		while(n>0){
			n--;
			cin >> a >> b >> c;
			if(a.length()>b.length()&&a.length()>c.length())
				cout << a << endl;
			else if(b.length()>a.length()&&b.length()>c.length())
				cout << b << endl;
			else if(c.length()>a.length()&&c.length()>b.length())
				cout << c << endl;	
			else{
				if(a.length()==b.length()&&b.length()==c.length()&&a.length()==c.length()){	
					for(int i=0;i<a.length();i++){
							if(a[i]>c[i]&&a[i]>b[i]){
								cout << a << endl;
								break;
							}
							else if(b[i]>c[i]&&b[i]>a[i]){
								cout << b << endl;
								break; 
							}
							else if(a[i]<c[i]&&c[i]>b[i]){
								cout << c << endl;
								break;
							}
					}
				}
				else{
					if(a.length()==b.length()){
						for(int i=0;i<a.length();i++){
							if(a[i]>b[i]){
								cout << a << endl;
								break;
							}
							else if(a[i]<b[i]){
								cout << b << endl;
								break;
							}
						}
					}
					else if(b.length()==c.length()){
						for(int i=0;i<b.length();i++){
							if(b[i]>c[i]){
								cout << b << endl;
								break;
							}
							else if(b[i]<c[i]){
								cout << c << endl;
								break;
							}
						}
					}
					else if(a.length()==c.length()){
						for(int i=0;i<a.length();i++){
							if(a[i]>c[i]){
								cout << a << endl;
								break;
							}
							else if(a[i]<c[i]){
								cout << c << endl;
								break;
							}
						}
					}
				}
			}
		}
	}
} 
