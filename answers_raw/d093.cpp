#include <iostream>
using namespace std;
float arr[11][5];
int it;
int main(){
	float x,y;
	char a;
	while(cin >> a){
		if(a=='*')break;
		else if(a=='c'){
			cin >> arr[it][1] >> arr[it][2] >> arr[it][3];
			arr[it][3]*=arr[it][3];
		}
		else{
			arr[it][0]=1;
			cin >> arr[it][1] >> arr[it][2] >> arr[it][3] >> arr[it][4];
		}
		++it;
	}
	int c=0;
	while(cin >> x >> y){
		if(x>9999&&x<10000&&y>9999&&y<10000)break;
		bool k=0;
		++c;
		for(int i=0;i<it;++i){
			if(arr[i][0]){
				if(arr[i][1]<x&&arr[i][3]>x&&arr[i][2]>y&&arr[i][4]<y){
					cout << "Point " << c << " is contained in figure " << i+1  << "\n";
					k=1;
				}
			}
			else{
				float xx=arr[i][1]-x;
				float yy=arr[i][2]-y;
				if(xx*xx+yy*yy<arr[i][3]){
					cout << "Point " << c << " is contained in figure " << i+1  << "\n";
					k=1;
				}
			}
		}
		if(k==0)
			cout << "Point " << c << " is not contained in any figure\n";
	}
} 
