#include <iostream>
using namespace std;
char m[100][100];
int ans[26];
void fps(int x,int y,int a,int b,char t){
	m[x][y]='0';
	if(x+1<a&&m[x+1][y]==t){
		fps(x+1,y,a,b,m[x+1][y]);
	}
	if(x-1>=0&&m[x-1][y]==t){
		fps(x-1,y,a,b,m[x-1][y]);
	}
	if(y+1<b&&m[x][y+1]==t){
		fps(x,y+1,a,b,m[x][y+1]);
	}
	if(y-1>=0&&m[x][y-1]==t){
		fps(x,y-1,a,b,m[x][y-1]);
	}
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int n,a,b;
	cin >> n;
	for(int i=1;i<=n;i++){
		cout << "World #" << i << "\n";
		cin >> a >> b;
		int max=1;
		for(int i=0;i<26;i++){
			ans[i]=0;
		}
		for(int i=0;i<a;i++){
			for(int j=0;j<b;j++){
				cin >> m[i][j];
			}
		}
		for(int i=0;i<a;i++){
			for(int j=0;j<b;j++){
				if(m[i][j]!='0'){
					ans[m[i][j]-97]++;
					fps(i,j,a,b,m[i][j]);
				}
			}
		}
		while(max>0){
			max=0;
			for(int i=0;i<26;i++){
				if(ans[i]>max){
					max=ans[i];
				}
			}
			if(max==0)break;
			for(int i=0;i<26;i++){
				if(ans[i]==max){
					char s=i+'a';
					cout << s << ": " << max << "\n";
					ans[i]=0;
				}
			}
		} 
		
	}
} 
