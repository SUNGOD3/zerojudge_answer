#include <iostream>

using namespace std;

int main (){
	
	int N=0;
	int X=0;
	int A,B=0;
	int M,S=0;
	int t=0; 
	int m=0;
	while(cin >> N){
		for(int i=1;i<=N;i++){
			A=0;
			B=0;
			M=0;
			S=0;
			t=1000000;
			m=0;
			cin >> X;
			for(int j=1;j<=X;j++){
				cin >> A >> B;
				S+=A*60;
				S+=B;
				if((A*60+B)<t){
					t=A*60+B;
				}
			}
			S/=X;
			while(S>=60){
				M++;
				S-=60;
			}
			while(t>=60){
				m++;
				t-=60;
			}
			cout << "Track " << i << ":" << endl;
			cout << "Best Lap: "  << m << " minute(s) " << t << " second(s)." << endl;
			cout << "Average: "  << M << " minute(s) " << S << " second(s)." << endl;
			
		}
		
	}
	
	
}
