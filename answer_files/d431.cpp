#include <iostream>
using namespace std;
int a[5][5],b[5][5],t,ba,bb,sum3,sum4;
int main(){
	for(int i=0;i<5;++i)
		for(int j=0;j<5;++j)
			cin >> a[i][j];
	for(int i=0;i<5;++i)
		for(int j=0;j<5;++j)
			cin >> b[i][j];
	for(int i=0;i<25;++i){
		cin >> t;
		for(int i=0;i<5;++i)
			for(int j=0;j<5;++j)
				if(t==a[i][j]){
					a[i][j]=0;
					i=5;j=5;
				}
		for(int i=0;i<5;++i)
			for(int j=0;j<5;++j)
				if(t==b[i][j]){
					b[i][j]=0;
					i=5;j=5;
				}
		sum3=0;sum4=0;
		for(int j=0;j<5;++j){
			sum3+=a[j][j];
			sum4+=a[j][4-j];
		}
		if(sum3==0)++ba;
		if(sum4==0)++ba;
		for(int i=0;i<5;++i){
			int sum=0,sum2=0;
			for(int j=0;j<5;++j){
				sum+=a[i][j];
				sum2+=a[j][i];
			}
			if(sum==0)++ba;
			if(sum2==0)++ba;
		}
		sum3=0;sum4=0;
		for(int j=0;j<5;++j){
			sum3+=b[j][j];
			sum4+=b[j][4-j];
		}
		if(sum3==0)++bb;
		if(sum4==0)++bb;
		for(int i=0;i<5;++i){
			int sum=0,sum2=0;
			for(int j=0;j<5;++j){
				sum+=b[i][j];
				sum2+=b[j][i];
			}
			if(sum==0)++bb;
			if(sum2==0)++bb;
		}
		if(ba>=5&&bb>=5){
			cout << "AB " << t ;
			break;
		}
		else if(ba>=5){
			cout << "A " << t;
			break;
		}
		else if(bb>=5){
			cout << "B " << t;
			break;
		}
		ba=0;bb=0;
	}
}
