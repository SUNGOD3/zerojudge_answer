#include <iostream>
using namespace std;
int main(){
	std::ios::sync_with_stdio(false);
    std::cin.tie(0);
	long long int s,d;
	while(cin >> s >> d){
		s*=2;
		if(d==0)
			cout << "Go Kevin!!" << endl;
		else{
			int n=1;
			while(s>=n*(1+((n-1)*d)+1)){
				n++;
			}
			n--;
			if(s==n*(1+((n-1)*d)+1)){
				cout << "Go Kevin!!" << endl;
			}
			else
				cout << "No Stop!!" << endl;
		}
	}
} 
