#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool p[1000001]={1,1};
int ans[1000001];
struct ss{
	string s1,t;
	int v,sum;
};
vector <ss> a;
string input;
bool cmp(ss x,ss y){
	if(x.sum>y.sum||(x.sum==y.sum&&x.t<y.t)||(x.sum==y.sum&&x.t==y.t&&x.v>y.v))return 1;
	return 0;
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	for(int i=2;i<=1000;++i)
		for(int j=i+i;j<=1000000;j+=i)
			p[j]=1;
	for(int i=2;i<=1000000;++i)
		if(p[i]==0)
			for(int j=i;j<=1000000;j+=i)
				ans[j]+=i;
	while(cin >> input){
		ss tmp;
		tmp.s1=input;
		string s2;
		int su=0;
		for(int i=0;i<input.length();++i){
			if(input[i]>='0'&&input[i]<='9'){
				su*=10;
				su+=input[i]-'0';
			}
			else{
				s2+=input[i];
			}
		}
		tmp.v=su;
		tmp.t=s2;
		tmp.sum=ans[su];
		a.push_back(tmp);
	}
	sort(a.begin(),a.end(),cmp);
	for(int i=0;i<a.size();++i)
		cout << a[i].s1 << "\n";
} 
