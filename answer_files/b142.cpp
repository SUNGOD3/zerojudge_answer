#include <iostream>
using namespace std;
struct st{
	string name;
	int a,b;
	char c,d;
	int e,total=0;
};
int main(){
	int n,ans=0,sum=0;
	cin >> n;
	string aa;
	st p[n];
	for(int i=0;i<n;++i){
		cin >> p[i].name >> p[i].a >> p[i].b >> p[i].c >> p[i].d >> p[i].e;
		if(p[i].a>80&&p[i].e)
			p[i].total+=8000;
		if(p[i].a>85&&p[i].b>80)
			p[i].total+=4000;
		if(p[i].a>90)
			p[i].total+=2000;
		if(p[i].a>85&&p[i].d=='Y')
			p[i].total+=1000;
		if(p[i].b>80&&p[i].c=='Y')
			p[i].total+=850;
		if(p[i].total>ans){
			ans=p[i].total;
			aa=p[i].name;
		}
		sum+=p[i].total;
	}
	cout << aa << "\n" << ans << "\n" << sum ;
}
