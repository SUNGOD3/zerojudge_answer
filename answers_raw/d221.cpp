#include <iostream>
#include <queue>
using namespace std;
int main(){
    priority_queue< long long int,vector<long long int>,greater<long long int> > p;
    int N;
    while(cin >> N){
    	if(N==0)break;
    	long long int a,sum=0,cost=0;
	    while(N--){
	    	cin >> a;
	    	p.push(a);
		}
	    while(p.size()!=1){
	    	sum+=p.top();
	    	p.pop();
	    	sum+=p.top();
	       	p.pop();
	       	p.push(sum);
	       	cost+=sum;
	       	sum=0;
	    }
	    cout << cost << "\n";
	    p.pop();
	}
   return 0;
}
