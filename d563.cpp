#include <iostream>
#include <map>
using namespace std;
int main(){
	int a;
	map <int,int> n;
	while(cin >> a){
		int b[a],sump[a]={0},sumb[a]={0},ans=0;
		for(int i=0;i<a;i++){
			cin >> b[i];
			sump[i]=b[i];
			sumb[i]=b[i];
		} 
		for(int i=1;i<a;i++)
			sump[i]+=sump[i-1];
		for(int i=a-2;i>=0;i--)
			sumb[i]+=sumb[i+1];
		for(int i=0;i<a;i++)
			n[sump[i]]=0;
		for(int i=a-1;i>=0;i--){
			if(n.find(sumb[i])!=n.end())
				ans++;
		}
		cout << ans << endl;
		n.clear();
	}
} 
