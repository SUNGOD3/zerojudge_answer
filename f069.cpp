#include <iostream>
#include <map>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	long long int n,w;
	while(cin >> n >> w){
		w*=40;
		map <string ,long long int> food;
		string t;
		long long int tmp;
		while(n--){
			cin >> t >> tmp;
			food[t]=tmp;
		}
		cin >> n;
		while(n--){
			cin >> t >> tmp;
			w-=food[t]*tmp;
		}
		(w>=0)?cout << "Euan you are doing a great job!\n":cout << "Euan eats too much.\n";
	}
} 
