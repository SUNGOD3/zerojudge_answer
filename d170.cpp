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
				cout << "�Ӧ����F��!�����Q���ڦ��I\n";
			else
				cout << "���ˤj�H!���ˤj�H!�ڧ֨�F�I\n";
		}
		else if(x3-x1==0&&x2-x1!=0){
			cout << "���ˤj�H!���ˤj�H!�ڧ֨�F�I\n";
		}
		else{
			double m=(y2-y1)/(x2-x1);
			if((y3-y2)/(x3-x2)==m&&fl<hl)
				cout << "�Ӧ����F��!�����Q���ڦ��I\n";
			else
				cout << "���ˤj�H!���ˤj�H!�ڧ֨�F�I\n";
		}
	} 
} 
