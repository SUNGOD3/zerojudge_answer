#include <iostream>
using namespace std;
int mem[8],n,reg[4],d,s,s2;
string is;
int main(){
	for(int i=0;i<8;++i)
		cin >> mem[i];
	cin >> n;
	while(n--){
		cin >> is;
		if(is[0]=='L'){
			cin >> d >> s;
			reg[d]=mem[s];
		}
		else if(is[0]=='S'){
			cin >> d >> s;
			mem[d]=reg[s];
		}
		else if(is[0]=='A'){
			cin >> d >> s >> s2;
			reg[d]=reg[s]+reg[s2];
		}
		else if(is[0]=='M'){
			cin >> d >> s;
			reg[d]=reg[s];
		}
	}
	cout << reg[0] << "\n" << mem[0];
} 
