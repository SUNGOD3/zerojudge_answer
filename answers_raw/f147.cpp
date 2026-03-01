#include <iostream>
using namespace std;
string a[5]={"Medium Wac 4","WChicken Nugget 8","Geez Burger 7","ButtMilk Crispy Chicken 6","Plastic Toy 3"};
string b[4]={"German Fries 2","Durian Slices 3","WcFurry 5","Chocolate Sunday 7"};
int aa[5]={4,8,7,6,3},bb[4]={2,3,5,7},total=0,n;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> n){
		if(n==0)break;
		else if(n==1){
			cin >> n;
			cout << a[n-1];
			total+=aa[n-1];
		}
		else{
			cin >> n;
			cout << b[n-1];
			total+=bb[n-1];
		}
		cout << "\n"; 
	}
	cout << "Total: " << total;
} 
