#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double x1,y1,x2,y2,x3,y3;
	cin >> x1;
	while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3){
		double fl= sqrt((y3-y1)*(y3-y1)+(x3-x1)*(x3-x1));
        double hl= sqrt((y2-y1)*(y2-y1)+(x2-x1)*(x2-x1));
		if(x2-x1==0){
			if(x3-x1==0&&fl<hl)
				cout << "該死的東西!竟敢想讓我死！\n";
			else
				cout << "父親大人!母親大人!我快到了！\n";
		}
		else if(x3-x1==0&&x2-x1!=0){
			cout << "父親大人!母親大人!我快到了！\n";
		}
		else{
			double m=(y2-y1)/(x2-x1);
			if((y3-y2)/(x3-x2)==m&&fl<hl)
				cout << "該死的東西!竟敢想讓我死！\n";
			else
				cout << "父親大人!母親大人!我快到了！\n";
		}
	} 
} 
