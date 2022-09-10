#include <iostream>
using namespace std;
int tree[1005][1005],all[1005],x,y,chat=1,ca,n;
void ff(int now,int begin,int step){
	if(now==begin&&step){
		chat=0;
		return;
	}
	else
		for(int i=0;i<1001;++i)
			if(tree[i][now])
				ff(i,begin,step+1);
}
int main(){
	while(cin >> n){
		if(!n)break;
		else{
			while(n--){
				cin >> x >> y;
				++tree[x][y];//x is y's father
				all[x]=1;
				all[y]=1;
			}
			int node=0,line=0,root=0;
			for(int i=0;i<1001;++i){
				node+=all[i];
				for(int j=0;j<1001;++j){
					line+=tree[i][j];
					if(tree[i][j]&&tree[j][i])
						chat=0;
				}
			}
			if(node!=line+1)
				chat=0;
			if(node==0&&line==0)
				chat=1;
			for(int i=0;i<1001&&chat;++i){
				if(all[i]){
					int fa=0;
					for(int j=0;j<1001;++j)
						fa+=tree[j][i];
					if((fa==0&&root)||fa>1)
						chat=0;
					else if(fa==0)
						root=i;
				}
			}
			for(int i=0;i<1001&&chat;++i)
				if(all[i]&&i!=root)
					ff(i,i,0);
			if(chat)
				cout << "y\n";
			else
				cout << "n\n"; 
			for(int i=0;i<1001;++i){
				all[i]=0;
				for(int j=0;j<1001;++j)
					tree[i][j]=0;
			}
			chat=1;
		}
	}
} 
