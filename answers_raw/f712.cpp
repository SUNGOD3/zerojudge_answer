#include <iostream>
#include <algorithm>
using namespace std;
struct card{
	int point,color;
};
struct pc{
	card a[5];
	int id;
};pc ans[11];
int t,trash,ccd;
char mcolor[4]={'S','H','D','C'},mnum[14]={' ','2','3','4','5','6','7','8','9','T','J','Q','K','A'};
bool cmp(card x,card y){
	if(x.point>y.point||(x.point==y.point&&x.color<y.color))
		return 1;
	return 0;
}
bool cmp2(pc x,pc y){
	for(int i=0;i<5;++i){
		if(x.a[i].point>y.a[i].point)
			return 1;
		else if(x.a[i].point<y.a[i].point)
			return 0;
	}
	if(x.a[0].color<y.a[0].color)
		return 1;
	return 0;
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> t;
	for(int ca=1;ca<=t;++ca){
		for(int i=0;i<50;++i){
			ans[i].id=i+1;
			cin >> ccd;
			ans[i%10].a[i/10].point=ccd%13;
			if(ccd%13==0)
				ans[i%10].a[i/10].point=13;
			ans[i%10].a[i/10].color=ccd/13;
		}
		cin >> trash >> trash; 
		cout << "Case " << ca << ":\n";
		for(int i=0;i<10;++i)
			sort(ans[i].a,ans[i].a+5,cmp);
		sort(ans,ans+10,cmp2);
		for(int i=0;i<10;++i){
			cout << ans[i].id << " ";
			for(int j=0;j<5;++j)
				cout << mcolor[ans[i].a[j].color] << mnum[ans[i].a[j].point] << " ";
			cout << "\n";
		}
	}
} 
