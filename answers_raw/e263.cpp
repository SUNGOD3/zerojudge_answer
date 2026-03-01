#include <iostream>
using namespace std;
int main(){
	int a,b;
	while(cin >> a >> b){
		int it=0,way=1,sum=0,ans1=0;
		bool ans=0;
		string m;
		while(b--){
			cin >> m;
			if(ans==0){
				it+=way;
				if(it>a)
					it-=a;
				else if(it<=0)
					it+=a;
				if(m=="A")
					sum=0;
				else if(m=="2"||m=="3"||(m>="6"&&m<="9"))
					sum+=m[0]-48;
				else if(m=="4")
					way*=-1;
				else if(m[0]=='5'){
					int k=0;
					for(int i=2;m[i]!=')';++i){
						k*=10;
						k+=m[i]-48;
					}
					it=k-way;
				}
				else if(m[0]=='1'){
					if(m[2]=='+')
						sum+=10;
					else
						sum=max(sum-10,0);
				}
				else if(m[0]=='Q'){
					if(m[1]=='+')
						sum+=20;
					else
						sum=max(sum-20,0);
				}
				else if(m=="K")
					sum=99;
				if(sum>99){
					ans=1;
					ans1=it;
				}
			}
		}
		if(ans)
			cout << ans1 << " cheated!\n";
		else
			cout << "The sum is " << sum << "\n";
	}
} 
