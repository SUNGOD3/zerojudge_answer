#include <iostream>
using namespace std;
inline void sp(int x,char z){
	while(x--)cout << z;
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int s;
	string a;
	while(cin >> s >> a){
		if(s==0)break;
		int al=a.length();
		for(int i=0;i<al;++i){
			if(a[i]=='1'||a[i]=='4')sp(s+2,' ');
			else{
				cout << " ";
				sp(s,'-');
				cout << " ";
			}
			if(i!=al-1)cout << " ";
		}
		cout << "\n";
		int sss=s;
		while(sss--){
			for(int i=0;i<al;++i){
				if(a[i]=='0'||a[i]=='4'||a[i]=='8'||a[i]=='9'){
					cout << "|";
					sp(s,' ');
					cout << "|";
				}
				else if(a[i]=='5'||a[i]=='6'){
					cout << "|";
					sp(s+1,' ');
				}
				else{
					sp(s+1,' ');
					cout << "|";
				}
				if(i!=al-1)cout << " ";
			}
			cout << "\n";
		}
		for(int i=0;i<al;++i){
			if(a[i]=='0'||a[i]=='1'||a[i]=='7')
				sp(s+2,' ');
			else{
				cout << " ";
				sp(s,'-');
				cout << " ";
			}
			if(i!=al-1)cout << " ";
		}
		cout << "\n";
		sss=s;
		while(sss--){
			for(int i=0;i<al;++i){
				if(a[i]=='0'||a[i]=='6'||a[i]=='8'){
					cout << "|";
					sp(s,' ');
					cout << "|";
				}
				else if(a[i]=='2'){
					cout << "|";
					sp(s+1,' ');
				}
				else{
					sp(s+1,' ');
					cout << "|";
				}
				if(i!=al-1)cout << " ";
			}
			cout << "\n";
		}
		for(int i=0;i<al;++i){
			if(a[i]=='1'||a[i]=='4'||a[i]=='7')sp(s+2,' ');
			else{
				cout << " ";
				sp(s,'-');
				cout << " ";
			}
			if(i!=al-1)cout << " ";
		}
		cout << "\n\n";
	}
} 
