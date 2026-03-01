#include <iostream>
using namespace std;
int main(){
	string a,b;
	cin >> a;
	while(cin >> a){
		cin >> b;
		int al=a.length(),bl=b.length(),an[al+bl];
		bool f=0,big=0;
		if((a[0]=='-'&&b[0]!='-')||(al>bl&&a[0]=='-'&&b[0]=='-'))big=1;
		if(al==bl&&a[0]=='-'&&b[0]=='-')
			for(int i=0;i<al;++i){
				if(a[i]>b[i])big=1;
				if(a[i]!=b[i])break;
			}
		if(bl==al&&a[0]!='-'&&b[0]!='-')
			for(int i=0;i<al;++i){
				if(a[i]<b[i])big=1;
				if(a[i]!=b[i])break;
			}
		if((bl>al&&a[0]!='-'&&b[0]!='-')||big==1){
			al^=bl;bl^=al;al^=bl;
			string tmp;
			tmp=a;a=b;b=tmp;
			f=1;
		}
		for(int i=al+bl-1;i>=0;--i)an[i]=0;
		if(a[0]=='-')
			for(int i=1;i<al;++i)
				an[i-1]-=(a[al-i]-'0');
		else
			for(int i=0;i<al;++i)
				an[i]=(a[al-i-1]-'0');
		if(b[0]=='-')
			for(int i=1;i<bl;++i)
				an[i-1]+=(b[bl-i]-'0');
		else
			for(int i=0;i<bl;++i)
				an[i]-=(b[bl-i-1]-'0');
		for(int i=0;i<al+bl;++i){
			if(an[i]<0){
				an[i+1]--;
				an[i]+=10;
			}
			else if(an[i]>9){
				an[i+1]++;
				an[i]-=10;
			}
		}
		if(f==1)cout << '-';
		int start=0;
		for(int i=al+bl-1;i>=0;--i)
			if(an[i]!=0){
				start=i;
				break;
			}
		for(int i=start;i>=0;--i)
			cout << an[i];
		cout << "\n";
	}
}
