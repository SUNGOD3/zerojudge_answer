#include <iostream>
using namespace std;
int main(){
	int x,y,sum=0,line=0;
	int sq[10]={0};
	for(int i=0;i<9;i++){
		cin >> x >> y;
		if(x>0&&x<10&&y>0&&y<10){
			sq[7]=1;
		}
		else if(x>0&&x<10&&y>10&&y<20){
			sq[4]=1;
		}
		else if(x>0&&x<10&&y>20&&y<30){
			sq[1]=1;
		}
		else if(x>10&&x<20&&y>0&&y<10){
			sq[8]=1;
		}
		else if(x>10&&x<20&&y>10&&y<20){
			sq[5]=1;
		}
		else if(x>10&&x<20&&y>20&&y<30){
			sq[2]=1;
		}
		else if(x>20&&x<30&&y>0&&y<10){
			sq[9]=1;
		}
		else if(x>20&&x<30&&y>10&&y<20){
			sq[6]=1;
		}
		else if(x>20&&x<30&&y>20&&y<30){
			sq[3]=1;
		}
	}
	if(sq[1]==1&&sq[2]==1&&sq[3]==1){
		line++;
	}
	if(sq[4]==1&&sq[5]==1&&sq[6]==1){
		line++;
	}
	if(sq[7]==1&&sq[8]==1&&sq[9]==1){
		line++;
	}
	if(sq[4]==1&&sq[1]==1&&sq[7]==1){
		line++;
	}
	if(sq[2]==1&&sq[5]==1&&sq[8]==1){
		line++;
	}
	if(sq[3]==1&&sq[9]==1&&sq[6]==1){
		line++;
	}
	for(int i=1;i<10;i++){
		if(sq[i]==1){
			if(i==1||i==3||i==7||i==9)
				sum+=8;
			else if(i==5)
				sum+=2;
			else
				sum+=5;	
		}
	}
	if(sq[2]==1&&sq[5]==1&&sq[9]==1&&sq[8]==1){
		sum+=20;
	}
	if(sum==74)
		sum-=20;
	cout << line << " " << sum << "\n";
} 
