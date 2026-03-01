#include <iostream>
using namespace std;
long long BIT[500005],n,m,is,x,y;
int lw(int v){
	return  v&(-v);
}
void update(int v,int it){
	for(int i=it;i<=n;i+=lw(i)){
		BIT[i]+=v;
	}
}
long long sum(int it){
	long long rt=0;
	for(int i=it;i>0;i-=lw(i)){
		rt+=BIT[i];
	}
	return rt;
}
int bs(int l,int r,long long q){
	if(l>r)return l;
	int mid=(l+r)/2;
	if(sum(mid)>=q){
		return bs(l,mid-1,q);
	}
	return bs(mid+1,r,q);
}
int main(){
	std::ios::sync_with_stdio(false);
    cin.tie(NULL);
	cin >> n >> m;
	for(int i=1;i<=n;++i){
		cin >> x;
		update(x,i);
	}
	for(int i=0;i<m;++i){
		cin >> is;
		if(is==2){
			cin >> x;
			if(x>sum(n)){
				cout << "meh\n";
			}
			else{
				cout << bs(0,n,x) << '\n';
			}
		}
		else{
			cin >> x >> y;
			update(y-(sum(x)-sum(x-1)),x);
		}
	}
}
