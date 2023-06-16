#include <bits/stdc++.h>
using namespace std;
int n,ct;
map <string,int> mp;
string s;
int main(){
	cin.tie(0); ios::sync_with_stdio(0);
	for(int i=0;i<27;++i)
		for(int j=(i==0?0:i+1);j<27;++j)
			for(int k=(j==0?0:j+1);k<27;++k)
				for(int l=(k==0?0:k+1);l<27;++l)
					for(int m=(l==0?0:l+1);m<27;++m){
						string tmp;
						if(i)tmp+='a'+i-1;
						if(j)tmp+='a'+j-1;
						if(k)tmp+='a'+k-1;
						if(l)tmp+='a'+l-1;
						if(m)tmp+='a'+m-1;			
						mp[tmp]=ct++;
					}
	while(cin >> s){
		if(mp.find(s)==mp.end()){
			cout << "0\n";
			continue;
		}
		cout << mp[s] << "\n";
	}
}
