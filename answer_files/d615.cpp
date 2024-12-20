#include <iostream>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	long long int s,sum=0;
	char q;
	cin >> sum >> sum;
	while(cin >> q){
		if(q>='0'){
			cout << sum << "\n";
			s=q-48;
			while(cin >> q){
				if(q<'0')break;
				s=(s<<3)+(s<<1);
				s+=q-48;
			}
			sum=s;
		}
		cin >> s;
		if(q=='+')
			sum+=s;
		else if(q=='-')
			sum-=s;
		else if(q=='*')
			sum*=s;
		else
			sum/=s;
	}
	cout << sum ;
}
