#include <iostream>
#include <map>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	string a;
	while(cin >> a){
		map <string,int> ans;
		int al=a.length(),ac=0;
		for(int i=0;i<al;++i){
			for(int j=i;j<al;++j){
				string tmp;
				for(int k=i;k<=j;++k)
					tmp+=a[k];
				bool chat=0;
				int tl=j-i+1;
				for(int k=0;k<tl;++k)
					if(tmp[k]!=tmp[tl-k-1])
						chat=1;
				if(chat)continue;
				++ans[tmp];
				if(ans[tmp]==1)
					++ac;
			}
		}
		cout << "The string '" << a << "' contains " << ac << " palindromes.\n";
	}
} 
