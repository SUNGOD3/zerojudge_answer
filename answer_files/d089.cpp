#include <iostream>
#include <iomanip>
using namespace std;
int x,y,xx,yy;
string s;
double d[5][3]={{0.1,0.06,0.02},{0.25,0.15,0.05},{0.53,0.33,0.13},{0.87,0.47,0.17},{1.44,0.8,0.3}};
char ch;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> ch){
		if(ch=='#')break;
		cin >> s >> x >> y >> xx >> yy; 
		y+=x*60;
		yy+=xx*60;
		int a=0,b=0,c=0,st=0;
		double v=0;
		while(y!=yy||st==0){
			++y;
			st=1;
			if(y>=1440)y-=1440;
			if(y>480&&y<=1080){
				++a;
			}
			else if(y>1080&&y<=1320){
				++b;
			}
			else{
				++c;
			}
		}
		v=d[ch-'A'][0]*a+d[ch-'A'][1]*b+d[ch-'A'][2]*c;
		cout << setw(10) << s << setw(6) << a << setw(6) << b << setw(6) << c << setw(3) << ch << setw(8) << fixed <<  setprecision(2)  << v << "\n";
	}
} 
