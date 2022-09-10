#include<iostream> 
using namespace std;
int main(int argc, char** argv) {
	cin.tie(0); ios::sync_with_stdio(false);
 	long double n,a,b,c;
 	cin>>n;
 	while(n--){
  		cin>>a>>b>>c;
  		if(c<a)
  			swap(c,a);	
		if(c<b)
			swap(c,b);
		c*=c;
		a*=a;
		b*=b;
		a+=b;
  		if(c==a)
   			cout << "right triangle\n";
  		else if(c>a)
  			cout << "obtuse triangle\n";
  		else
   			cout << "acute triangle\n";
 	}
 	return 0;
}
