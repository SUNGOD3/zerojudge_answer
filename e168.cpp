#include <iostream>
using namespace std;
int ac;
string cut(string p){
	string rt;
	if(p.length()<=2){
		ac=0;
		return "";
	}
	for(int i=1;i<p.length()-1;++i){
		rt+=p[i];
	}
	return rt;
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	string t;
	int n;
	cin >> n;
	while(n--){
		cin >> t;
		ac=1;
		int a,b,c,it,arr[101]={0};
		string ans,tmp;
		a=b=c=it=0;
		for(int i=0;i<t.length()&&ac;++i){
			if(t[i]=='('){
				++a;
				arr[it++]=1;
			}
			else if(t[i]=='['){
				++b;
				arr[it++]=2;
			}
			else if(t[i]=='{'){
				++c;
				arr[it++]=3;
			}
			else if(t[i]==')'){
				if(--a<0||--it<0||arr[it]!=1)
					ac=0;
			}
			else if(t[i]==']'){
				if(--b<0||--it<0||arr[it]!=2)
					ac=0;
			}
			else if(t[i]=='}'){
				if(--c<0||--it<0||arr[it]!=3)
					ac=0;
			}
			tmp+=t[i];
			if(a==0&&b==0&c==0){
				ans+=cut(tmp);
				tmp.clear();
			}
		}
		if(a||b||c||ans.length()==0){
			ac=0;
			ans+=cut(tmp);
			tmp.clear();
		}
		if(ac==0)
			cout << "Product Broken!!\n";
		else
			cout << ans << "\n";
	}
} 
