#include <iostream>
#include <string>
using namespace std;
int main(){
	int a,i=1;
	string b;
	while(cin >> a){
		int ans=0;
		while(a--){
		cin >> b;
		if(b.length()==1)continue;
		int c[26]={0},chat=0;
		bool t=0;
		for(int i=b.length()-1;i>=0;i--)
			c[b[i]-97]++;
		for(int i=0;i<26;i++)
			if(c[i]!=0)
				chat++;
		if(chat==1)continue;	
		for(int i=0;i<26&&t==0;i++)
			for(int j=i+1;j<26&&t==0;j++)
				if(c[i]==c[j]&&c[i]!=0)
					t=1;
		if(t==0)ans++;
		}
		cout << "Case " << i << ": " << ans << "\n";
		i++;
	}
} 
