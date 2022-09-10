#include <iostream> 
using namespace std;
string a[53]={
    "XX",
	"SA","S2","S3","S4","S5","S6","S7","S8","S9","S10","SJ","SQ","SK",
    "HA","H2","H3","H4","H5","H6","H7","H8","H9","H10","HJ","HQ","HK",
    "DA","D2","D3","D4","D5","D6","D7","D8","D9","D10","DJ","DQ","DK",
    "FA","F2","F3","F4","F5","F6","F7","F8","F9","F10","FJ","FQ","FK"
};
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int n,is,x,y;
	cin >> n;
	while(n--){
		cin >> is ;
		if(is==1){
			cin >> x >> y;
			if(x==1)continue;
			int up=y-x+1,it=0;
			string b[up];
			for(int i=y;i>=x;--i){
				b[it++]=a[i];
				if(x-it>0)a[i]=a[x-it];
				if(i==x){
					while(x-it>0){
						a[i]=a[x-it];
						++it;
						--i;
					}
				}
			}
			it=0;
			for(int i=up;i>0;--i)
				a[i]=b[it++];
		}
		else if(is==2){
			cin >> x >> y;
			if(y==52)continue;
			int up=y-x+1,it=0;
			string b[up];
			for(int i=x;i<=y;++i){
				b[it++]=a[i];
				if(i+up<=52){
					a[i]=a[i+up];
				}
				if(i==y){
					while(i+up<=52){
						a[i]=a[i+up];
						++i;
					}
				}
			}
			it=0;
			for(int i=52-up+1;i<=52;++i){
				a[i]=b[it++];
			}
		}
		else if(is==3){
			cin >> x;
			if(x==52)continue;
			x=52-x+1;
			y=52;
			int up=y-x+1,it=0;
			string b[up];
			for(int i=y;i>=x;--i){
				b[it++]=a[i];
				if(x-it>0)a[i]=a[x-it];
				if(i==x){
					while(x-it>0){
						a[i]=a[x-it];
						++it;
						--i;
					}
				}
			}
			it=0;
			for(int i=up;i>0;--i)
				a[i]=b[it++];
		} 
		else{
			cin >> y;
			if(y==52)continue;
			x=1;
			int up=y-x+1,it=0;
			string b[up];
			for(int i=x;i<=y;++i){
				b[it++]=a[i];
				if(i+up<=52){
					a[i]=a[i+up];
				}
				if(i==y){
					while(i+up<=52){
						a[i]=a[i+up];
						++i;
					}
				}
			}
			it=0;
			for(int i=52-up+1;i<=52;++i){
				a[i]=b[it++];
			}
		}
	}
	for(int i=1;i<=5;++i)
		cout << a[i] << " ";
}
