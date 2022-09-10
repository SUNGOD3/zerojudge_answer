#include <iostream>
#include <algorithm>
using namespace std;
string x="1",y="1",ba="1";
int n;
string add(string a,string b){
	int tmp[701]={0},al=a.length(),bl=b.length();
	string c;
	for(int i=0;i<al;++i)tmp[al-i-1]+=a[i]-48;
	for(int i=0;i<bl;++i)tmp[bl-i-1]+=b[i]-48;
	for(int i=0;i<bl+1;++i){
		if(tmp[i]>9){
			++tmp[i+1];
			tmp[i]-=10;
		}
	}
	for(int i=al+1;i>=0;--i)
		if(tmp[i]){
			al=i;
			break;
		}
	for(int i=al;i>=0;--i)c+=tmp[i]+'0';
	return c;
}
string tos(int v){
	string a;
	while(v){
		a+=v%10+'0';
		v/=10;
	}
	reverse(a.begin(),a.end());
	return a;
}
int main(){
	cin >> n;
	while(n-->1){
		y=add(x,ba);
		ba=add(ba,ba);
		x=add(x,y);
	}
	cout << x;
} 
