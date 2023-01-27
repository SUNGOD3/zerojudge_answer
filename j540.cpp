#include <iostream>
using namespace std;
int p;
string s,w;
int main(){
	cin.tie(0);cout.tie(0); ios::sync_with_stdio(0);
	cin >> s >> p;
	for(int ca=1;ca<=p;++ca){
		for(int ct=0,flag=0;cin >> w;cout << "\n"){
			if(w=="#")break;
			if(flag)continue;
			if(w.size()>5){
				cout << "Too long";
				continue;
			}
			else if(w.size()<5){
				cout << "Not enough letters";
				continue;
			}
			else{
				++ct;
				string t=s,ans="55555";
				int cot=0;
				for(int i=0;i<5;++i)
					if(t[i]==w[i]){
						++cot;
						ans[i]='O';
						t[i]=' ';
					}	
				for(int i=0;i<5;++i){
					if(ans[i]=='O')continue;
					bool has=0;
					for(int j=0;j<5&&!has;++j)
						if(w[i]==t[j]){
							ans[i]='Y';
							t[j]=' ';
							has=1;
						}
					if(has==0)
						ans[i]='X';
				}
				cout << ans;
				if(cot==5){
					cout << "\nCongradulat1ons ! You guessed " << ct << " times";
					flag=1;
				}
			}
		}
		cout << "\n";
	} 
} 
