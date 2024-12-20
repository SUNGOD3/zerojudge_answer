#include <iostream>
using namespace std;
struct bx{
	int a[30],sz;
};
bx b[30];
int n,x,y,fr[30];
string is,is2;
void ab(int tar){
	int p=fr[tar],tp=b[p].a[b[p].sz-1];
	while(tp!=tar){
		fr[tp]=tp;
		b[tp].a[b[tp].sz++]=tp;
		b[p].sz--;
		tp=b[p].a[b[p].sz-1];
	}
}
void ot(int st,int tar){
	int p1=fr[st],p2=fr[tar],nh=0;
	bool has=0;
	for(int i=0;i<b[p1].sz;++i){
		if(has==0&&b[p1].a[i]==st){
			has=1;
			nh=i;
		}
		if(has){
			fr[b[p1].a[i]]=p2;
			b[p2].a[b[p2].sz++]=b[p1].a[i];
		}
	}
	b[p1].sz=nh;
}
int main(){
	while(cin >> n){
		for(int i=0;i<n;++i){
			b[i].a[0]=i;
			b[i].sz=1;
			fr[i]=i;
		}
		while(cin >> is){
			if(is=="quit")break;
			cin >> x >> is2 >> y;
			if(fr[x]==fr[y])continue;
			if(is=="move")ab(x);
			if(is2=="onto")ab(y);
			ot(x,y);
		}
		for(int i=0;i<n;++i){
			cout << i << ":";
			for(int j=0;j<b[i].sz;++j)
				cout << " " << b[i].a[j];
			cout << "\n";
		}
	}	
} 
