#include <iostream>
#include <queue>
using namespace std;
int main(){
	priority_queue <int> ans;
	char is;
	int n;
	while(cin >> is){
		if(is=='D'){
			cout << ans.top() << "\n";
			ans.pop();
		}
		else{
			cin >> n;
			ans.push(n);
		}
	}
} 
