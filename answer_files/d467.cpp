#include <iostream>
#include <map>
using namespace std;
int n,i,k,tmp[60021];
map <string,string> qk;
map <string,string> qk2;
string a;
string toReString(int b){
	string rt;
	while(b){
		rt+=b%10+48;
		b/=10;
	}
	return rt;
}
string mul(string a,string b){
	string fd = a+"*"+b;
	if(qk.find(fd)!=qk.end())return qk[fd];
	int al=a.length(),bl=b.length(),cal=al+bl;
	for(int i=0;i<=cal;++i)tmp[i]=0;
	for(int i=al-1,it=0;i>=0;--i,++it)
		if(a[i]!='0')
			for(int j=bl-1,it2=it;j>=0;--j,++it2)
				tmp[it2]+=(a[i]-'0')*(b[j]-'0');
	int tl=0;
	for(int i=0;i<60020;++i){
		if(tmp[i])tl=i;
		else if(tmp[i]==0&&i>=cal) break;
		if(tmp[i]>=10){
			tmp[i+1]+=tmp[i]/10;
			tmp[i]%=10;
		}
	}
	string rt;
	for(int i=tl;i>=0;--i)rt+=tmp[i]+'0';
	qk[fd] = qk[b+"*"+a] = rt;
	return rt;
}
string bigmod(string base,int t){
	if(t==0)return "1";
	if(t==1)return base;
	string fd=base+'^'+toReString(t);
	if(qk2.find(fd)!=qk2.end())return qk2[fd];
	string fd2=base+'^'+toReString(t/2);
	string tmp2 = bigmod(base,t/2);
	qk2[fd2]=tmp2;
	string ans;
	if(t%2){
		qk2[fd] = ans = mul(mul(tmp2,tmp2),base);
	}
	else{
		qk2[fd] = ans = mul(tmp2,tmp2);
	}
	return ans;
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> a >> n >> i >> k){
		string ans=bigmod(a,n);
		--i;
		k=min(i+k,(int)ans.length());
		for(;i<k;++i)cout << ans[i];
		cout << "\n";
	}
	puts("From tomcat6 Fri Mar 15 09:53:56 2013\nTo: world\"\nSubject: \"Hello");
}
