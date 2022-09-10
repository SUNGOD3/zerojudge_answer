#include <iostream>
#include <cmath>
using namespace std;
int main() {
  	int n;
  	double x1, y1, x2, y2, x3, y3;
  	cin>>n;
    while(n--){
    	cin>>x1>>y1>>x2>>y2>>x3>>y3;
   		double area=abs(x1*y2+x2*y3+x3*y1-x2*y1-x3*y2-x1*y3)/14.0;
    	int area2=area;
    	if((int)(area*10)%10>=5)
   	    ++area2;
 	    cout<<area2<<'\n';
    }
}
