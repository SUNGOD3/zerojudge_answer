#include <iostream>
using namespace std;
int main(){
	double s1,s2,s3;
	while(cin >> s1 >> s2 >> s3)
		printf("%.2lf\n",s1+s2+s3+((s2*s3)/(2*s1))+((s3*s1)/(2*s2))+((s1*s2)/(2*s3))); 
} 
