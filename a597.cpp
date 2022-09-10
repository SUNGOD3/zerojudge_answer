#include <iostream>
#include <queue>
using namespace std;
int m,n,tmp,ans,total,to;
bool mp[501][501];
char c[501];
int main(){
	while(scanf("%d %d",&m,&n)>0){
		ans=tmp=total=to=0;
		queue < pair<int,int> > q;
		for(int i=0;i<m;++i){
			scanf("%s",&c);
			for(int j=0;j<n;++j){
				if(c[j]=='J'){
					mp[i][j]=1;
					++to;
				}
				else
					mp[i][j]=0;
			}
		}
		if(m*n-to<min(m,n)){
			printf("1 %d\n",to); 
		}
		else{
			for(int i=0;i<m;++i){
				for(int j=0;j<n;++j){
					if(mp[i][j]){
						++total;
						tmp=1;
						q.push(make_pair(i,j));
						while(q.empty()==0){
							pair <int,int> p=q.front();
							q.pop();
							int x=p.first,y=p.second;
							mp[x][y]=0;
							if(x>0&&mp[x-1][y]){
								q.push(make_pair(x-1,y));
								mp[x-1][y]=0;
								++tmp;
							}
							if(x<m-1&&mp[x+1][y]){
								q.push(make_pair(x+1,y));
								mp[x+1][y]=0;
								++tmp;
							}
							if(y>0&&mp[x][y-1]){
								q.push(make_pair(x,y-1));
								mp[x][y-1]=0;
								++tmp;
							}
							if(y<n-1&&mp[x][y+1]){
								q.push(make_pair(x,y+1));
								mp[x][y+1]=0;
								++tmp;
							}
						}
						ans=max(ans,tmp);
					}		
				}
			}
			printf("%d %d\n",total,ans);
		}
	}
} 
