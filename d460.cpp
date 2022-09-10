#include <iostream>

int pd(int in0 ) {
    
    if (in0 <6 )
       return 0 ;
    else if (in0 <12 )
         return 590 ;
    else if (in0 <18 )
         return 790 ;
    else if (in0 <60 )
         return 890 ;
    else 
         return 399 ;
    
}

using namespace std;
int main()
{
    int in0 ;
    
    while (cin >>in0 ){
          cout << pd(in0) <<endl ;
    }

    return EXIT_SUCCESS;
}
