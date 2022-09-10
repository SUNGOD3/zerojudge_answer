/*A MAN WITH NUMBER COMPANIONS 
EACH COMPANION HAD NUMBER CONTAINERS 
EACH CONTAINER HAD NUMBER OBJECTS 
EACH OBJECT HAD NUMBER ITEMS 
HOW MANY SOMETHINGS?*/
#include <iostream>
using namespace std;
string word[12] = { "TWO", "THREE", "FOUR", "FIVE", "SIX", "SEVEN", "EIGHT", "NINE", "TEN", "ELEVEN", "TWELVE", "THIRTEEN" },tmp,q[5]={"MAN"};
int ans[5]={1},t;
int main(){
	for(int i=0;i<3;++i)cin >> tmp; 
	cin >> tmp >> q[1];
	for(int i=0;i<12;++i)
		if(word[i]==tmp){
			ans[1]=ans[0]*(i+2);
			break;
		}
	if(ans[1]==0)ans[1]=1;	
	for(int i=0;i<3;++i)cin >> tmp; 
	cin >> tmp >> q[2];
	for(int i=0;i<12;++i)
		if(word[i]==tmp){
			ans[2]=ans[1]*(i+2);
			break;
		}
	if(ans[2]==0)ans[2]=1;	
	for(int i=0;i<3;++i)cin >> tmp; 
	cin >> tmp >> q[3];
	for(int i=0;i<12;++i)
		if(word[i]==tmp){
			ans[3]=ans[2]*(i+2);
			break;
		}
	if(ans[3]==0)ans[3]=1;
	for(int i=0;i<3;++i)cin >> tmp; 
	cin >> tmp >> q[4];
	for(int i=0;i<12;++i)
		if(word[i]==tmp){
			ans[4]=ans[3]*(i+2);
			break;
		}
	if(ans[4]==0)ans[4]=1;
	cin >> tmp >> tmp >> tmp;
	string tt;
	for(int i=0,tl=tmp.length();i<tl-1;++i)
		tt+=tmp[i];
	for(int i=0;i<5;++i)
		if(tt==q[i])
			cout << ans[i] << " " << q[i];
} 
