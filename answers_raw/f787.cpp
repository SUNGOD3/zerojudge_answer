#include <iostream>
using namespace std;
struct player{
	string name,tool[15];
	int hp,hurt,nxt;
	bool has;
};
int n,m;
player a[10005];
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n >> m;
	for(int i=1;i<=n;++i){
		cin >> a[i].name >> a[i].hp >> a[i].hurt;
		for(int j=0;j<a[i].hp;++j)
			cin >> a[i].tool[j];
		cin >> a[i].nxt;
		a[i].has=0;
	}
	while(!a[m].has){
		a[m].has=1;
		cout << a[m].name << " ";
		if(a[m].hp<=a[m].hurt){
			cout << "dead.\n";
		}
		else{
			a[m].hp-=a[m].hurt;
			cout << a[m].hp << " ";
			for(int i=0;i<a[m].hp;++i){
				cout << a[m].tool[i] << " ";
			}
			cout << "\n";
		}
		m=a[m].nxt;
	}
}
 
