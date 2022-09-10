#include <iostream>
using namespace std;
int main(){
	string a,b;
	int t;
	while(cin>>a>>b>>t){
		a=' '+a;
		b=' '+b;
		int al=a.length(),bl=b.length(),lcs[al][bl];
		for(int i=0;i<al;++i)
			for(int j=0;j<bl;++j)
				lcs[i][j]=0;
		for(int i=1;i<al;++i){
			for(int j=1;j<bl;++j){
				if(a[i]==b[j])
					lcs[i][j]=lcs[i-1][j-1]+1;
				else
					lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);
			}
		}
		if(lcs[al-1][bl-1]>=t)
			cout << "kwa nini unaendesha\n";
		else
			cout << "sitini na tisa\n";
	}
} 
