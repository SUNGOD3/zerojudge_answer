#include <iostream>
using namespace std;
int n,is,p[5],v[5],q[5]={250,400,500,750},qv[5]={75,110,140,250};
void pt(){
	int mi=10000000;
	for(int i=0;i<4;++i){
		if(p[i]<=8)mi=min(mi,v[i]=p[i]*qv[i]);
	}
	for(int i=0;i<mi;++i){
		if(v[i]==mi){
			cout << "Qty: " << p[i] << " Disk: " << q[i] << "GB Price: $" << qv[i] << "\n";
			if(is==1)p[i]/=2;
			if(is==5)--p[i];
			cout << "Total price of this " << q[i]*p[i] << "GB array: $" << v[i] << "\n"; 
			break;
		}
	}
}
int main(){
	while(cin >> n >> is){
		if(is==0){
			for(int i=0;i<4;++i){
				p[i]=n/q[i];
				if(n%q[i])++p[i];
			}
			pt();
		}
		else if(is==1){
			for(int i=0;i<4;++i){
				p[i]=n/q[i];
				if(n%q[i])++p[i];
				p[i]*=2;
			}
			pt();
		}
		else{
			
			for(int i=0;i<4;++i){
				p[i]=n/q[i];
				if(n%q[i])++p[i];
				p[i]++;
			}
			pt();
		}
	}
	
} 
