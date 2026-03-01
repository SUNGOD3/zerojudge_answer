#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <stdio.h>
int main(){
	int n,d[4]={0},it=0,tmp[1001]={0};
	char a;
	while(a=getchar_unlocked())
		if(a=='\n')break;
	bool ans=1;
	while(a=getchar_unlocked()){
		if(a==-1)break;
		if(a=='\n'||a==-1){
			if(d[0]||d[1]||d[2]||d[3])ans=0;
			if(ans){
				putchar_unlocked('Y');
				putchar_unlocked('\n');
			}
			else{
				putchar_unlocked('N');
				putchar_unlocked('\n');
			}
			for(int i=0;i<1001;++i)
				tmp[i]=0;
			ans=1;
			it=0;
			d[0]=0;
			d[1]=0;
			d[2]=0;
			d[3]=0;
		}
		else if(a=='('){
			++d[0];
			tmp[it]=-1;
			++it;
		}
		else if(a=='{'){
			++d[1];
			tmp[it]=1;
			++it;
		}
		else if(a=='<'){
			++d[2];
			tmp[it]=2;
			++it;
		}
		else if(a=='['){
			++d[3];
			tmp[it]=3;
			++it;
		}
		else if(a==')'){
			--it;
			if(!d[0]||it<0||tmp[it]!=-1)
				ans=0;
			tmp[it]=0;
			--d[0];
		}
		else if(a=='}'){
			--it;
			if(!d[1]||it<0||tmp[it]!=1)
				ans=0;
			tmp[it]=0;
			--d[1];
		}
		else if(a=='>'){
			--it;
			if(!d[2]||it<0||tmp[it]!=2)
				ans=0;
			tmp[it]=0;
			--d[2];
		}
		else if(a==']'){
			--it;
			if(!d[3]||it<0||tmp[it]!=3)
				ans=0;
			tmp[it]=0;
			--d[3];
		}
	}
} 
