#include <iostream>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	string a;
	while(getline(cin,a)){
		int al=a.length();
		string tmp;
		for(int i=0;i<al;++i){
			if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
				tmp+=a[i];
			else{
				if(tmp[0]=='A'||tmp[0]=='E'||tmp[0]=='I'||tmp[0]=='O'||tmp[0]=='U'||tmp[0]=='a'||tmp[0]=='e'||tmp[0]=='i'||tmp[0]=='o'||tmp[0]=='u'){
					tmp+="ay";
					int tmpl=tmp.length();
					for(int i=0;i<tmpl;++i)
						cout << tmp[i];
				}
				else if((tmp[0]>='a'&&tmp[0]<='z')||(tmp[0]>='A'&&tmp[0]<='Z')){
					tmp+=tmp[0];
					tmp+="ay";
					int tmpl=tmp.length();
					for(int i=1;i<tmpl;++i)
						cout << tmp[i];
				}
				cout << a[i];
				tmp.clear();
			}
		}
		if(tmp[0]=='A'||tmp[0]=='E'||tmp[0]=='I'||tmp[0]=='O'||tmp[0]=='U'||tmp[0]=='a'||tmp[0]=='e'||tmp[0]=='i'||tmp[0]=='o'||tmp[0]=='u'){
			tmp+="ay";
			int tmpl=tmp.length();
			for(int i=0;i<tmpl;++i)
				cout << tmp[i];
		}
		else if((tmp[0]>='a'&&tmp[0]<='z')||(tmp[0]>='A'&&tmp[0]<='Z')){
			tmp+=tmp[0];
			tmp+="ay";
			int tmpl=tmp.length();
			for(int i=1;i<tmpl;++i)
				cout << tmp[i];
		}
		cout << "\n";
	}
} 
