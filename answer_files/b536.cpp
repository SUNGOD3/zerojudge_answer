#include <iostream>
using namespace std;
int main(){
	int n;
	string a;
	cin >> n;
	getline(cin,a);
	while(n--){
		getline(cin,a);
		int al=a.length(),il=0,it=0,sum=0;
		for(int i=0;i<al;++i)
			if(a[i]!='-')++il;
		if(il==10){
			while(il>1){
				if(a[it]!='-'){
					sum+=(a[it]-'0')*il;
					--il;
				}
				++it;
			}
			sum%=11;
			sum=11-sum;
			char ans;
			if(sum==10)
				ans='X';
			else
				ans='0'+sum;
			if(a[al-1]==ans)
				cout << "T\n";
			else
				cout << "F\n"; 
		}
		else{
			il=0;
			while(il<12){
				if(a[it]!='-'){
					if(il%2)
						sum+=(a[it]-'0')*3;
					else
						sum+=(a[it]-'0')*1;
					++il;
				}
				++it;
			}
			sum%=10;
			sum=10-sum;
			if(sum==10)sum=0;
			if(a[al-1]==sum+48)
				cout << "T\n";
			else
				cout << "F\n"; 
		}
	}
} 
