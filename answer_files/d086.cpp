#include <iostream>
#include <string>
using namespace std;
int main(){
	string a;
	while(cin >> a,a!="0"){
		int sum=0;
		for(int i=0;i<a.length();i++){
			if(a[i]>=65&&a[i]<=90)
				sum+=a[i]-64;
			else if(a[i]>=97&&a[i]<=122)
				sum+=a[i]-96;
			else{
				sum=0;break;}	
		}
		if(sum==0)
			printf("Fail\n");
		else
			printf("%d\n",sum);
		sum=0;	 
	}
} 
