#include <iostream>
#include <map>
using namespace std;
bool jg(string k){
	int kl=k.length();
	if(kl!=10||(k[1]!='1'&&k[1]!='2'))return 0;
	int num=0;
	if(k[0]>='A'&&k[0]<='H')
		num+=k[0]-'A'+10;
	else if(k[0]=='I')
		num+=34;
	else if(k[0]>='J'&&k[0]<='N')
		num+=k[0]-'A'+9;
	else if(k[0]=='O')
		num+=35;
	else if(k[0]>='P'&&k[0]<='V')
		num+=k[0]-'A'+8;
	else if(k[0]=='W')
		num+=32;
	else if(k[0]=='Z')
		num+=33;
	else
		num+=k[0]-'A'+7;
	num=num/10+num%10*9;
	for(int i=1;i<kl;++i)
		num+=(k[i]-'0')*(9-i);
	num+=k[9]-'0';
	if(num%10)
		return 0;
	return 1;
}
int main(){
	int n;
	while(cin >> n){
		int ans[3]={0};
		map <string,int> dc;
		string k;
		while(n--){
			cin >> k;
			if(jg(k)){
				if(dc[k])
					++ans[1];
				else{
					dc[k]=1;
					++ans[0];
				}
			}
			else
				++ans[2];
		}
		cout << ans[0] << "," << ans[1] << "," << ans[2] << "\n";
	}
} 
