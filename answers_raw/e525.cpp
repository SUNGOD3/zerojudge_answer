#include <iostream>
#include <algorithm>
using namespace std;
int t,m[13]={0,31,28,31,30,31,30,31,31,30,31,30,31},it,ss;
string s,ans[101];
bool judge(string s){
	for(int i=0,sl=s.length();i<sl;++i){
		if(s[i]!=s[sl-i-1])return 0;
	}
	return 1;
} 
bool cmp(string x,string y){
	int xx=0,yy=0;
	for(int i=0;i<x.length();++i){
		xx*=10;
		xx+=x[i]-'0';
	}
	for(int j=0;j<y.length();++j){
		yy*=10;
		yy+=y[j]-'0';
	}
	if(xx>yy)return 0;
	return 1;
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> t;
	while(t--){
		cin >> s;
		ss=0;
		for(int i=0;i<4;++i){
			ss*=10;
			ss+=s[i];
		}
		it=0;
		if((ss%4==0&&ss%100)||ss%400==0)m[2]=29;
		else m[2]=28;
		for(int i=1;i<=12;++i){
			for(int j=1;j<=m[i];++j){
				string tmp=s;
				if(i<10&&j<10){
					string tmp2=tmp;
					tmp2+=(i%10+'0');
					tmp2+=(j%10+'0');
					if(judge(tmp2)){
						//cout << i << " " << j << "\n";
						ans[it]=tmp2;
						++it;
					}	
				}
				if(i<10){
					string tmp2=tmp;
					tmp2+=(i%10+'0');
					tmp2+=(j/10+'0');
					tmp2+=(j%10+'0');
					if(judge(tmp2)){
						//cout << i << " " << j << "\n";
						ans[it]=tmp2;
						++it;
					}
				}
				if(j<10){
					string tmp2=tmp;
					tmp2+=(i/10+'0');
					tmp2+=(i%10+'0');
					tmp2+=(j%10+'0');
					if(judge(tmp2)){
						//cout << i << " " << j << "\n";
						ans[it]=tmp2;
						++it;
					}
				}
				tmp+=(i/10+'0');
				tmp+=(i%10+'0');
				tmp+=(j/10+'0');
				tmp+=(j%10+'0');
				if(judge(tmp)){ 
					//cout << i << " " << j << "\n";
					ans[it]=tmp;
					++it;
				}
			}
		}
		sort(ans,ans+it,cmp);
		cout << it << " ";
		for(int i=0;i<it;++i){
			cout << ans[i] << " ";
		}
		cout << "\n";
	}
} 
