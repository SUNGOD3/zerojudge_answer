#include <iostream>
using namespace std;
string s;
int main(){
	while(getline(cin,s)){
		if(s[0]=='-')break;
		else if(s[0]>='0'){
			s+=' ';
			int tmp=-1,a[51]={0},ans[51]={0},it=0;
			for(int i=0;i<s.length();++i){
				if(s[i]>='0'&&s[i]<='9'){
					if(tmp==-1)tmp=0;
					tmp*=10;
					tmp+=s[i]-'0';
				}
				else{
					if(tmp!=-1){
						a[it]=tmp;
						++it;
						tmp=-1;
					}
				}
			}
			for(int i=0;i<it;++i){
				tmp=a[i];
				for(int j=0;j<it;++j){
					if(ans[j]==0&&tmp==0){
						ans[j]=i+1;
						j=it;
					}
					else if(ans[j]==0){
						--tmp;
					}
				}
			}
			for(int i=0;i<it;++i){
				cout << ans[i] << " ";
			}
			cout << "\n";
		}
	}
} 
