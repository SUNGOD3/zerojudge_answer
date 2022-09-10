#include <iostream>
using namespace std;
int GCD(int m, int n) { 
    if(n == 0) 
        return m; 
    else 
        return GCD(n, m % n); 
}
int main() 
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    int G,N=0;
    while(cin >> N){
	    if(N!=0){
	    	G+=N-1;
			for(int i=2;i<N;i++){
				for(int j=i+1;j<=N;j++){
					if(i==2&&j%2!=0){
						G++;
					}
					else
						if(j-i==1){
							G++;
						}
						else
		    			G+=GCD(i,j);
				}
			}
			cout << G << endl;
			G=0;
		}
		else{
			return 0;
		}
	}
}

