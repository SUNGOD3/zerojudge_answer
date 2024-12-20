#include <iostream>
#include <string>

using namespace std;

int main (){
	
	string ID;
	int sum=0,p=0;
	while(cin >> ID){
		if(65<=ID[0]&&72>=ID[0]){
			sum+=ID[0]-55;
		}
		else if(ID[0]==73){
			sum+=ID[0]-39;
		}
		else if(74<=ID[0]&&78>=ID[0]){
			sum+=ID[0]-56;
		}
		else if(ID[0]==79){
			sum+=ID[0]-44;
		}
		else if(80<=ID[0]&&86>=ID[0]){
			sum+=ID[0]-57;
		}
		else if(ID[0]==87){
			sum+=ID[0]-55;
		}
		else if(88<=ID[0]&&89>=ID[0]){
			sum+=ID[0]-58;
		}
		else if(ID[0]==90){
			sum+=33;
		}
		p=sum%10;
		p*=9;
		sum/=10;
		sum+=p;
		int k=9;
		for(int i=1;i<=8;i++){
			k--;
			sum+=(ID[i]-48)*k;
		}
		sum+=ID[9]-48;
		if(sum%10==0){
			cout << "real" << endl; 
		}
		else{
			cout << "fake" << endl;
		}
		sum=0;	
	}
	
} 
