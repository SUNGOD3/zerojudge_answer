#include<iostream>
using namespace std;
int main(){
	int x,y,z,chat[7];
	while(cin>>x>>y>>z){
		int max=x+y+z;
		chat[0]=x+10*y+z;
		chat[1]=10*x+y+z;
		chat[2]=x*(10*y+z);
		chat[3]=(10*x+y)*z;
		chat[4]=x+y*z;
		chat[5]=x*y+z;
		chat[6]=x*y*z;
		for(int i=0;i<7;i++){
			if(chat[i]>max)
				max=chat[i];
		}
		cout<<max<<endl;
	}
}
