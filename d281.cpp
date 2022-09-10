#include<cstdio>
int main(){
  long long n;
  while( scanf( "%lld", &n ) != EOF && n > 0 ){
    if( n == 1 )
      printf( "0%%\n" );
    else
      printf( "%lld%%\n", n*25 );
  }
  return 0;
}
