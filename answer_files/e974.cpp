#include <iostream>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int a,b,c,w=0;
	cin >> a >> b >> c;
	int sit[a][b],n=1,right[a],back[b];
	for(int i=0;i<a;i++)
		for(int j=0;j<b;j++)
			sit[i][j]=n++;
	while(++w!=c){
		if(w&1){
			for(int i=0;i<a;i++)
				right[i]=sit[i][b-1];
			for(int j=b-2;j>=0;j--)
				for(int i=0;i<a;i++)
					sit[i][j+1]=sit[i][j];	
			for(int i=0;i<a;i++)
				sit[i][0]=right[i];
		}
		else{
			for(int j=0;j<b;j++)
				back[j]=sit[a-1][j];
			for(int i=a-2;i>=0;i--)
				for(int j=0;j<b;j++)
					sit[i+1][j]=sit[i][j];	
			for(int j=0;j<b;j++)
				sit[0][j]=back[j];
		}
	}
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++)
			cout << sit[i][j] << " ";
		cout << "\n";
	}
} 
