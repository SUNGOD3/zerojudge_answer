#include <iostream>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int n,m;
	string eng=" mjqhofawcpnsexdkvgtzblryui",num=" uzrmatifxopnhwvbslekycqjgd",chat;
	cin >> n;
	while(n--){
		cin >> m;
		--m;
		cin >> chat;
		if(chat[0]<'a'){
			int q=0;
			if(chat.length()==2)
				q=(chat[0]-'0')*10+chat[1]-'0';
			else
				q=(chat[0]-'0');
			cout << eng[q];
			while(m--){
				cin >> q;
				cout << eng[q];
			}
		}
		else{
			char q=chat[0];
			int ans=0;
			for(int i=1;i<=26;++i){
				if(num[i]==q){
					ans+=i;
					break;
				}
			}
			while(m--){
				cin >> q;
				for(int i=1;i<=26;++i){
					if(num[i]==q){
						ans+=i;
						break;
					}
				}
			}
			cout << ans ;
		}
		cout << "\n";
	}
} 
