#include <iostream>

using namespace std;

int main (){
	
	int a=0;
	int b=0;
	int c=0;
	
	while(cin >> a >> b){
		int iarr[a][b];
		for(int i=0;i<a;i++){
			for(int j=0;j<b;j++){
				cin >> iarr[i][j];
				//3 1 2
                //8 5 4
                //<2 3>
			}
		}
		int ibrr[b][a];//<3 2>
		for(int i=0;i<b;i++){
			for(int j=0;j<a;j++){
				ibrr[i][j]=iarr[j][i];
				cout << ibrr[i][j] << " ";
			}
			cout << endl;
		}
		
	}
	
} 
