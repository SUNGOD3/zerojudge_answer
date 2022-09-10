#include <iostream>
#include <map>
using namespace std;
struct tpa{
	string name="030";
	int win=0;
	int lose=0;
}tpa[21];
int main(){
	int a,max=0,min=21;
	string b;
	cin >> a >> a;
	while(a--){
		cin >> b;
		for(int i=0;i<21;++i){
			if(tpa[i].name==b||tpa[i].name=="030"){
				tpa[i].name=b;
				tpa[i].win++;
				if(tpa[i].win>max)
					max=tpa[i].win;
				break;
			}
		}
		cin >> b;
		for(int i=0;i<21;++i){
			if(tpa[i].name==b||tpa[i].name=="030"){
				tpa[i].name=b;
				tpa[i].lose++;
				break;
			}
		}
	}
	for(int i=0;i<21;++i){
		if(tpa[i].win==max&&tpa[i].lose<min){
			min=tpa[i].lose;
		}
	}
	for(int i=0;i<21;++i){
		if(tpa[i].win==max&&tpa[i].lose==min){
			cout << tpa[i].name;
			break;
		}
	}
} 
