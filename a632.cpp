#include <iostream>
using namespace std;
int dies[29][2],all[29][2],n,t,l;
char way;
int main(){
	for(int i=0,c=0;i<=6;++i){
		for(int j=i;j<=6;++j){
			++c;
			dies[c][0]=i;
			dies[c][1]=j;
		}
	}
	while(cin >> t){
		cin >> way;
		if(t){
			all[n][0]=t;
			if(way=='B')all[n][1]=1;
			++n;
		}
		else{
			bool ans(0);
			int ii(0),j;
			while(ii!=n-1){
				bool ca(0);
				for(;ii<n;++ii){
					if(all[ii][0]!=-1){
						l=dies[all[ii][0]][1-all[ii][1]];
						ca=1;
						break;
					}
				}
				if(!ca){
					ans=1;
					break;
				};
				for(j=ii+1;j<n;++j){
					if(all[j][0]!=-1){
						if(l==dies[all[j][0]][all[j][1]]){
							all[ii][0]=-1;
							all[j][0]=-1;
							ii=0;
							j=n;
						}
						else{
							++ii;
							j=n;
						}
					}
				}
				if(j==n)break;
			}
			if(ans)
				cout << "DATASET CLEARED\n";
			else{
				for(int i=0;i<n;++i)
					if(all[i][0]!=-1)
						cout << all[i][0] << " ";
				cout << "\n";
			}
			n=0;
			for(int i=0;i<29;++i){
				all[i][0]=0;
				all[i][1]=0;
			}
		}
	}
} 
