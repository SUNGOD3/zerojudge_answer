#include <iostream>
#include <map> 
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	string a;
	int n;
	cin >> n;
	map < string , int > ans;
	while(n--){
		cin >> a;
		string tmp;
		for(int i=0,al=a.length();i<al;++i){
			if(a[i]>='A'&&a[i]<='C')
				tmp+='2';
			else if(a[i]>='D'&&a[i]<='F')
				tmp+='3';
			else if(a[i]>='G'&&a[i]<='I')
				tmp+='4';
			else if(a[i]>='J'&&a[i]<='L')
				tmp+='5';
			else if(a[i]>='M'&&a[i]<='O')
				tmp+='6';
			else if(a[i]>='P'&&a[i]<='S'&&a[i]!='Q')
				tmp+='7';
			else if(a[i]>='T'&&a[i]<='V')
				tmp+='8';
			else if(a[i]>='W'&&a[i]<='Y')
				tmp+='9';
			else if(a[i]>='0'&&a[i]<='9')
				tmp+=a[i];
		}
		++ans[tmp];
	}
	bool bb=0;
	for(auto it=ans.begin();it!=ans.end();++it){
		if(it->second>1){
			bb=1;
			string tmp=it->first;
			for(int i=0;i<3;++i)
				cout << tmp[i];
			cout << "-";
			for(int i=3;i<7;++i)
				cout << tmp[i];
			cout << " " << it->second << "\n"; 
		}
	}
	if(bb==0){
		cout << "No duplicates.\n";
	}
}
