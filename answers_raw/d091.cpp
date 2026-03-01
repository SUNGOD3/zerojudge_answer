#include <iostream>
using namespace std;
float s[10][4],a,b;
int sit,count;
char in;
int main(){
	while(cin >> in){
		if(in=='*')break;
		else{
			for(int i=0;i<4;++i)
				cin >> s[sit][i];
			++sit;
		}
	}
	while(cin >> a >> b){
		if(a>9999&&a<10000&&b>9999&&b<10000)break;
		bool ans=0;
		++count;
		for(int i=0;i<sit;++i)
			if(a>s[i][0]&&a<s[i][2]&&b>s[i][3]&&b<s[i][1]){
				cout << "Point " << count  << " is contained in figure " << i+1 << "\n"; 
				ans=1;
			}
		if(!ans)
			cout << "Point " << count << " is not contained in any figure\n";
	}
}
