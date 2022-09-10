#include <iostream>
#include <algorithm>
using namespace std;
bool cmp(char a, char b){
	char la = tolower(a), lb = tolower(b);
	if (la != lb) 
	return la < lb; 
	else 
	return a < b;
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	string a;
	cin >> a;
	while(cin >> a){
		sort(a.begin(),a.end(),cmp);
		do{
			cout << a << "\n";
		}while(next_permutation(a.begin(),a.end(),cmp));
	}
} 
