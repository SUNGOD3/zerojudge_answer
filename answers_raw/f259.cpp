#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <iostream>
#include <map>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	map <string,bool> ans;
	char in;
	string input;
	while(in=getchar_unlocked()){
		if(in==-1)break;
		else if(in>='A'){
			input+=in;
		}
		else{
			if(ans[input]){
				putchar_unlocked('1');
				putchar_unlocked('\n');
			}
			else{
				ans[input]=1;
				putchar_unlocked('0');
				putchar_unlocked('\n');
			}
			input.clear();
		}
	}
} 
