#include<iostream>
int main()
{
	std::cin.tie(0);
    std::cin.sync_with_stdio(false);
	int data[4800];
	int i,j,k=1; 
	bool n=0;
	data[0]=2;
	for(i=3;i<4800;i+=2){
		n=0;
		for(j=0;j<k;j++){
			if(i%data[j]==0){
				n=1;
				break;
			}
		}
		if(n!=1){
			data[k]=i;
			k++;
		}
	}
	long long int x,sum;
	while(std::cin>>x){
		sum=0;
		for(j=0;j<k;j++){
			if(x<=1)
				break;
			while(x%data[j]==0){
				x/=data[j];
				sum+=data[j];
			}	
		}
		if(x>1)
			sum+=x;
		std::cout<<sum<<"\n";
	}
	return 0;
}
