#include <iostream>
using namespace std;
int main(){
	int a,b,c,d;
	while(cin >> a >> b >> c >> d){
		bool ans=0;
		for(int aa=0;aa<=3&&ans!=1;aa++){
			for(int bb=0;bb<=3&&ans!=1;bb++){
				for(int cc=0;cc<=3&&ans!=1;cc++){
					for(int dd=0;dd<=3&&ans!=1;dd++){
						if(aa==bb||bb==cc||cc==dd||aa==cc||aa==dd||bb==dd)
							continue;
						if(aa+bb==a&&cc+dd==b&&aa+cc==c&&bb+dd==d){
							cout << aa << " " << bb << "\n" << cc << " " << dd << "\n";
							ans=1;
						}
					}
				}
			}
		}
		if(ans==0)
			cout << "No solutions.\n";
	}
} 
