#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
struct a{
	string name;
	int no;
	float score;
};
bool cmp(a p,a q){
	return p.score>q.score;
	if(p.score==q.score)
		return p.no<q.no; 
	return p.score<q.score;
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int c;
	float x,y,k,j;
	cin >> c;
	a n[c];
	for(int i=0;i<c;i++){
		cin >> n[i].name ;
		cin >> x >> y >> k >> j;
		n[i].score=x*(k/y)*j;
		n[i].no=i;
	}
	sort(n,n+c,cmp);
	for(int i=0;i<c;i++){
		cout << n[i].name <<"\n";
	}
} 
