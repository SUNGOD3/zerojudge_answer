#include <iostream>
#include <cstdio>
using namespace std;
int main(){
  	int G;
  	string input;
  	while( scanf("%d", &G) != EOF && G != 0 ){
    	cin >> input;
    	int il=input.length(),n = il / G;
    	for( int i = 0 ; i < il ; i += n )
      		for( int j = i + n - 1 ; j >= i ; --j )
        		printf("%c", input[j]);
    	printf("\n");
  	}
  	return 0;
}
