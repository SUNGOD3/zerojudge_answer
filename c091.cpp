#include <iostream>
using namespace std;
int count(string x){
	int xt=0;
	for(int i=0,xl=x.length();i<xl;++i)
		if(x[i]=='a'||x[i]=='e'||x[i]=='i'||x[i]=='o'||x[i]=='u'||x[i]=='y')
			if(x[i+1]=='a'||x[i+1]=='e'||x[i+1]=='i'||x[i+1]=='o'||x[i+1]=='u'||x[i+1]=='y'){}
			else
				++xt;
	return xt;
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	string a;
	while(getline(cin,a)){
		if(a=="e/o/i")break;
		int al=a.length(),it=0;
		string x,y,z;
		while(a[it]!='/'){
			x+=a[it];
			++it;
		}
		++it;
		while(a[it]!='/'){
			y+=a[it];
			++it;
		}
		++it;
		while(it<al){
			z+=a[it];
			++it;
		}
		if(count(x)==5)
			if(count(y)==7)
				if(count(z)==5)
					cout << "Y\n"; 
				else
					cout << "3\n";
			else
				cout << "2\n"; 
		else
			cout << "1\n";
	}
} 
