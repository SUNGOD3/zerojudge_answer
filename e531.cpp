#include <iostream>
using namespace std;
int c;
string a;
bool f[11];
int main(){
	cin >> c;
	getline(cin,a);
	while(c--){
		getline(cin,a);
		int al=a.length(),ans[11]={0};
		for(int i=0;i<al;++i){
			if(a[i]=='c'){
				for(int j=1;j<=10;++j){
					if(j==1||j==5||j==6)f[j]=0;
					else{
						if(f[j]==0){
							f[j]=1;
							++ans[j];
						} 
					}
				}
			}
			else if(a[i]=='d'){
				for(int j=1;j<=10;++j){
					if(j==1||j==5||j==6||j==10)f[j]=0;
					else{
						if(f[j]==0){
							f[j]=1;
							++ans[j];
						} 
					}
				}
			}
			else if(a[i]=='e'){
				for(int j=1;j<=10;++j){
					if(j==1||j==5||j==6||j==9||j==10)f[j]=0;
					else{
						if(f[j]==0){
							f[j]=1;
							++ans[j];
						} 
					}
				}
			}
			else if(a[i]=='f'){
				for(int j=1;j<=10;++j){
					if(j==1||j==5||j==6||j==8||j==9||j==10)f[j]=0;
					else{
						if(f[j]==0){
							f[j]=1;
							++ans[j];
						} 
					}
				}
			}
			else if(a[i]=='g'){
				for(int j=1;j<=10;++j){
					if(j!=2&&j!=3&&j!=4)f[j]=0;
					else{
						if(f[j]==0){
							f[j]=1;
							++ans[j];
						} 
					}
				}
			}
			else if(a[i]=='a'){
				for(int j=1;j<=10;++j){
					if(j!=2&&j!=3)f[j]=0;
					else{
						if(f[j]==0){
							f[j]=1;
							++ans[j];
						} 
					}
				}
			}
			else if(a[i]=='b'){
				for(int j=1;j<=10;++j){
					if(j!=2)f[j]=0;
					else{
						if(f[j]==0){
							f[j]=1;
							++ans[j];
						} 
					}
				}
			}
			else if(a[i]=='C'){
				for(int j=1;j<=10;++j){
					if(j!=3)f[j]=0;
					else{
						if(f[j]==0){
							f[j]=1;
							++ans[j];
						} 
					}
				}
			}
			else if(a[i]=='D'){
				for(int j=1;j<=10;++j){
					if(j==5||j==6||j==10)f[j]=0;
					else{
						if(f[j]==0){
							f[j]=1;
							++ans[j];
						} 
					}
				}
			}
			else if(a[i]=='E'){
				for(int j=1;j<=10;++j){
					if(j==5||j==6||j==9||j==10)f[j]=0;
					else{
						if(f[j]==0){
							f[j]=1;
							++ans[j];
						} 
					}
				}
			}
			else if(a[i]=='F'){
				for(int j=1;j<=10;++j){
					if(j==5||j==6||j==8||j==9||j==10)f[j]=0;
					else{
						if(f[j]==0){
							f[j]=1;
							++ans[j];
						} 
					}
				}
			}
			else if(a[i]=='G'){
				for(int j=1;j<=10;++j){
					if(j>4)f[j]=0;
					else{
						if(f[j]==0){
							f[j]=1;
							++ans[j];
						} 
					}
				}
			}
			else if(a[i]=='A'){
				for(int j=1;j<=10;++j){
					if(j>3)f[j]=0;
					else{
						if(f[j]==0){
							f[j]=1;
							++ans[j];
						} 
					}
				}
			}
			else if(a[i]=='B'){
				for(int j=1;j<=10;++j){
					if(j>2)f[j]=0;
					else{
						if(f[j]==0){
							f[j]=1;
							++ans[j];
						} 
					}
				}
			}
		}
		for(int i=1;i<=10;++i){
			f[i]=0;
			cout << ans[i];
			if(i!=10) cout << " ";
		}
		cout << "\n";
	}
} 
