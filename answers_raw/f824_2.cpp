//utf-8
#include <iostream>
using namespace std;
string k = "一二三四五六七八九十有又";
string tans[21]={"零","一","二","三","四","五","六","七","八","九","十","十一","十二","十三","十四","十五","十六","十七","十八","十九","二十"};
int mp[12][3];
int main(){
	string a;
	for(int i=0;i<12;++i){
		mp[i][0]=k[i*3];
		mp[i][1]=k[i*3+1];
		mp[i][2]=k[i*3+2];
	}
	while(cin >> a){
		int ans=0,s=0;
		for(int j=0;j<10;++j){
			if(a[0]==mp[j][0]&&a[1]==mp[j][1]&&a[2]==mp[j][2]){
				ans+=j+1;
				break;
			}
		}
		for(int j=10;j<12;++j){
			if(a[3]==mp[j][0]&&a[4]==mp[j][1]&&a[5]==mp[j][2]){
				s=1;
				break;
			}
		}
		for(int j=0;j<10;++j){
			if(a[6]==mp[j][0]&&a[7]==mp[j][1]&&a[8]==mp[j][2]){
				ans+=j+1;
				break;
			}
		}
		if(s){
			cout << tans[ans] << "\n";
		}
		else{
			cout << "謬\n";
		}
	}
} 
