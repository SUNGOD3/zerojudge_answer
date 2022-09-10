#include <iostream>
using namespace std;
int tmp[100],count;
string a,n;
void simpfy(){
	int al=a.length(),nl=n.length(),ait=0,nit=0;
	string ta,tn;
	for(int i=0;i<al;++i,++ait)
		if(a[i]>'0'&&a[i]<='9')break;
	if(ait==al)a="0";
	else{
		for(int i=ait;i<al;++i)
			ta+=a[i];
		a=ta;
	}
	for(int i=0;i<nl;++i,++nit)
		if(n[i]>'0'&&n[i]<='9')break;
	if(nit==nl)n="0";
	else{
		for(int i=nit;i<nl;++i)
			tn+=n[i];
		n=tn;
	}
}
string mul(string a,string b){
	int al=a.length(),bl=b.length(),cal=al+bl;
	for(int i=0;i<100;++i)tmp[i]=0;
	for(int i=al-1,it=0;i>=0;--i,++it)
		if(a[i]!='0')
			for(int j=bl-1,it2=it;j>=0;--j,++it2)
				tmp[it2]+=(a[i]-'0')*(b[j]-'0');
	int tl=0;
	for(int i=0;i<100;++i){
		if(tmp[i])tl=i;
		else if(tmp[i]==0&&i>=cal) break;
		if(tmp[i]>=10){
			tmp[i+1]+=tmp[i]/10;
			tmp[i]%=10;
		}
	}
	string rt;
	for(int i=tl;i>=0;--i)rt+=tmp[i]+'0'; 
	return rt;
}
string div2(string b){
	if(b=="1"||b=="0")return "0";
	int buf=0,bl=b.length();
	string rt2,rt;
	for(int i=0;i<bl;++i){
		rt2+=(b[i]-'0'+buf*10)/2+'0';
		buf=(b[i])%2;
	}
	if(rt2[0]=='0')
		for(int i=1;i<bl;++i)
			rt+=rt2[i];
	else
		rt=rt2;
	return rt;
}
string bigmod(string base,string t){
	if(base=="0"||base=="1")return base;
	if(t=="0")return "1";
	if(t=="1")return base;
	string tmp2=div2(t);
	string tmp3=bigmod(base,tmp2);
	if(t[t.length()-1]%2)return mul(mul(tmp3,tmp3),base);
	return mul(tmp3,tmp3);
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> a >> n){
		if(a=="0"&&n=="0")break;
		int ff=0;
		if(a[0]=='-')ff=1;
		simpfy();
		string ans=bigmod(a,n);
		if(ff&&n[n.length()-1]%2&&ans!="0")cout << '-';
		cout << ans << "\n";
	}
	while(getline(cin,a)){
		++count;
	}
	cout << "All Over. Exceeded " << count-1 << " lines!";
}
