#include <iostream>
#include <algorithm>
using namespace std;
struct grade{
	int NO;
	int ch;
	int ma;
	int ec;
};
bool cmp(grade a,grade b){
	if(a.ch+a.ec+a.ma>b.ch+b.ec+b.ma)
		return 1;
	else if(a.ch+a.ec+a.ma==b.ch+b.ec+b.ma){
		if(a.ch>b.ch)
			return 1;
		else if(a.ch==b.ch&&a.NO<b.NO)
			return 1;
	}
	return 0;
}
int main(){
	int a;
	while(cin >> a){
		grade b[a];
		for(int i=0;i<a;i++){
			cin >> b[i].ch >> b[i].ec >> b[i].ma;
			b[i].NO=i+1;
		}
		sort(b,b+a,cmp);
		for(int i=0;i<5;i++)
			cout << b[i].NO <<" " <<b[i].ch+b[i].ec+b[i].ma<< "\n";
	}
}
