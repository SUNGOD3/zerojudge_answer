#include <iostream>
using namespace std;
int main(){
	int N,i=1;;
	while(cin >> N){
		int a[N],c[20001]={0};
		bool ans=0;
		for(int i=0;i<N;i++){
			cin >> a[i];
			if((i!=0&&a[i]<=a[i-1])||a[i]<1)
				ans=1;
		}
		for(int i=0;i<N&&ans!=1;i++){
			for(int j=i;j<N&&ans!=1;j++){
				c[a[i]+a[j]]++;
				if(c[a[i]+a[j]]>1)
					ans=1;
			}
		}	
		cout << "Case #" << i << ": ";
		i++;
		(ans==0)?cout << "It is a B2-Sequence.\n\n":cout << "It is not a B2-Sequence.\n\n";
	}
} 
